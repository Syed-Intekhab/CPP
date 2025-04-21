#include <iostream>
using namespace std;

int calcFact(int n){
    int fact = 1;
    
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    
    return fact;
}

int main(){
    int n, r, factN, factR, c, factNR;
    
    
    cout << "Enter n value: ";
    cin >> n;
    
    cout << "\nEnter r value: ";
    cin >> r;
    
    factNR = n - r;
    
    factN = calcFact(n);
    factR = calcFact(r);
    
    c = factN / (factR * calcFact(factNR));
    cout << "The nCr is: " << c << endl;
    
    return 0;
}
