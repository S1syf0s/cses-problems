#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    vector<int> v;
    v.reserve(n);
    
    int x = 0;

    for (int i = 0; i < n; i++) {
        cin >> x; 
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    int m = v[v.size() / 2];
    
    long long cost = 0;

    for (int i = 0; i < n; i++) {
        
        cost += abs(1LL*v[i] - m);
    }
    
    cout << cost;    
    return 0;
}
