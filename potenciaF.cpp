#include <iostream>

using namespace std;
int FuncPotencia(int n, int ind);

int main() {

int  num, pot;

FuncPotencia(num, pot);

    return 0;
}

int FuncPotencia(int n, int ind) {
    int i, pot=1;
    for(i=1;i<=ind;i++) {
        pot = n*pot;
    }
    return pot;
}