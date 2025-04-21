#include <iostream>
using namespace std;

void printFib(int n){
    int a = 0, b = 1;
    
    cout << a << " " << b << " ";
    for(int i = 0; i <= n; i++){
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main(){
    int n;
    
    cout << "Enter any number: ";
    cin >> n;
    
    printFib(n);
    
    return 0;
}
