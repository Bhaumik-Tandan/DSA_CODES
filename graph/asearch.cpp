#include <map>
#include <iostream>
using namespace std;
map<string,bool> v;//gives visited or not
void dist(map<string, map<string, int>> m,map<string, int> ol,string s,string e)
{
    if(s=="p" || e==s)
    return;
    int f=0;    
    int min=2147483647;//int max
    string n;
    map<string, int>::iterator itr;
    for (itr = m[s].begin(); itr != m[s].end(); ++itr) 
        if(itr->first==e)
        {
            f=1;
            n=e;
            break;
        }
        else if(min>((itr->second)+(ol[itr->first])))
        if(v[itr->first]==0){
        min=(itr->second)+(ol[itr->first]);
        n=itr->first;
        }
    cout<<"-->"<<n;
    v[n]=1;
    if(f==0)
    dist(m,ol,n,e);
}
main()
{
    map<string, map<string, int>> m; //to denote graph

    m["Oradea"]["Zerind"] = 71;
    m["Zerind"]["Oradea"] = 71;
    m["Oradea"]["Sibiu"] = 151;
    m["Sibiu"]["Oradea"] = 151;
    m["Arad"]["Sibiu"] = 140;
    m["Sibiu"]["Arad"] = 140;
    m["Zerind"]["Arad"] = 75;
    m["Arad"]["Zerind"] = 75;
    m["Arad"]["Timisoara"] = 118;
    m["Timisoara"]["Arad"] = 118;
    m["Timisoara"]["Lugio"] = 111;
    m["Lugio"]["Timisoara"] = 111;
    m["Lugio"]["Mehadia"] = 70;
    m["Mehadia"]["Lugio"] = 70;
    m["Mehadia"]["Dobreta"] = 75;
    m["Dobreta"]["Mehadia"] = 75;
    m["Dobreta"]["Craiova"] = 120;
    m["Craiova"]["Dobreta"] = 120;
    m["Craiova"]["Pitesti"] = 138;
    m["Pitesti"]["Craiova"] = 138;

    m["Craiova"]["Rimnicu Vilcea"] = 146;
    m["Rimnicu Vilcea"]["Craiova"] = 146;
    m["Sibiu"]["Rimnicu Vilcea"] = 80;
    m["Rimnicu Vilcea"]["Sibiu"] = 80;
    m["Rimnicu Vilcea"]["Pitesti"] = 97;
    m["Pitesti"]["Rimnicu Vilcea"] = 97;
    m["Fagaras"]["Sibiu"] = 99;
    m["Sibiu"]["Fagaras"] = 99;
    m["Fagaras"]["Bucharest"] = 211;
    m["Bucharest"]["Fagaras"] = 211;
    m["Bucharest"]["Giurgiu"] = 90;
    m["Giurgiu"]["Bucharest"] = 90;
    m["Bucharest"]["Urzicena"] = 85;
    m["Urzicena"]["Bucharest"] = 85;
    m["Bucharest"]["Pitesti"]=97;
    m["Pitesti"]["Bucharest"]=97;
    m["Urzicena"]["Hirsova"] = 98;
    m["Hirsova"]["Urzicena"] = 98;
    m["Hirsova"]["Eforie"] = 86;
    m["Eforie"]["Hirsova"] = 86;
    m["Urzicena"]["Vasliu"] = 142;
    m["Vasliu"]["Urzicena"] = 142;
    m["Vasliu"]["lasi"] = 92;
    m["lasi"]["Vasliu"] = 92;
    m["lasi"]["Neamt"] = 87;
    m["Neamt"]["lasi"] = 87;

    map<string, int> ol; //denotes distace from start
    ol["Arad"] = 366;
    ol["Bucharest"] = 0;
    ol["Craiova"] = 160;
    ol["Dobreta"] = 242;
    ol["Eforie"] = 162;
    ol["Fagaras"] = 178;
    ol["Giurgiu"] = 77;
    ol["Hirsova"] = 151;
    ol["lasi"] = 226;
    ol["Lugoj"] = 244;
    ol["Mehadia"] = 241;
    ol["Neamt"] = 234;
    ol["Oradea"] = 380;
    ol["Pitesti"] = 98;
    ol["Rimnicu Vilcea"] = 193;
    ol["Sibiu"] = 253;
    ol["Timisoara"] = 329;
    ol["Urziceni"] = 199;
    ol["Vaslui"] = 274;
    ol["Zerind"] = 374;
    string start="Zerind",goal="Bucharest";
    map<string, int>::iterator itr;
    for (itr = ol.begin(); itr != ol.end(); ++itr) 
    v[itr->first]=0;
    v[start]=1;
    cout<<"The best path between "<<start<<" and "<<goal<<" is: "<<start;
    dist(m,ol,start,goal);
}
