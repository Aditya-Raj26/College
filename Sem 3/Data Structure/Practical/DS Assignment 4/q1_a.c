#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int maxsize;
    int top;
    int *items;
};

struct stack *newStack(int capacity)
{
    struct stack *pt = (struct stack *)malloc(sizeof(struct stack));

    pt->maxsize = capacity;
    pt->top = -1;
    pt->items = (int *)malloc(sizeof(int) * capacity);

    return pt;
}

int size(struct stack *pt)
{
    return pt->top + 1;
}

//check stack is empty or not
int isEmpty(struct stack *pt)
{
    return pt->top == -1;
}

//check stack is full or not
int isFull(struct stack *pt)
{
    return pt->top == pt->maxsize - 1;
}

// PUSH implimentation
void push(struct stack *pt, int x)
{

    if (isFull(pt))
    {
        printf("Overflow\nProgram Terminated\n");
        exit(EXIT_FAILURE);
    }

    printf("Inserting %d\n", x);

    pt->items[++pt->top] = x;
}

// PEEK implimentation
int peek(struct stack *pt)
{

    if (!isEmpty(pt))
    {
        return pt->items[pt->top];
    }
    else
    {
        exit(EXIT_FAILURE);
    }
}

// POP implimentation
int pop(struct stack *pt)
{

    if (isEmpty(pt))
    {
        printf("Underflow\nProgram Terminated\n");
        exit(EXIT_FAILURE);
    }

    printf("Removing %d\n", peek(pt));

    return pt->items[pt->top--];
}

int main()
{
    struct stack *pt = newStack(5);

    push(pt, 1);
    push(pt, 2);
    push(pt, 3);

    printf("\nThe top element is %d\n", peek(pt));
    printf("\nThe stack size is %d\n", size(pt));

    pop(pt);
    pop(pt);
    pop(pt);

    if (isEmpty(pt))
    {
        printf("\nThe stack is empty");
    }
    else
    {
        printf("\nThe stack is not empty");
    }

    return 0;
}