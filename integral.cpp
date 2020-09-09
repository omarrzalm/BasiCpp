#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, steps, delta, X, Y, sum, area;
    int i; char Op, aux = 4;
    cout<<"Type T for trapezoid | Type S for Simpson"<<endl;
    cout<<"Enter option: ";

    cin>>Op;
    switch(Op) {

      case 'T':
            cout<<"\n\t\t- Trapezoid method -"<<endl;
            cout<<"Input a: ";
            cin>>a;
            cout<<"Input b: ";
            cin>>b;
            cout<<"Input steps: ";
            cin>>steps;
            cout<<"\n";
            delta = (b-a)/steps; 
            cout<<"X\t\tY=Sin(x)\t\tSum"<<endl;
          
            for(i=0;i<=steps;i++) {    // inicio eval
                cout<<std::fixed<<std::setprecision(6)
                <<X<<"\t"<<Y<<"\t\t"<<sum<<endl;
                area = (delta*sum)/2;
                X = delta + X;
                Y = sin(X);  
                sum = sum + (2*Y); }   // fin eval

             cout<<"Area = "<<
             std::fixed<<std::setprecision(6)<<area<<endl;
    break;

    case 'S':
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
            
            for(i=0;i<=steps;i++) {  //inicio eval
               cout<<std::fixed<<std::setprecision(6)
               <<X<<"\t"<<Y<<"\t\t"<<sum<<endl;
               area = (delta*sum)/3;
               X = delta + X;
               Y = sin(X);

               if(aux == 4) {
                  sum = sum + (aux*Y);
                  aux -= 2; }

               else if(aux == 2) {
                  sum = sum + (aux*Y);
                  aux += 2; }
            }  // fin eval

          cout<<"Area = "<<
          std::fixed<<std::setprecision(6)<<area<<endl;
    break;
    default:
          cout<<"No valid option"<<endl; }
    return 0;
}