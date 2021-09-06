#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double sum, ave, dist, dev;

    cout << fixed << setprecision(8);
    
    while(cin >> n) {
        if (n == 0) break;

        double s[n];
        sum = dist = 0;


        for (int i = 0; i < n ; i++) {
            cin >> s[i];
            sum += s[i];
        }
        ave = sum / n;

        for (int i = 0; i < n; i++) {
            dist += pow(s[i] - ave, 2);
        }

        dist /= n;

        dev = sqrt(dist);

        cout << dev << endl;
        
    }

    return 0;

}