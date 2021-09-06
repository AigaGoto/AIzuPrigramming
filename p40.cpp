#include <iostream>
#include <cmath>
#include <iomanip>
#include <iomanip>

using namespace std;

double mincof(double* x, double* y, int n, int p) {
    if (p != 100) {
        double sum = 0;
        for (int i = 0; i < n; i++) {
            sum += pow(abs(x[i] - y[i]), p);
        }
        return pow(sum, double(1.0/p));
    } else {
        double max = 0;
        for (int i = 0; i < n; i++) {
            if (abs(x[i] - y[i]) > max) max = abs(x[i] - y[i]);
        }
        return max;
    }
}

int main() {
    int n;
    cin >> n;

    double x[n], y[n];

    cout << fixed << setprecision(8);

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    cout << mincof(x, y, n, 1) << endl;
    cout << mincof(x, y, n, 2) << endl;
    cout << mincof(x, y, n, 3) << endl;
    cout << mincof(x, y, n, 100) << endl;

    return 0;

}