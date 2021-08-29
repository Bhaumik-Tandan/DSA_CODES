#include <stdio.h>
struct node
{
    int d;
    struct node *n;
} * h;
typedef struct node node;

enqueue(int d)
{
    node *t = malloc(sizeof(node));
    t->d = d;
    t->n = 0;
    printf("\n%d enqueueed",d);
    if (!h)
    {
        h = t;
        return;
    }
    node *p = h;
    while (p->n)
        p = p->n;
    p->n = t;
}

dequeue()
{
    if (!h)
    {
        printf("\nQueue Empty");
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
        printf("\nQueue Empty");
        return;
    }
    printf("\nQueue is: ");
    node *p = h;
    while (p)
    {
        printf("%d ", p->d);
        p = p->n;
    }
}
main()
{
    enqueue(3);
    enqueue(23);
     enqueue(94);
    enqueue(232);
     enqueue(4);
    enqueue(231);
    disp();
    printf("\n %d dequeued",dequeue());
    enqueue(299);
    disp();
    printf("\n %d dequeued",dequeue());
    printf("\n %d dequeued",dequeue());
    printf("\n %d dequeued",dequeue());
    printf("\n %d dequeued",dequeue());
    printf("\n %d dequeued",dequeue());
    disp();
    enqueue(3);
    enqueue(23);
     enqueue(4);
    enqueue(231);
    disp();

}