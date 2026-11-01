#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> desired;
    vector<int> sizes;

    int x = 0;

    for (int i = 0; i < n; i++) {

        cin >> x;
        desired.push_back(x);
    }

    for (int i = 0; i < m; i++) {

        cin >> x;
        sizes.push_back(x);
    }
    

    sort(desired.begin(), desired.end());
    sort(sizes.begin(), sizes.end());

    int i = 0;
    int j = 0;
    int count = 0;    

    while (i < n && j < m) {

        if (desired[i] <= sizes[j] + k && desired[i] >= sizes[j] - k) {
            i++;
            j++;
            count++;
            continue;
        }

        if (desired[i] < sizes[j] - k) {
            i++;
            continue;
        }

        if (desired[i] > sizes[j] + k) {
            j++;
            continue;
        }
    }

    cout << count;
    return 0;
}
