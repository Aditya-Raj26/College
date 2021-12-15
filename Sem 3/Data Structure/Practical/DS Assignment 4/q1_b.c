#include <stdio.h>
#include <stdlib.h>
#define N 5
int queue[5], front = -1, rear = -1;

// checking for underflow and overflow
int isFull()
{
    return rear == N - 1;
}
int isEmpty()
{
    return rear == -1 || front == N;
}

// ENQUEUE IMPLIMENTATION
void Enqueue(int a)
{
    if (isFull())
    {
        printf("\nQueue overflow\n");
        return;
    }
    else if (isEmpty())
    {
        front = rear = 0;
        queue[rear] = a;
    }
    else
    {
        rear = rear + 1;
        queue[rear] = a;
    }
    printf("%d is enqueued into queue\n", a);
}

// DEQUEUE IMPLIMENTATION
void Dequeue()
{
    if (isEmpty())
    {
        printf("\nQueue underflow\n");
        return;
    }
    else
    {
        printf("%d is dequeued\n", queue[front++]);
    }
}

// FRONT IMPLIMENTATION
void Front()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        printf("\n%d is at the front\n", queue[front]);
    }
}

// DISPLAY
void display()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    printf("\nThe queue elements are \n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// MAIN FUNCTION
void main()
{
    Enqueue(9);
    Enqueue(5);
    Enqueue(4);
    Enqueue(7);
    Enqueue(3);
    Enqueue(6);
    Front();
    display();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
}