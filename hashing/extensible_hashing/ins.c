#pragma once

void increase_global_depth()
{
    global_depth++;
    for(int i=0;i<global_depth-1;i++)
    {
        for(int j=0;j<bucket_size;j++)
        {
            if(directory[i][j]==-1)
            break;
            ins(directory[i][j]);
        }
    }
}

void ins(int n)
{
    int ni=n;
    #include "hash_fun.c"
    #include "int_to_bin.c"
    #include "bin_to_int.c"

    ni=hash_fun(n);

    int *bin=int_to_bin(ni);
    int index=bin_to_int(bin,global_depth);

    for(int i=0;i<bucket_size;i++)
    {
        if(directory[index][i]==-1)
        {
            directory[index][i]=n;
            return;
        }
    }

    increase_global_depth();
    ins(n);

}