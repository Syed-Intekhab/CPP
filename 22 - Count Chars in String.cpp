#include <iostream>
#include <string>
using namespace std;

int main(){
    string userName;
    int count = 0;
    
    cout << "Enter your name: ";
    getline(cin, userName);
    
    for(char i : userName){
        count++;
    }
    
    cout << "Your name consist of " << count << " characters.";
    
    return 0;
}