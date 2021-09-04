#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string sharps = "####################";

    cin >> n;

    int b, f, r, v;
    
    int residents[4][3][10] = {0};

    for (int i = 0; i < n; i++) {
        cin >> b >> f >> r >> v;
        b--; 
        f--; 
        r--;
        residents[b][f][r] += v;
        if (residents[b][f][r] < 0) residents[b][f][r] = 0;
        if (residents[b][f][r] > 9) residents[b][f][r] = 9;
    }

    for (int b = 0; b < 4; b++){
        for (int f = 0; f < 3; f++) {
            for (int r = 0; r < 10; r++){
                cout << ' ' << residents[b][f][r];
            }
            cout << endl;
        }
        if (b != 3) cout << sharps << endl;
    }

    return 0;

}