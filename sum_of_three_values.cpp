#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {

    int n, target;
    cin >> n >> target;

    vector<pair<int, int>> v;
    // v.resize(n); Was fatal error here...

    int x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        pair<int, int> p = {x, i};
        v.push_back(p); 
    }
    
    sort(v.begin(), v.end());

    int i = 0;
    int j = 1;
    int k = v.size() - 1;

    while (i < n - 2) {
        
        while (j < k) {

            if (v[i].first + v[j].first + v[k].first == target) {
                cout << v[i].second + 1 << " " << v[j].second + 1 << " " << v[k].second + 1;
                return 0;
            }

            else if (v[i].first + v[j].first + v[k].first < target) {
                j++;
            }

            else if (v[i].first + v[j].first + v[k].first > target) {
                k--;
            }
        }

        i++;
        j = i + 1;
        k = v.size() - 1;
    }
    
    cout << "IMPOSSIBLE";
    return 0;
}
