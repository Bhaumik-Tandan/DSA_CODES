#include <stdio.h>
#include "in_it.c"
#include "ins.c"
main()
{
    in_it();

    printf("\nEnter the number of elements to be insereted: ");
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nEnter the element to be inserted: ");
        int x;
        scanf("%d",&x);
        ins(x);
    }
}