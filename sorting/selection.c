#include "array_boiler.h"



void selection_sort(int p)
{
    if(p<0)
    return;
    selection_sort(p-1);    
    int m=p;
    for(int j=p+1;j<n;j++)
    if(arr[m]>arr[j])//for desending order we will write arr[m]<arr[j]
    m=j;
    swap(m,p);
}

main()
{
    take_input();
    selection_sort(n-1);
    disp();
}