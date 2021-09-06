#include <iostream>
#include <string>

using namespace std;

int main() {
    string cards, a, b;
    int m,h;
    int sum_h;
    int move;

    while (cin >> cards) {
        if (cards == "-") break;

        sum_h = 0;
        cin >> m;

        for (int i = 0; i < m; i++) {
            cin >> h;
            sum_h += h;
        }
        move = sum_h % cards.length();

        a = cards.substr(move);
        b = cards.substr(0, move);

        cards = a + b;

        cout << cards << endl;
    }

    return 0;

}