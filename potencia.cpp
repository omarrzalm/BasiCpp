#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int num, i, pot=1, exp;
    float a = 0.00009;
    cout<<"Ingrese numero: ";
    cin>>num;
    cout<<"Ingrese indice: ";
    cin>>exp;

    for(i=1;i<=exp;i++) {
        pot = pot*num;
    }

    cout<<num<<" a la "<<exp<<" = "<<pot<<endl;    
    cout<<std::fixed<<std::setprecision(6)<<a<<endl;
    return 0;
}