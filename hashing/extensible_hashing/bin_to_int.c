#pragma once
int bin_to_int(int* bin,int index)
{
    int n=0,p=1;
    for(int i=1;i<index&&i<=bin[0];i++)
    {
        n+=bin[i]*p;
        p*=2;
    }

    return n;
}