#include <iostream>

using namespace std;

int intPtr(int *x);
int Ptr(int z);
int main() {
    int y = 0;
    int a;
    cout<<intPtr(&y)<<endl;
    Ptr(a);
    return 0;
}

int intPtr(int *x) {
    *x = 5;
    return *x;
}

int Ptr(int z) {
  int i;
  for(i=1;i<=5;i++) {
      cout<<intPtr(&z)<<endl;
  }
}

 /*  int *ptr;
    int x = 5;
    ptr = &x;b*/
