#include <iostream>
#include <string>
using namespace std;

int main() {

    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;

    bool a,b;
    a = 0 <= x-r && x+r <= W;
    b = 0 <= y-r && y+r <= H;

    if (a && b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;

}