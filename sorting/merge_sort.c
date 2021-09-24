#include "array_boiler.h"

void merge(int l, int m, int r)
{
   int l1=m-l+1,l2=r-m;
   int left[l1],right[l2];

   for(int i=0;i<l1;i++)
   left[i]=arr[i+l];

   for(int i=0;i<l2;i++)
   right[i]=arr[i+m+1];

   int a1=0,a2=0,f=l;

   while(a1<=m-l && a2<r-m)
   if(left[a1]<right[a2])
   arr[f++]=left[a1++];
   else
   arr[f++]=right[a2++];

   while(a1<l1)
   arr[f++]=left[a1++];

   while(a2<l2)
   arr[f++]=right[a2++];
}
  

void mergeSort(int l, int r)
{
    if (l <r) 
    {
        int m = l + (r - l) / 2;
        mergeSort(l, m);
        mergeSort(m + 1, r);
        merge(l, m, r);
    }
}
main()
{
    take_input();
    mergeSort(0,n-1);
    disp();
}