#include <iostream>
using namespace std;
main()
{
    int n, *a;
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        int t, j;
        cin >> t;
        for (j = 0; j < i; j++)
            if (t < a[j])
                break;
        for (int k = j; k < i; k++)
            a[k + 1] = a[k];
        a[j] = t;
    }
    int v, m = 0;
    cin >> v;
}