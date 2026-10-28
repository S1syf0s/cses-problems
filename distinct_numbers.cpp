#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    vector<int> numbers;
    numbers.reserve(n);
       
    int x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        numbers.push_back(x);
    }
    
    sort(numbers.begin(), numbers.end()); 
    int distinct = 1;

    for (int i = 0; i < n - 1; i++) {
        if (numbers[i] != numbers[i + 1]) {
            distinct++;
        }
    }

    cout << distinct;
    return 0;
}
