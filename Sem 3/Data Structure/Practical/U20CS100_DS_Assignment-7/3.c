#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insert();
void print();
void print_middle();
int data;

int main()
{

    int a, choice = 1;
    head = NULL;

    printf("To print the middle element of the linked list\n\n");
    while (choice == 1)
    {

        insert();
        printf("If u want to insert node again ,press 1 or else press 0 : ");
        scanf("%d", &choice);
        printf("\n");
    }

    print();
    print_middle();
    printf("\n");

    return 0;
}

void insert()
{
    struct node *newnode, *temp;
    int item;

    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Overflow\n");
    }
    else
    {
        printf("Enter the value to be inserted in the list : ");
        scanf("%d", &item);
        newnode->data = item;
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
        printf(" Linked list is : ");
        while (temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n\n");
    }
}

void print_middle()
{

    struct node *temp = head;
    int count = 0, mid;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    mid = count / 2;
    temp = head;

    for (int i = 0; i < mid; i++)
    {
        temp = temp->next;
    }
    printf("The middle element of linked list is : %d", temp->data);
}
