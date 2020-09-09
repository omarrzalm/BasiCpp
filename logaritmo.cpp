#include <iostream>
#include <iomanip>
#define N 100
using namespace std;

int main() {

    double X; // Valor de entrada
    double Y, aux; // Parámetros de evaluación 
    double prod=1, delta, Ln=0, Error; // Valores de salida
    int i, j; // Iteradores

    cout<<"Ingrese X: ";
    cin>>X;     // Valor de entrada en evaluación X = 5

    if(X<2) {cout<<"X tiene que ser mayor a 1"<<endl; exit(0);}
    cout<<"\nProduct\t\tDelta\t\t\tLn(x)\t\t\tError"<<endl;
    
    for(i=1;i<=N;i++) {
        Y=((X-1)/X);      
        prod = 1;    
        for(j=1;j<=i;j++) {
            prod = Y*prod;
        }    
        aux = i;
        delta = (1/aux)*prod;
        Ln = Ln + delta;
        Error = delta/Ln;

        cout<<std::fixed<<std::setprecision(6)
        <<prod<<"\t"<<delta;

        cout<<std::fixed<<std::setprecision(6)
        <<"\t\t"<<Ln<<"\t\t"<<Error<<endl;

        if(Error<0.0001) {exit(0);}
      } 
    return 0;
}