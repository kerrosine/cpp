#include <iostream>
using namespace std;
#include <cmath>
#include <fstream>

bool isPower(int n) {
    if (n<=1) return false;
    double k = log10(n)/log10(3);
    return k = (int)k;
}

int main() {
    ofstream fout("nn.txt");
    fout<< 81;
    fout.close();

    int n;
    ifstream fin("nn.txt");
    fin>>n;
    fin.close();

    bool T = false;
    T = isPower(n);
    if (T) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}