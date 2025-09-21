#include <iostream>
using namespace std;

int main(){
    int n = 4, count = 'A';
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << (char)count++ << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}