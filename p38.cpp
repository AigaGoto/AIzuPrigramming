#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;
    double S, L, h;

    cin >> a >> b >> c ;

    double radian = c / 180 * M_PI;

    cout << fixed << setprecision(8);

    S = 0.5 * a * b * sin(radian);
    L = a + b + sqrt(pow(a,2) + pow(b,2) - 2*a*b*cos(radian));
    h = S / a * 2;

    cout << S << endl << L << endl << h << endl;

    return 0;

}