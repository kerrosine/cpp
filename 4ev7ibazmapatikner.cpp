#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
using namespace std;

vector<int> getMultiple(int a, int b, int start, int end) {
    vector<int> result;

    int L = lcm(a, b);

    int firstM= ((start + L - 1) / L) * L;

    for (int num = firstM; num <= end; num+=L) {
        result.push_back(num);
    }
    return result;

}

int main() {
    int a = 4, b = 7;

    vector<int> vec = getMultiple(a, b, 1000, 9999);
    for (int num : vec) {
        cout << setw(6) << num;
    }
    cout << endl;
}
