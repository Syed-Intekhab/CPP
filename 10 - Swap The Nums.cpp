#include <iostream>
using namespace std;

int main(){
    int userNum1, userNum2, temp;
    
    cout << "Enter first number: ";
    cin >> userNum1;
    cout << "Enter another number: ";
    cin >> userNum2;
    
    cout << "Before swap Number 1 is: " << userNum1;
    cout << " and Number 2 is: " << userNum2 << endl;
    
    temp = userNum1;
    userNum1 = userNum2;
    userNum2 = temp;
    
    cout << "After swap num 1 is: " << userNum1;
    cout << " and Number 2 is: " << userNum2;
    
    return 0;
}
