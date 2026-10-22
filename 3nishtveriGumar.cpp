#include <iostream>
#include <iomanip>
#include <numeric>
#include <vector>
#include <fstream>
using namespace std;

vector<int> GetCommonMultiple(int a, int b, int start, int end){
    vector<int> result;

    int L = lcm(a, b);
    int FirstMultiple = ((start + L - 1) / L) * L;

    for (int num = FirstMultiple; num <= end; num+=L) {
        result.push_back(num);
    }
    return result;
}

int main() {
    int a =2, b =3;

    vector<int> vec = GetCommonMultiple(a, b, 100, 999);
    for (int num : vec) {
        cout<<setw(5)<<num;
    }
    cout<<endl;

    float S = (100+999)/2*900;
    float tarberutyun;
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    tarberutyun = S-sum;
    cout<<tarberutyun<<endl;

    ofstream fout("sum9.txt");
    fout<<tarberutyun<<endl;
    fout.close();
    


    return 0;


}


