#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Level 1: Initialization with Default Values
    vector<int> v1(5, 10);

    cout << "Level 1: ";
    for(int x : v1)
    {
        cout << x << " ";
    }
    cout << endl;


    // Level 2: front() and back()
    vector<int> v2 = {5, 9, 15, 22};

    cout << "Level 2:"<<endl;
    cout << "First: " << v2.front() << endl;
    cout << "Last: " << v2.back() << endl;


    // Level 3: pop_back()
    vector<int> v3 = {1, 2, 3};

    cout << "Level 3:"<<endl;
    v3.pop_back();

    for(int x : v3)
    {
        cout << x << " ";
    }
    cout << endl;


    // Level 4: Copying vectors
    vector<int> v4 = {10, 20, 30};
    vector<int> v5;

    v5 = v4;

    cout << "Level 4: ";
    for(int x : v5)
    {
        cout << x << " ";
    }
    cout << endl;


    // Level 5: Vector of Pairs
    vector<pair<int, int>> points;

    points.push_back({1, 5});
    points.push_back({3, 7});

    cout << "Level 5:"<<endl;

    for(auto p : points)
    {
        cout << "X: " << p.first << ", Y: " << p.second << "\n";
    }

    return 0;
}