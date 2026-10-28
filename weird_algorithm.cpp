// Trivial. If number is even -> divide by two. If it is odd multiply by three and add one.

#include <iostream>

using namespace std;

int main() {
    
    long long n;
    cin >> n;

    while (n != 1) {
        
        cout << n << " ";

        if (!(n & 1)) n /= 2;

        else n = (n * 3) + 1;
    }
    
    cout << 1;
    return 0;
}
