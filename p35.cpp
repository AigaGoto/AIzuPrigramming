#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string taro, hanako;
    int taro_point = 0, hanako_point = 0;

    for (int i = 0; i < n; i++) {
        cin >> taro >> hanako;

        if (taro.compare(hanako) > 0) taro_point += 3;
        else if (taro.compare(hanako) == 0) {
            taro_point++;
            hanako_point++;
        }
        else hanako_point += 3;
    }

    cout << taro_point << " " << hanako_point << endl;

    return 0;

}