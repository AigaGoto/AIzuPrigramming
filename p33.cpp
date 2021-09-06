#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string W, T;

    int count = 0;

    cin >> W;
    transform(W.begin(), W.end(), W.begin(), ::tolower);

    while(cin >> T) {
        if (T == "END_OF_TEXT") break;
        transform(T.begin(), T.end(), T.begin(), ::tolower);
        if (W.compare(T) == 0) count++;
    }

    cout << count << endl;


    return 0;

}