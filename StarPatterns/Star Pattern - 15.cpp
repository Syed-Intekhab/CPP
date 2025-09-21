#include <iostream>
using namespace std;

int main(){
    int n = 4;
    
    // Outer Loop (Rows).
    for(int i = 0; i < n; i++){
        // Inner Loop (Spaces).
        for(int j = n - 1; j > i; j--){
            cout << "  ";
        }
        
        // Inner Loop (Numbers).
        for(int j = 0; j <= i; j++){
            cout << j + 1 << " ";
        }
        
        // Inner Loop (Inverted Numbers).
        for(int j = i; j >= 1; j--){
            cout << j << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}