#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insert();
void counting_nodes();
void print();
int data;

int main()
{

    int a, choice = 1;
    head = NULL;

    printf("To count the no.of nodes with a)odd data element and b)even data element in the linked list\n\n");
    while (choice == 1)
    {

        insert();
        printf("If u want to insert node again ,press 1 or else press 0 : ");
        scanf("%d", &choice);
        printf("\n");
    }

    print();
    counting_nodes();
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

void counting_nodes()
{

    struct node *temp = head;
    int count1 = 0, count2 = 0;
    while (temp != NULL)
    {
        if (((temp->data) % 2) == 0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
        temp = temp->next;
    }
    printf(" a) Total no. of nodes with odd data element is %d", count2);
    printf("\n b) Total no. of nodes with even data element is %d", count1);
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
