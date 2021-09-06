#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, p;
    string output = 'No';

    getline(cin, s);
    getline(cin, p);

    s = s + s;

    int s_len = s.length();
    int p_len = p.length();
    int result;

    for (int i = 0; i < s_len - p_len; i++) {
        result = s.compare(i, p_len, p);
        if ( result == 0) {
            output = 'Yes';
            break;
        }
    } 
    cout << output << endl;

    return 0;

}