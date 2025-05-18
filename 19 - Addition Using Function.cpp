#include <iostream>
#include <string>
using namespace std;

int add(int x, int y){
    return x + y;
}

int main(){
    int num1, num2, total;
    
    cout << "Enter any number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    
    cout << "Total of num1 and num2 is: " << add(num1, num2);
    
    return 0;
}