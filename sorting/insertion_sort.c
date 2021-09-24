#include "array_boiler.h"

void insertion_sort(int i)
{
    if(i==0)
    return;
    int p, j;
    insertion_sort(i-1);
    p = arr[i];
    j = i - 1;
    
    while (j >= 0 && arr[j] > p)
    {
        arr[j+1] = arr[j];
        j=j-1;
    }
        arr[j + 1] = p;
}

main()
{
    take_input();
    insertion_sort(n-1);
    disp();
}