#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    ofstream fout("nnn.txt");
    fout<<45;
    fout.close();

    ifstream file("nnn.txt");
    if (!file.is_open()) {
        cout << "can't open file!" << endl;
        return 1;
    }

    long long n;
    file >> n;
    file.close();

    if (n <= 3) {
        cout << "at least more than 3 " << endl;
        return 0;
    }

    long long M = n - 3;
    long long S = 1;
    bool found = false;

    for (long long i = 1; i * i <= M; ++i) {
        if (M % i == 0) {
            if (i >= 4) {
                S *= i;
                found = true;
            }
            long long j = M / i;
            if (j != i && j >= 4) {
                S *= j;
                found = true;
            }
        }
    }

    if (found) {
        cout << "multiply: " << S << endl;
    } else {
        cout << "no number" << endl;
    }

    return 0;
}