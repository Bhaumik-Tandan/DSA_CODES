#include <iostream>
#include <vector>
using namespace std;
void multiply(long n, vector<int> &a)
{
    int c = 0;
    for (int i = 0; i < a.size(); i++)
    {
        long m = a[i] * n + c;
        a[i] = m % 10;
        c = m / 10;
    }
    while (c != 0)
    {
        a.push_back(c % 10);
        c /= 10;
    }
}
main()
{
    long n;
    cin >> n;
    vector<int> a;
    a.push_back(1);
    for (long i = 2; i <= n; i++)
        multiply(i, a);
    for (int i = a.size() - 1; i >= 0; i--)
        cout << a[i];
}
