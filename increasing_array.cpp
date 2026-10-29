#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int first = 0;

    cin >> first;

    int second = 0;
    
    long long x = 0;

    for (int i = 0; i < n - 1; i++) {
    
        cin >> second;

        if (second < first) {

            x += first - second;
        }
        
        else {
            first = second;
        }
    }
    
    cout << x;
    return 0;
}
