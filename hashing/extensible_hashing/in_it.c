#pragma once
#include "variables.c"
void in_it()
{
    global_depth=2;
    bucket_size=3;
    directory=(int**)malloc(sizeof(int*)*global_depth);
    for(int i=0;i<global_depth;i++)
    {
        directory[i]=(int*)malloc(sizeof(int)*bucket_size);
        for(int j=0;j<bucket_size;j++)
        {
            directory[i][j]=-1;
        }
    }
}