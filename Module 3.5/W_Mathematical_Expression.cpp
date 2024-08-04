#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    char s, q;

    cin >> a >> s >> b >> q >> c;
    bool is_correct = false;
    int result;
    
    if (q == '=') {
        if (s == '+') {
            result = a + b;
        } else if (s == '-') {
            result = a - b;
        } else if (s == '*') {
            result = a * b;
        } else {
            // Invalid operator
            cout << "Invalid operator" << endl;
            return 0;
        }
        
        // Check if the computed result matches C
        if (result == c) {
            is_correct = true;
        }
    } else {
        // Invalid format
        cout << "Invalid expression format" << endl;
        return 0;
    }

    // Output the result
    if (is_correct) {
        cout << "Yes" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
