#pragma once
void swap_prev(struct node *p,struct node *q)
{
    struct node* t =q->p;
    q->p=p->p;
    p->p=t;
}

void swap_pointer_dll(struct node *p,struct node *q)
{
    q->p->n=p;

    if(p==h)
        h=q;

    else
    p->p->n=q;


    if(q->n)
    q->n->p=p;
    
    p->n->p=q;

    swap_next(p,q);
    swap_prev(p,q);
}