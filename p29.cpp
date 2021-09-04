#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string str;
    getline(cin, str);

    int idx = 0;

    while (str[idx] != '\0') {
        if (islower(str[idx])) str[idx] = toupper(str[idx]);
        else str[idx] = tolower(str[idx]);

        idx++;
    }

    cout << str << endl;;

    return 0;

}