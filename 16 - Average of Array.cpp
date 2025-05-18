#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int myNum[5] = {342, 476, 234, 435, 130};
    int sum;
    
    for(int i : myNum){
        sum += i;
    }
    
    cout << round(sum / (sizeof(myNum) / sizeof(myNum[0])));
}