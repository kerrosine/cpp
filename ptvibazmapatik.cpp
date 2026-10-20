#include <iostream>
using namespace std;
#include <iomanip>

int main () {
    int n;
    cout<<"Enter an integer: ";
    cin>>n;

    int vector[n];
    for (int i=0; i<n; i++) {
        vector[i] = rand()%101-50;
        cout<< setw(3) << vector[i];
    }
    cout<<endl;

    int vector2[n];
    int p;
    cout<<"Enter an integer: ";
    cin>>p;
    cout<<endl;
    cout<<"--------------------";
    cout<<endl;
    for (int i=0; i<n; i++) {
        if (vector[i]%p==0) {
            vector2[i]=vector[i];
            cout<<setw(3)<<vector2[i];
        }
    }
}
