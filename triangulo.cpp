#include <iostream>

using namespace std;

int main() {
   /* int n=3;
    int i,j,k;

   for(i=n;i>=1;i--) {
       cout<<" ";
       for(j=1;j<=n;j++) {
           for(k=1;k<=j;k++) {
               cout<<"* ";
           }
           cout<<"\n";
       }
   }  */
       int n = 20;
       int k = n;
 
    for (int i=0; i<n; i++) {
        for (int j=0; j<k; j++) {
            cout <<" "; }
        k = k - 1;  
        for (int j=0; j<=i; j++ ) {
            cout << " *";
        }
        cout << endl;
    }
    for (int i=n-1; i>=1; i--) {
        for (int j=1; j<=k; j++) {
            cout <<" "; }
        k = k - 1;  
        for (int j=1; j<=i; j++ ) {
            cout << " *";
        }
        cout << endl;
    }

   
return 0;
}

     /*
    int n = 20;
    int k = n;
 
    for (int i=0; i<n; i++) {
        for (int j=0; j<k; j++) {
            cout <<" "; }
        k = k - 1;  
        for (int j=0; j<=i; j++ ) {
            cout << " *";
        }
        cout << endl;
    }
 

    for (int i=n; i>=0; i--) {
        for (int j=k; j>0; j--)
            cout <<" ";
        k = k + 1;
 
        for (int j=i; j>=0; j-- ){
            cout << " *";
        }
        cout << endl;
    } 
    */
    