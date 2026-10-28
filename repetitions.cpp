// Longest repetition of only one type of character in the sequency. 

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {

    string s;
    getline(cin, s);
    
    int current = 1;
    int maximum = 0;

    for (size_t i = 0; i < s.size(); i++) {
        
        if (s[i] != s[i + 1]) {
            maximum = max(current, maximum);
            current = 1;
        }

        else {
            current++;
        }
    }
    cout << maximum;

    return 0;
} 
