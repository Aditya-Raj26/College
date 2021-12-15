#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int arr[100], n;

struct node
{
    int data;
    struct node *next;
};
struct node *head;

// inserting at end
void insert(int data)
{
    struct node *newnode, *temp;
    int item;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        newnode->data = data;
        if (head == NULL)
        {
            newnode->next = NULL;
            head = newnode;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = NULL;
        }
    }
}

//prints the linked list
void print()
{
    struct node *temp;
    temp = head;
    if (temp == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\n");
        while (temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{

    int i;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe linked list is :");
    for (int i = 0; i < n; i++)
    {
        insert(arr[i]);
    }
    print();
    return 0;
}
