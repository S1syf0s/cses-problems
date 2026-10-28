#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main() {

    int n, s;
    cin >> n >> s;

    vector<pair<int, int>> v;
    
    int x = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(pair(x, i));
    }
    
    sort(v.begin(), v.end());

    int i = 0;
    int j = n - 1;

    while (i != j) {

        if (v[i].first + v[j].first == s) {
            cout << v[i].second + 1 << " " << v[j].second + 1;
            return 0;
        }

        else if (v[i].first + v[j].first > s) {
            j--;
        }

        else {
            i++;
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}
