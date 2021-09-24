#include<stdio.h>
#include<stdlib.h>
int *arr,n;

void take_input()
{
    printf("\nEnter the size of the array: ");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    printf("Enter the array: ");
    for(int i=0;i<n;i++)
    scanf("%d",arr+i);
}

void disp()
{
    printf("\nArray:");
    for(int i=0;i<n;i++)
    printf(" %d",arr[i]);
}

void swap(int p1,int p2)
{
    int t=arr[p1];
    arr[p1]=arr[p2];
    arr[p2]=t;
}