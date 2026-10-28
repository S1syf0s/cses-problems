// Goal is to find out missing number. Numbers are between 1,2,...,n.
// Only one number is missing. We should use Gauss's formula for the sum
// and then start subtracting the numbers coming to stdio.
// When we have subtracted n - 1 times, we have our missing number. 

#include <iostream>

using namespace std;

int main() {

    long long n;
    cin >> n;
    
    long long sum = (n * (n + 1)) / 2;
    int x;

    while (n - 1 > 0) {
       
        cin >> x; 
        sum -= x;
        n--;
    }

    cout << sum;
    return 0;
}
