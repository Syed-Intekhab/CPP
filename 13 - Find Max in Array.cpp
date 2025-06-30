#include <iostream>
#include <string>
using namespace std;

int main(){
    int numbers[] = {4, 5, 2, 5, 5, 23, 64, 623};
    int max;
    
    for(int number : numbers){
        if(number > max){
            max = number;
        }
    }
    
    cout << "The max number of an array is: " << max;
    
    return 0;
}