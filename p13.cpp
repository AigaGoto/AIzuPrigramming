#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int a, b;

    cin >> a >> b;

    cout << fixed;
    cout << setprecision(5);

    cout << a/b << " " << a%b << " " << double(a) / double(b) << endl;

    return 0;

}