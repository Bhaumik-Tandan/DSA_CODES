#include <stdio.h>
#include "in_it.c"
#include "ins.c"
#include "int_to_bin.c"
main()
{
    in_it();

    printf("\nEnter the number of elements to be insereted: ");
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Enter the element to be inserted: ");
        int x;
        scanf("%d",&x);
        ins(x);
    }

    for(int i=0;i<global_depth;i++)
    {
        printf("%s: ",int_to_bin(directory[i]));
        for(int j=0;j<bucket_size;j++)
        {
            printf("%d ",directory[i][j]);
        }

    }
}