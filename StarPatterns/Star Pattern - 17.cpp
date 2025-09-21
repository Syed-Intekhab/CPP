#include <iostream>
using namespace std;

int main(){
    int n = 10;
    
    // Top Outer Loop (Rows).
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            cout << " ";
        }
        
        cout << "*";
        
        if(i != 0){
            for(int j = 1; j < 2 * i; j++){
                cout << " ";
            }
            
            cout << "*";
        }
        
        cout << endl;
    }
    
    // Bottom Outer Loop (Rows).
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j <= i + 1; j++){
            cout << " ";
        }
        
        cout << "*";
        
        for(int j = 1; j < 2 * (n - i - 2); j++){
            cout << " ";
        }
        
        if(i != n - 2)
            cout << "*";
        
        cout << endl;
    }
    
    return 0;
}