#include <iostream>
#include <string>
using namespace std;

int main(){
    string names[5] = {"Shaan", "Shadab", "Shahed", "Zoha", "Shahed"};
    int index = -1;
    int n = sizeof(names) / sizeof(names[0]);
    
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(names[i] == names[j]){
                index = j;
                cout << "The first duplicate found at index: " << index;
                return 0;
            }
        }
    }
    
    if(index == -1){
        cout << "No match found!";
    }
    
    return 0;
}

