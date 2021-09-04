#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string nums;

    while (cin >> nums) {
        if (nums == "0") break;

        int idx = 0;
        int sum = 0;
        char x;

        for (int i = 0; i < nums.length(); i++) {
            int num = int(nums[idx] - '0');
            sum += num;
            idx++;
        }

        cout << sum << endl;

    }

    return 0;

}