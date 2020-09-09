#include <iostream>

using namespace std;

int FuncFactorial(int n);

int main() {
    int fact;

    FuncFactorial(fact);
    return 0;
}

int FuncFactorial(int n) {
    int i, fact=1;
    for(i=1;i<=n;i++) {
        fact = fact*i;
    }
    return fact;
}
