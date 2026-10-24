#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    cout<<m<<" "<<n<<endl;
    int X[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            X[i][j]=rand()%101-50;
            cout<<setw(5)<<X[i][j];

        }
        cout<<endl;
    }

    vector<int> Y;

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if (X[i][j]!=0) {
                Y.push_back(X[i][j]);
            }
        }
    }
    for (int num:Y) {
        cout<<setw(5)<<num;
    }

    return 0;
}
