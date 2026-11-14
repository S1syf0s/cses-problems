#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int n, q;
    cin >> n >> q;
    
    int x = 0;
    
    vector<int> v;
    vector<long long> sums;
    sums.resize(n); 

    for (int i = 0; i < n; i++) {

        cin >> x;
        v.push_back(x);
    }
    
    sums.push_back(v[0]);
    
    for (int i = 1; i < n; i++) {

        sums[i] = sums[i - 1] + v[i];
    }
    
    int a, b;

    while (q > 0) {
    
        cin >> a >> b;
        a--;
        b--;
        q--;
        
        cout << sums[b] - sums[a] + v[a] << "\n";
    }

    return 0;
}
