#include "cll.h"

void distance()
{
    if(!l)
    {
        printf("\nList empty");
        return;
    }

    printf("\nEnter the first element: ");
    int f,s;
    scanf("%d",&f);
    printf("Enter the second element: ");
    scanf("%d",&s);

    node* p=l;

    while(p->d!=f)
    p=p->n;

    f=0;

    while(p->d!=s && ++f)//used to increment as well && does not goes to 2nd if first found false
        p=p->n;

    printf("Distance=%d",f);
}

main()
{
    takeinput();
    distance();
    printf("\nThe linked list is:-")
    disp();
}