#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    long long mod = 1000000007;
    long long x = 1; 


    for (int i = 0; i < n; i++) {
        x = x * 2;
        x = x % mod;
    }

    cout << x;
    return 0;
}
