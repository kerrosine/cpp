#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    vector<int> v;

    for (int a = 1; a <= 9; ++a) {
        for (int b = 0; b <= 9 - a; ++b) {
            int c = 9 - a - b;

            int number = a * 100 + b * 10 + c;
            v.push_back(number);
        }
    }

    for (int num : v) {
        cout << setw(4) << num ;
    }

    return 0;
}