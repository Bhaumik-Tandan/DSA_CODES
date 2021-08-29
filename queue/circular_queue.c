#include<stdio.h> 
#define s 5
int ar[s],f=0,r=-1,e;
add(int a)
{
    if(e==s){
    printf("\nQueue Full");
    return 1;
    }
    r=(r+1)%s;
    ar[r]=a;
    e++;
    printf("\n%d added",a);
}
del()
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
    add(3);
    add(23);
     add(94);
    add(232);
     add(4);
    add(231);
    disp();
    printf("\n %d deleted",del());
    add(299);
    disp();
    printf("\n %d deleted",del());
    printf("\n %d deleted",del());
    printf("\n %d deleted",del());
    printf("\n %d deleted",del());
    printf("\n %d deleted",del());
    disp();
    add(3);
    add(23);
     add(4);
    add(231);
    disp();
}