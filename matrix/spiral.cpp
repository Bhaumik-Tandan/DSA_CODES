#include <iostream>
const int s=5;
using namespace std;
void fun(int arr[s][s],int l,int k,int m,int n)
{
    if(m<l || n<k)
    return;
    for (int i =k; i <n; i++) //for printing first line of 2d array
        cout << arr[l][i] << " ";

    for (int i =l+1; i < m; i++) //for printing the last column elements
        cout << arr[i][n - 1] << " ";

    for (int i = n - 2; i >= k; i--) //for printing the last row elements in opposite order
        cout << arr[m- 1][i] << " ";

    for (int i = m - 2; i > l; i--) //for printing the last row elements in opposite order
        cout << arr[i][k] << " ";

    fun(arr,l+1,k+1,m-1,n-1);

}
int main()
{
    int arr[][s]={
        {1,2,3,4,5},
        {6,7,6,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };

    cout << "elements are :" << endl;
    fun(arr,0,0,s,s);
}