#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    
    double a;
    cin >> a;
    double pi = M_PI;

    cout << fixed << setprecision(6);

    cout << a * a * pi << " " << 2 * a * pi << endl;

    return 0;

}