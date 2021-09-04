#include <iostream>

using namespace std;

int main() {
    
    int N;
    cin >> N;

    int j = 0;

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0) {
            cout << i << ' ';
            continue;
        }
        j = i;
        do {
            if (j % 10 == 3)  {
                cout << i << ' ';
                break;
            }
            j /= 10;
        } while(j != 0);
    }
    cout << endl;

    return 0;

}