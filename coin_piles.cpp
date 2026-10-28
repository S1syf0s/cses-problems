#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    
    int l, r;

    for (int i = 0; i < n; i++) {
        
        cin >> l >> r;

        if ((l + r) % 3 != 0 || l > r * 2 || r > 2 * l) {
            cout << "NO" << endl;
        }
        
        else { 
            cout << "YES" << endl;
        }
    } 
    return 0;
}
