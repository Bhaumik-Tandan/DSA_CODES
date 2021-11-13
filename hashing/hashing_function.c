#include<stdio.h>
#include<stdlib.h>
int *arr,h;
int *hash_table;
int a,b;

void take_input()
{
    printf("(19BIT0292)Enter size of the hash: ");
    scanf("%d",&h);
    arr = (int *)malloc(h*sizeof(int));
    hash_table = (int *)calloc(h,sizeof(int));
    printf("Enter the elements of the array: ");
    for(int i=0;i<h;i++)
        scanf("%d",&arr[i]);
    printf("Assuming hash function is a*k+b Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
}

void fill_hash_table_linear_probing()
{
    for(int i=0;i<h;i++)
    {
        int index = (a*arr[i]+b)%h;
        while(hash_table[index]!=0)
            index = (index+1)%h;
        hash_table[index] = arr[i];
    }
}

void print_hash_table()
{
    for(int i=0;i<h;i++){
        printf("%d->%d ",i,hash_table[i]);
    printf("\n");
    }
}

main()
{
    take_input();
    fill_hash_table_linear_probing();
    print_hash_table();
}