#include "array_boiler.h"


void bubble_sort(int i,int j)
{
    if(j<0)
    {
        i--;
        j=n-i-1;
    }
    if(i<0)
    return;
    bubble_sort(i,j-1);
    if (arr[j] > arr[j+1])//for desending order we will write arr[j]<arr[j+1]
            swap(j,j+1);   
}

main()
{
    take_input();
    bubble_sort(n-1,n-1);
    disp();
}