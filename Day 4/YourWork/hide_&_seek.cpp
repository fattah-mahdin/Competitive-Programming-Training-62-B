#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n;
    cin >> t;
    while(t--) {
       cin >> n;
    
    vector<string> s(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    string longest = "";
    int max_s = -1;
    
   
    for(string s : s) {
        if(s.size() > max_s) {
            max_s = s.size();
            longest=s;
        }
    }
    
    cout << longest << endl;
}   
}  