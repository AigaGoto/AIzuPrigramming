#include <iostream>

using namespace std;

int main() {
    int m,f,r;
    int sum = 0;
    char result;

    while (cin >> m >> f >> r) {
        if (m == -1 && f == -1 && r == -1) break;

        sum = m + f;

        if (m == -1 || f == -1 || sum < 30) result = 'F';
        else if (30 <= sum && sum < 50 && r < 50) result = 'D';
        else if ((50 <= sum && sum < 65) || r >= 50) result = 'C';
        else if (65 <= sum && sum < 80) result = 'B';
        else result = 'A';

        cout << result << endl;
    }

    return 0;

}