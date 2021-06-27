#include <iostream>
using namespace std;
void fun(int *p)
{
    if ((p) == NULL)
        cout << "cfe";
    p = new int;
    *p = 89;
}
main()
{
    int *p = 0;
    fun(p);
    cout << *p;
}