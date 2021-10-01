#include "array_boiler.h"



void quick_sort(int l,int n)
{
    if(n<=l)
    return;

    int j=l;

    for(int i=l;i<n;i++)
    if(arr[i]<arr[n])
    swap(i,j++);

    swap(j,n);
    
    quick_sort(l,j-1);
    quick_sort(j+1,n);
}

main()
{
    take_input();
    quick_sort(0,n-1);
    disp();
}