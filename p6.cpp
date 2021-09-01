#include <iostream>
#include <string>
using namespace std;

int main() {

    int a, b, c;
    string x;

    cin >> a >> b >> c;

    if (a < b && b < c){
        x = "Yes\n";
    } else {
        x = "No\n";
    }

    cout << x;

    return 0;
}