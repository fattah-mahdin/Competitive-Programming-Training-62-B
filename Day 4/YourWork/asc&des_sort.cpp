#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v={ 1,33,5,66,7,88,9,53,54};
  
    
    cout << "Before sorting: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
      sort(v.begin(), v.end());
    
    cout << "After sorting asc: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.rbegin(), v.rend());
        cout << "After sorting dsc: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
 
}