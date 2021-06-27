#include <iostream>
using namespace std;
int cal(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i == n)
        return 0;
    int p = n / i;
    int l = cal(p);
    int r = cal(i);
    return l > r ? l + 1 : r + 1;
}
main()
{
    int n;
    cout << "Enter the value of number: ";
    cin >> n;
    cout << cal(n);
}