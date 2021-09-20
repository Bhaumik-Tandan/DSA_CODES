#pragma once

struct node* get_node(struct node* h,int t)
{
    if(t<=0 || h==0)
    return 0;
    struct node *p=h;
    while(p && --t)
    p=p->n;
    return p;
}