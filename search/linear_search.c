#include<stdio.h>

search(int p,int *a,int s)
{
    if(p==0 || a[p-1]==s)
    return p-1;
    return search(p-1,a,s);
}

main()
{
    int a[]={1,2,3,4,5,6,7,8};
    printf("\n%d found at %d",8,search(8,a,8));
    printf("\n%d found at %d",24,search(8,a,24));
    printf("\n%d found at %d",1,search(8,a,1));
    printf("\n%d found at %d",5,search(8,a,5));
}