#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long N;
    cout << "N = ";
    if (!(cin >> N) || N <= 0) {
        cout << "Give a positive number" << endl;
        return 0;
    }

    vector<long long> divisors;

    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            divisors.push_back(i);

            long long j = N / i;
            if (j != i) {
                divisors.push_back(j);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    cout << N << " Divisors are:" << endl;
    for (long long num : divisors) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}