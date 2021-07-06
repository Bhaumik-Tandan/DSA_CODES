#include <iostream>
using namespace std;
main()
{
    int n;
    cin >> n;
    int *a = (int *)malloc(sizeof(int));
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n / 2; i++)
    {
        int t = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = t;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
