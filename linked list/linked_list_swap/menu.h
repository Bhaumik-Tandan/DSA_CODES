#pragma once

void menu()
{
    printf("\n\n1)Set linked list\n2)Swap items\n3)Swap pointers\n4)Display linked list\n5)Display address");
    printf("\n6)Exit\n Enter your choice: ");

    int c;

    scanf("%d",&c);

    if(c==1)
    takeinput();

    else if(c==2)
    swap(0);

    else if (c==3)
    swap(1);

    else if(c==4)
    disp(0);

    else if(c==5)
    disp(1);

    else
    return;

    menu();   

}