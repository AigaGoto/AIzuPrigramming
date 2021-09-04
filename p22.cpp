#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;

    char mark;
    int num;

    char marks[4] = {'S','H','C','D'};

    bool table[4][13];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            table[i][j] = true;
        }
    }

    for (int i = 0; i < n; i++) {
        cin >> mark >> num;
        
        for (int j = 0; j < 4; j++) {
            if (mark == marks[j]) {
                table[j][num-1] = false;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (table[i][j]) {
                cout << marks[i] << ' ' << j+1 << endl;
            } 
        }
    }

    return 0;

}