#include <iostream>
#include <utility>
#include <algorithm>
#include <vector> 

using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<pair<int, int>> v;
    
    for (int i = 0; i < n; i++) {
    
        int x, y;
        cin >> x >> y;

        pair <int, int> p(y, x);
        v.push_back(p);
    }
    
    sort(v.begin(), v.end());
    
    int x = 1;
    
    int end = v[0].first;

    for (int i = 1; i < n; i++) {
         
        if (v[i].second >= end) {
            x++;
            end = v[i].first;
    
        }
    }

    cout << x;

    return 0;
}
