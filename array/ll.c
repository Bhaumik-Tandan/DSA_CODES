#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int calcSize(struct Node *node)
{
    int size = 0;

    while (node != NULL)
    {
        node = node->next;
        size++;
    }
    return size;
}

void insert(struct Node **head, int data)
{

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void display(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
{
    struct Node *temp = head;

    while (temp != NULL && temp->next != NULL)
    {
        int t = temp->data;
        temp->data = temp->next->data;
        temp->next->data = t;
    }
}
int main()
{

    struct Node *h1 = NULL, *h2 = NULL, *h3 = NULL, *t;
    int n;
    printf("Enter the number of elements in linked list 1: ");
    scanf("%d", &n);
    printf("\nEnter thes linked list 1: ");
    for (int i = 0; i < n; i++)
    {
        int p;
        scanf("%d", &p);
        insert(&h1, p);
    }
    printf("Enter the number of elements in linked list 2: ");
    scanf("%d", &n);
    printf("\nEnter the linked list 2: ");
    for (int i = 0; i < n; i++)
    {
        int p;
        scanf("%d", &p);
        insert(&h2, p);
    }
    t = h1;
    while (t)
    {
        if (t->next == NULL)
            break;
        t = t->next;
        insert(&h3, t->data);
        t = t->next;
    }
    t = h2;
    while (t)
    {
        if (t->next == NULL)
            break;
        t = t->next;
        insert(&h3, t->data);
        t = t->next;
    }
    printf("Even elements are: ");
    display(h3);
}