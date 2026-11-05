#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    
    vector<int> v;
    v.reserve(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];   
    } 

    int left = 0;
    
    map<int, int> spot;

    int maximum = 0;
    int current = 0; 
    
    for (int right = 0; right < n; right++) {
        
        current = v[right];

        if (spot.count(current)) {
            
            left = max(left, spot[current] + 1);
        }

        spot[current] = right;
        maximum = max(maximum, right - left + 1);
    }
    
    cout << maximum;
    return 0;
}
