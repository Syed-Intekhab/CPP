#include <iostream>
using namespace std;

void printPrime(int n){
    for(int i = 2; i <= n; i++){
        bool isPrime = true;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout << i << endl;
        }
    }
}

int main(){
    int n;
    
    cout << "Enter any number: ";
    cin >> n;
    
    printPrime(n);
    
    return 0;
}
