#include <iostream>
using namespace std;

int main(){
    int n = 4;
    
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << (char)('A' + i - j - 1) << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}