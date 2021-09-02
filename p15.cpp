#include <iostream>

using namespace std;

int main() {
    
    int a, b;
    char ope;

    while (cin >> a >> ope >> b) {
        if (ope=='?') break;

        if (ope=='+') {
            cout << a+b << endl;
        } else if (ope=='-') {
            cout << a-b << endl;
        } else if (ope=='*') {
            cout << a*b << endl;
        } else {
            cout << a/b << endl;
        }
    }


    return 0;

}