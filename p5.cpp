#include <iostream>
#include <string>
using namespace std;

int main() {

    int a, b;
    string x;
    cin >> a >> b;

    if (a > b) {
        x = "a > b";
    } else if(a == b) {
        x = "a == b";        
    } else {
        x = "a < b";
    }
    cout << x << endl;

    return 0;
}