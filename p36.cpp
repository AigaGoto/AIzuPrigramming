#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;

    int n;
    cin >> n;

    string query, p;
    int a, b;

    for (int i= 0; i < n; i++) {
        cin >> query >> a >> b;
        if (query == "replace") {
            cin >> p;
            str.replace(a, b-a + 1, p);
        } else if (query == "reverse") {
            reverse(str.begin() + a, str.begin() + b+1);
        } else {
            for (int i = a; i < b+1; i++ ){
                cout << str[i];
            }
            cout << endl;
        }
    }

    return 0;

}