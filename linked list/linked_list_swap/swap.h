#pragma once

void swap(int type)//1 indicates pointer 0 indicates item
{
    printf("\nEnter the node positions to be exchanged(space seperated): ");
    int p1,p2,t;
    scanf("%d %d",&p1,&p2);
    
    if(p1==p2)
    {
        printf("\n Both index are same nothing to swap");
        return;
    }

    if(p1==p2)
    {
        printf("\n Both index are same nothing to swap");
        return;
    }
    if(p1>p2)
    {
        t=p1;
        p1=p2;
        p2=t;
    }

    struct node *p=get_node(h,p1-type);
    int adder=1;

    if(!p && type==1)
    {
        p=h;    
        type=2;
        adder=0;
    }

    struct node *m=get_node(p,p2-p1+adder);

    if((!m) ||(type &&  !(m->n))) 
    {
        printf("\nInvalid Input %d",m);
        return;
    }

    if(!type)
    swap_item(p,m);
    else if(type==2)
    swap_pointer_change_head(m);
    else
    swap_pointer(p,m);

    printf("\nThe new linked list elements are:- ");
    disp(0);
    printf("\nThe new linked list address are:- ");
    disp(1);

}