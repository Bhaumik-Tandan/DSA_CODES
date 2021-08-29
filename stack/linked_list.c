#include <stdio.h>
struct node
{
    int d;
    struct node *n;
} * h;
typedef struct node node;

push(int d)
{
    node *t = malloc(sizeof(node));
    t->d = d;
    t->n = h;
    h=t;
    printf("\n%d pushed",d);    
}

pop()
{
    if (!h)
    {
        printf("\nStack Empty");
        return;
    }
    int a = h->d;
    h = h->n;
    return a;
}

disp()
{
    if (!h)
    {
        printf("\nStack Empty");
        return;
    }
    printf("\nStack is: ");
    node *p = h;
    while (p)
    {
        printf("%d ", p->d);
        p = p->n;
    }
}
main()
{
    push(3);
    push(23);
     push(94);
    push(232);
     push(4);
    push(231);
    disp();
    printf("\n %d poped",pop());
    push(299);
    disp();
    printf("\n %d poped",pop());
    printf("\n %d poped",pop());
    printf("\n %d poped",pop());
    printf("\n %d poped",pop());
    printf("\n %d poped",pop());
    disp();
    push(3);
    push(23);
     push(4);
    push(231);
    disp();

}