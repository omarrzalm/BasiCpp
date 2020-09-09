#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*int main() {
   int i, steps=5, sum;
   int a = 4;
    for(i=0;i<=steps;i++) {
        if(a==4) {
            sum = a + a;
            cout<<sum<<endl;
            a -= 2;}

       else if(a==2) {
           sum = a + a;
           cout<<sum<<endl;
            a += 2;}
    }
    return 0;
} */

using namespace std;

int main() {
    double a, b, steps, delta, X, Y, sum, area;
    int i; 

    cout<<"\n\t\t- Simpson's method -"<<endl;
            cout<<"Input a: ";
            cin>>a;
            cout<<"Input b: ";
            cin>>b;
            cout<<"Input steps: ";
            cin>>steps;
            cout<<"\n"; 
            delta = (b-a)/steps; 
            cout<<"X\t\tY=Sin(x)\t\tSum"<<endl;
            
            int  aux=4;
            for(i=0;i<=steps;i++) {  //inicio eval

               cout<<std::fixed<<std::setprecision(6)
                <<X<<"\t"<<Y<<"\t\t"<<sum<<endl;
               X = delta + X;
               Y = sin(X);  
               if(aux == 4) {
                   sum = sum + (aux*Y);
                   aux -= 2;
               }
               else if(aux == 2) {
                   sum = sum + (aux*Y);
                   aux += 2;
               }
            }  // fin eval

            

 return 0;  }