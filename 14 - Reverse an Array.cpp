#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int numbers[] = {4, 5, 2, 5, 5, 23, 64, 623};
    int sizeOfArray = sizeof(numbers) / sizeof(numbers[0]);
    
    cout << "Array before Reversed: ";
    for(int number : numbers){
        cout << number << ", ";
    }
    
    reverse(numbers, numbers + sizeOfArray);
    
    cout << "\nReversed Array: ";
    for(int number : numbers){
        cout << number << ", ";
    }
    
    return 0;
}