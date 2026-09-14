#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "mahdin";
    
  
    for(int i = 0; i < s.size(); i++) {
        if(i % 2 == 0) {
            s[i] = toupper(s[i]); 
        }
    }
    
    cout << "Modified string: " << s << endl; 
    
    return 0;
}