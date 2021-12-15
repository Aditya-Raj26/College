#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insert_beginning();
void insert_last();
void insert_random();
void delete_beginning();
void delete_last();
void delete_random();
void search();

int main()
{
    int choice = 0;
    printf("1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Exit\n");

    while (choice != 9)
    {
        printf("\nEnter your choice[ 1/2/3/4/5/6/7/8] : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            insert_beginning();
            break;
        }

        case 2:
        {
            insert_last();
            break;
        }

        case 3:
        {
            insert_random();
            break;
        }

        case 4:
        {
            delete_beginning();
            break;
        }

        case 5:
        {
            delete_last();
            break;
        }

        case 6:
        {
            delete_random();
            break;
        }

        case 7:
        {
            search();
            break;
        }

        case 8:
        {
            exit(0);
            break;
        }

        default:
            printf("Please enter valid choice..");
        }
    }

    return 0;
}

//Insert at beginning
void insert_beginning()
{
    struct node *newnode;
    int item;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("Enter the value to be inserted : ");
        scanf("%d", &item);
        newnode->data = item;
        newnode->next = head;
        head = newnode;
        printf("Node inserted\n");
    }
}

//Insert at last
void insert_last()
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
        printf("Enter the value to be inserted : ");
        scanf("%d", &item);
        newnode->data = item;
        if (head == NULL)
        {
            newnode->next = NULL;
            head = newnode;
            printf("Node inserted\n");
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
            printf("Node inserted.\n");
        }
    }
}

//Insertion at random
void insert_random()
{
    int i = 1, loc, item, count = 1;
    struct node *newnode, *temp;
    printf("Enter the location after which you want to insert : ");
    scanf("%d", &loc);
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (loc > count)
    {
        printf("Invalid Position.\nPlease Enter Valid Position\n");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value to be inserted : ");
        scanf("%d", &item);
        newnode->data = item;
        temp = head;
        while (i < loc)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        printf("Node inserted.\n");
    }
}

//Delete at beginning
void delete_beginning()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("List is empty \n");
    }
    else
    {
        temp = head;
        head = temp->next;
        free(temp);
        printf("Node deleted from the begining.\n");
    }
}

//Deletion at the end
void delete_last()
{
    struct node *temp, *prevnode;
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("Node deleted at last.\n");
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            prevnode = temp;
            temp = temp->next;
        }
        prevnode->next = NULL;
        free(temp);
        printf("Node deleted at last.\n");
    }
}

//Deletion at random position
void delete_random()
{
    struct node *temp, *nextnode;
    int loc, i = 1;
    printf("Enter the location of the node after which you want to perform deletion : ");
    scanf("%d", &loc);
    temp = head;
    if (temp == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    else
    {
        while (i < loc)
        {
            temp = temp->next;
            i++;
        }
        nextnode = temp->next;
        temp->next = nextnode->next;
        free(nextnode);
    }
    printf("Deleted node %d \n", loc + 1);
}

void search()
{
    struct node *temp;
    int item, i = 0, flag;
    temp = head;
    if (temp == NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        printf("Enter the value of element which you want to search : ");
        scanf("%d", &item);
        while (temp != NULL)
        {
            if (temp->data == item)
            {
                printf("Element found at location %d \n", i + 1);
                flag = 0;
            }
            else
            {
                flag = 1;
            }
            i++;
            temp = temp->next;
        }
        if (flag == 1)
        {
            printf("Element not found\n");
        }
    }
}
