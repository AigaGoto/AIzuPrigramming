#include <iostream>
#include <string>
using namespace std;

int main() {

    int a[3];

    for(int i; i < 3; i++){
        cin >> a[i];
    }

    for(int i; i < 3; i++) {
        int b = a[i];
        int j = i-1;
        while (j >= 0 && b < a[j]) {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = b;
    }

    cout << a[0] << " " << a[1] << " " << a[2] << endl;

    return 0;
}