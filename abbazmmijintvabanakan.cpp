#include <iostream>
#include <iomanip>
#include <fstream>
#include <numeric>
#include <vector>

using namespace std;

vector<int> getCommonMultiples(int a, int b, int start, int end) {
    vector<int> result;

    int L = lcm(a, b);

    int firstMultiple = ((start + L - 1) / L) * L;

    for (int num = firstMultiple; num <= end; num += L) {
        result.push_back(num);
    }

    return result;
}

int main() {
    int a, b;
    ofstream fout("ab.txt");
    fout << 12 << " " << 23;
    fout.close();

    ifstream fin("ab.txt");
    if (fin >> a >> b) {
        cout << "a:= " << a << " b:= " << b << endl;
    } else {
        cout << "error" << endl;
        return 1;
    }
    fin.close();

    vector<int> Multiples = getCommonMultiples(a, b, 100, 1000);

    if (Multiples.empty()) {
        cout << "no muls" << endl;
    } else {
        float sum = 0;
        for (int val : Multiples) {
            cout <<setw(5) << val;
            sum += val;
        }
        cout << endl;
        float avg = sum / Multiples.size();
        cout << "avg = " << avg << endl;
    }

    return 0;
}