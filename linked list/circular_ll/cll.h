#include<stdio.h>
#include<stdlib.h>

#pragma once
struct node
{
    int d;
    struct node *n;
} * l;

typedef struct node node;

void ins(int n)
{
    node *t = (node *)malloc(sizeof(node));
    t->d = n;

    if (!l)
    {
        l = t;
        t->n = l;
        return;
    }

   t->n=l->n;
   l->n=t;
   l=t;
}

void disp()
{
    printf("\n-");
    node *t = l;
    int i=0;

    do
    {
        t = t->n;
        printf("->%d",t->d);
        i++;
    }
    while(t!=l);
    
    printf("---\n|");
    for(int j=0;j<i*3+2;j++)
    printf("_");
    printf("|");

}

void takeinput()
{
    int n;
    printf("\nEnter the number of elemnts: ");
    scanf("%d",&n);
    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d",&t);
        ins(t);
    }
}