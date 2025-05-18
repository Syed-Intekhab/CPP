#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string family[] = {"Shaan", "Shadab", "Shahed", "Tameem", "Aheed"};
    for(string member : family){
        if(member == "Shaan"){
            cout << "Shaan is present in family";
        }
    }
    
    return 0;
}