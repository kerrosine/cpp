#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    for (long long i = 9999; i >= 1000; --i) {
        long long n = i * 14;
        long long root = sqrt(n);

        if (root * root == n) {
            cout << "i = " << i << ", n = " << n << endl;
            ofstream myfile("q.txt");
            myfile << n << endl;
            myfile.close();
            break;
        }
    }


    return 0;
}