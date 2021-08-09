#include <iostream>
#include <vector>
#include<map>
#include<queue>
using namespace std;

main()
{
   bool* v=new bool [4]();
   queue<int> q;
   q.push(3);
   q.push(4);
   q.pop();
   cout<<q.front();

}