#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;
void insertion_beginning();
void insertion_specified();
void deletion_specified();
void display();
void search();
void max_and_min();

void main()
{
    printf("\n1.Insert in begining\n2.Insertion at any position given by the user\n3.Deletion at any position given by the user \n4.Display the list\n5.Search for a specific element\n6.Find maximum and minimum elements.\n7.Exit\n");
    int choice = 0;
    while (choice != 7)
    {

        printf("\nEnter a choice [1/2/3/4/5/6/7] : ");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            insertion_beginning();
            break;
        case 2:
            insertion_specified();
            break;

        case 3:
            deletion_specified();
            break;
        case 4:
            display();
            break;
        case 5:
            search();
            break;
        case 6:
            max_and_min();
            break;
        case 7:
            exit(0);
            break;

        default:
            printf("Please enter valid choice..");
        }
    }
}
void insertion_beginning()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("Enter the value to be inserted: ");
        scanf("%d", &item);

        if (head == NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            ptr->data = item;
            head = ptr;
        }
        else
        {
            ptr->data = item;
            ptr->prev = NULL;
            ptr->next = head;
            head->prev = ptr;
            head = ptr;
        }
        printf("Node inserted\n");
    }
}

void insertion_specified()
{
    struct node *ptr, *temp;
    int item, loc, i;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        temp = head;
        printf("Enter the location: ");
        scanf("%d", &loc);
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\n There are less than %d elements", loc);
                return;
            }
        }
        printf("Enter value to be inserted : ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = temp->next;
        ptr->prev = temp;
        temp->next = ptr;
        temp->next->prev = ptr;
        printf("node inserted\n");
    }
}

void deletion_specified()
{
    struct node *ptr, *temp;
    int val;
    printf("Enter the data after which the node is to be deleted : ");
    scanf("%d", &val);
    ptr = head;
    while (ptr->data != val)
        ptr = ptr->next;
    if (ptr->next == NULL)
    {
        printf("\nCan't delete\n");
    }
    else if (ptr->next->next == NULL)
    {
        ptr->next = NULL;
        printf("node deleted\n");
    }
    else
    {
        temp = ptr->next;
        ptr->next = temp->next;
        temp->next->prev = ptr;
        free(temp);
        printf("node deleted\n");
    }
}

void display()
{
    struct node *ptr;
    printf("Linked list is : \n");
    ptr = head;
    while (ptr != NULL)
    {
        printf(" %d ->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void search()
{
    struct node *ptr;
    int item, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search for : ");
        scanf("%d", &item);
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("Item found at location %d ", i + 1);
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            printf("Item not found\n");
        }
    }
}

void max_and_min()
{
    int max = head->data, min = head->data;
    struct node *z = head, *y = head;

    while (z != NULL)
    {
        if (max < z->data)
        {
            max = z->data;
        }
        z = z->next;
    }

    while (y != NULL)
    {
        if (min > y->data)
        {
            min = y->data;
        }
        y = y->next;
    }

    printf("Maximum element from the list is : %d", max);
    printf("\nMinimum element from the list is : %d\n", min);
}
