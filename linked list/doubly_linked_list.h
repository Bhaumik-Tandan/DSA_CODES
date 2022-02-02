struct node
{
    int d;
    struct node *n;
    struct node *p;
} * h;

ins_r(int n)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->d = n;
    t->n = 0;
    if (!h){
        h = t;
        return;
    }
    struct node *p = h;
    while (p->n)
        p = p->n;
    p->n = t;
    t->p=p;
}

del_r()
{
    if (!h || !(h->n))
    {
        h=0;
        return;
    }
    struct node *p = h;
    while (p->n->n)
        p = p->n;
    p->n=0;
}

ins_f(int n)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->d = n;
    t->n = h;
    t->p=0;
    if(h)
    h->p=t;
    h=t;
}

void disp(int type)//0 denote ele 1 denote address
{
    printf("\n%s<-",0);
    struct node *t = h;
    while (t)
    {
        if(type)
        printf("%d<->",t);
        else
        printf("%d<->",t->d);
        t = t->n;
    }

    printf("\b\b\b->%s",t);
}

ins_p(int n,int po)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->d = n;
    t->n = 0;
    if (!h)
    {
        h = t;
        return;
    }
    struct node *p = h;
    int co=0;
    while(co<po-1)
    {
        p=p->n;
        co++;
    }
    t->n=p->n;
    p->n->p=t;
    p->n=t;
    t->p=p;
}

del_f()
{
    if(!h)
    return;
    h=h->n;
    if(h)
    h->p=0;
}

del_p(int po)
{
    if (!h || !(h->n))
    {
        h = 0;
        return;
    }
    struct node *p = h;
    while (p->n->n && --po>1)
        p = p->n;
    struct node *t=p->n;
    p->n=t->n;
    t->n->p=p;
}

void takeinput()
{
    h=0;
    int n;
    printf("\nEnter the length of the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d",&t);
        ins_r(t);
    }
}

menu()
{
    int choice;
    printf("\n1)Create new linked list\n2)Insert at the beginning\n3)Insert at the end\n4)Insert at a given position\n5)Delete at the beginning\n6)Delete at the end\n7)Delete at a given position\n8)Display\n9)Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    int e,pos;
    switch (choice)
    {
        case 1:
            takeinput();
            break;
        case 2:
            printf("Enter the element to be inserted: ");
            scanf("%d",&e);
            ins_f(e);
            break;
        case 3:
            printf("Enter the element to be inserted: ");
            scanf("%d",&e);
            ins_r(e);
            break;
        case 4:
            printf("Enter the element to be inserted: ");
            scanf("%d",&e);
            printf("Enter the position: ");
            scanf("%d",&pos);
            ins_p(e,pos);
            break;
        case 5:
            del_f();
            break;
        case 6:
            del_r();
            break;
        case 7:
            printf("Enter the position: ");
            scanf("%d",&pos);
            del_p(pos);
            break;
        case 8:
            disp(0);
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    menu();
}
