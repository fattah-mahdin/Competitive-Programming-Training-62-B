#include<bits/stdc++.h>
using namespace std;
int main()
{
int t, n;
cin>>t;
while(t--){
cin>>n;
vector<int>v(n);
long long even =0;
long long odd = 0;

for(int i = 0;i<n;i++){
    cin>>v[i];
    if(v[i]%2==0)even+=v[i];
    else odd +=v[i];
}
 if(even > odd) {
        cout << "EVEN"<<endl;
    } else {
        cout << "ODD"<<endl;
    }
}

   return 0;
}     