#include<stdio.h>

search(int st,int en,int *a,int s)
{
   if(st+1>=en)
   return -1;
   int m=st+(en-st)/2;
   if(a[m]==s)
   return m;
   if(a[m]>s)
   return search(st,m,a,s);
   if(a[m]<s)
   return search(m,en,a,s);
}

main()
{
    int a[]={1,2,3,4,5,6,7,8,10,11,12};
    printf("\n%d found at %d",4,search(0,12,a,4));
    printf("\n%d found at %d",5,search(0,12,a,5));
    printf("\n%d found at %d",10,search(0,12,a,10));
    printf("\n%d found at %d",-32,search(0,12,a,-32));
    printf("\n%d found at %d",832,search(0,12,a,832));
}