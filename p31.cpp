#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string str, box;
    while(cin >> box) str += box;

    int idx = 0;
    int counts[26];

    for (int i = 0; i < 27; i++) {
        counts[i] = 0;
    }

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    while (str[idx] != '\0') {
        if('a' <= str[idx] && str[idx] <= 'z') counts[str[idx] - 'a']++;

        idx++;
    }

    for (int i = 0; i < 26; i++) {
        cout << char('a' + i) << ' ' << ':' << ' ' << counts[i] << endl;
    }

    return 0;

}