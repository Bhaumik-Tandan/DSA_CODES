#include<iostream>
using namespace std;

#define SIZE 100
int fib(int n)
{
    static int memo[SIZE]={-1};
    if(n<2)
    return 1;
    if(!memo[n])
    memo[n]=fib(n-2)+fib(n-1);
    return memo[n];
}

main()
{
    cout<<fib(7);
}