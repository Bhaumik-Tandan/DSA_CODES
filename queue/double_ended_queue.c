#include<stdio.h> 
#define s 5
int ar[s],f=0,r=-1,e;
add_rear(int a)
{
    if(e==s){
    printf("\nQueue Full");
    return 1;
    }
    r=(r+1)%s;
    ar[r]=a;
    e++;
    printf("\n%d added to rear",a);
}

add_front(int a)
{
    if(e==s){
    printf("\nQueue Full");
    return 1;
    }
    f-=1;
    if(f==-1)
    f=s-1;
    ar[f]=a;
    e++;
    printf("\n%d added to front",a);
}
del_front()
{
    if(e==0)
    {
        printf("\nQueue Empty");
        return;
    }
    e--;
    int t=f;
    f=(f+1)%s;
    return ar[t];
}

del_rear()
{
    if(e==0)
    {
        printf("\nQueue Empty");
        return;
    }
    e--;
    int t=r;
    r-=1;
    if(r==-1)
    r=s-1;
    return ar[t];
}
disp()
{
    if(e==0)
    {
        printf("\nQueue Empty");
        return;
    }
    printf("\nFront ---> ");
    int i=f;
    while (i!=r)
    {
        printf("%d ",ar[i]);
        i=(i+1)%s;
    } 
    printf("%d ---> Rear",ar[i]);
}

main()
{
    add_rear(3);
    add_front(23);
    add_rear(94);
    disp();
    printf("\n %d deleted from front",del_front());
    add_rear(232);
     add_front(4);
     disp();
   printf("\n %d deleted from rear",del_rear());
}