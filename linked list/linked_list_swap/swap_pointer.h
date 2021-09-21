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