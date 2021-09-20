#pragma once 

void swap_next(struct node* p,struct node* q)
{
    struct node* t =q->n;
    q->n=p->n;
    p->n=t;
}

void swap_pointer(struct node* p,struct node* q)
{
    struct node* t=p->n;
    p->n=q->n;
    q->n=t;

    swap_next(p->n,q->n);
}

void swap_pointer_change_head(struct node* q)
{
    struct node* t=h; 
    h=q->n;
    q->n=t;
    swap_next(h,q->n);
}

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