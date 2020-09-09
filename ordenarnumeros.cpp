#include <iostream>

using namespace std;

int main() {

        int i, n[4], j;
        for(i=1;i<=4;i++) {
            cout<<"Elemento "<<i<<": ";
            cin>>n[i];
        }
        cout<<"Arreglo: "<<endl;
        for(i=1;i<=4;i++) {
            cout<<n[i];        
        }
      
    return 0;
}