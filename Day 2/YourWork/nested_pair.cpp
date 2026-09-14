#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, pair<string, double>>p;
    
    p = {1, {"Alice", 3.95}};
    cout<<"id: "<<p.first;
    cout<<"name: "<<p.second.first<<endl;
    cout<<"CGPA: " <<p.second.second<<endl;
   return 0;
}     