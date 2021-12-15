#include <stdio.h>

int front = -1, rear = -1, n;
int Cqueue[100];

void Front();
void Rear();
void enQueue();
void deQueue();

int main()
{
    int choice, value;
    printf("Enter the size of the circular queue : ");
    scanf("%d", &n);
    printf("Note:\n 1.Front: It is used to get the front element from the Queue.\n 2.Rear-It is used to get the rear element from the Queue.\n 3. enQueue(value)- This function is used to insert the new value in the Queue.\n 4.deQueue()- This function deletes an element from the Queue.\n 5.Exit\n\n");

    while (choice != 5)
    {
        printf("Enter your choice [1/2/3/4/5 ] : ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
        {
            Front();
            break;
        }

        case 2:
        {
            Rear();
            break;
        }

        case 3:
        {
            if ((rear + 1) % n == front)
            {
                printf("Circular queue is overflow\n\n");
                break;
            }

            else
            {
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                enQueue(value);
                break;
            }
        }

        case 4:
        {
            deQueue();
            break;
        }

        default:
        {
            printf("EXITTED\n");
        }
        }
    }

    return 0;
}

// Front
void Front()
{
    if (front == -1 && rear == -1)
    {
        printf("Circular queue is empty\n");
    }
    else
    {
        printf("The front element is %d\n", Cqueue[front]);
    }

    printf("\n");
}

// Rear
void Rear()
{
    if (front == -1 && rear == -1)
    {
        printf("Circular queue is empty\n");
    }
    else
    {
        printf("The rear element is %d\n", Cqueue[rear]);
    }

    printf("\n");
}

//Enqueue
void enQueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        Cqueue[rear] = x;
    }
    else
    {
        rear = (rear + 1) % n;
        Cqueue[rear] = x;
    }
    printf("\n");
}

//Dequeue
void deQueue()
{
    if (front == -1 && rear == -1)
    {
        printf("Circular queue is empty.\n");
    }
    else if (front == rear)
    {
        printf("%d is removed from the queue.\n", Cqueue[front]);
        front = rear = -1;
    }

    else
    {
        printf("%d is removed from the queue.\n", Cqueue[front]);
        front = (front + 1) % n;
    }
    printf("\n");
}
