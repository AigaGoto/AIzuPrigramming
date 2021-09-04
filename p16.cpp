#include <iostream>

using namespace std;

int main() {
    
    int N;
    cin >> N;

    int a;
    long sum = 0;
    int min = 1000000;
    int max = -1000000;

    for(int i=0; i < N; i++) {
        cin >> a;
        if (a < min) min = a;
        if (a > max) max = a;
        sum += a;
    }

    cout << min << ' ' << max << ' ' << sum << endl;

    return 0;

}