#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<int> v;
    v.reserve(n);

    for (int i = 1; i <= n; i++) {

        v.push_back(i);
    }
    
    vector<int> removed;
    removed.reserve(n); 
    
    int alive = 0;
    int i = 0;

    while (n > 0) {
        
        if (v[i] >= 0) {
            alive++;
            if (alive == 2) {
                removed.push_back(v[i]);
                v[i] = -1;
                alive = 0;
                n--;
            }
        }
        
        i++;
        i = i % v.size();
    }

    for (size_t i = 0; i < removed.size(); i++) {
        cout << removed[i] << " ";
    }

    return 0;
}
