#include <iostream>
#include <iomanip>
#define N 100;
using namespace std;

class Logaritmo {

    public:
        Logaritmo();
        
        void FuncProduct(double x); 
        void FuncDelta();
        void FuncLn();
        void FuncError();
};
Logaritmo::Logaritmo() {}

void Logaritmo::FuncProduct(double x) {
    double prod=1, y;
    for(int i=1;i<=25;i++) {
        y=((x-1)/x);      
        prod = 1;    
        for(int j=1;j<=i;j++) {
            prod = y*prod;
            }
        cout<<std::fixed<<std::setprecision(6)  
        <<prod<<endl; }

} // Fin funcion producto

void Logaritmo::FuncDelta() {

}
int main() {

    Logaritmo log;
    double X;
    cout<<"Input X: ";
    cin>>X;
    if(X<2) {cout<<"X tiene que ser mayor a 1"<<endl; exit(0);}
    cout<<"\nProduct\t\tDelta\t\t\tLn(x)\t\t\tError"<<endl;

    log.FuncProduct(X);

    return 0;
}


