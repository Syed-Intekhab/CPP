#include <iostream>

// To use the reverse function add the algorithm library it will reverse the tring 
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string userName;
    cout << "Enter your full name: ";
    getline(cin, userName);
    
    //This line will reverse the string using reverse() function which is derived from <algorithm> header file/Library.
    reverse(userName.begin(), userName.end());
    
    cout << "The reversed name is: " << userName;
    
    return 0;
}
