int* rev_int_to_bin(int a)
{
    int* bin=(int*)malloc(sizeof(int));
    bin[0]=1;

    while(a)
    {
        bin=realloc(bin,++bin[0]);
        bin[bin[0]-1]=a%2;
        a/=2;
    }

    return bin;

}