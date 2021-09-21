#include "cll.h"

void reverse()
{
    if(!l)
    {
        printf("\nList empty");
        return;
    }

    node *prev=l,*c=l->n;
    l=c;

    do
    {
        node* t=c->n;
        c->n=prev;        
        prev=c;
        c=t;
    }
    while(c!=l);

}

main()
{
    takeinput();
    disp();
    reverse();
    printf("\nReverse: ");
    disp();
}