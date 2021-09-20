#pragma once

void swap_item(struct node* p,struct node* q)
{
    int t=p->d;
    p->d=q->d;
    q->d=t;
}