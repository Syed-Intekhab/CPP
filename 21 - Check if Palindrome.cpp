#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string word;
    
    cout << "Enter the word: ";
    cin >> word;
    string reversed(word.rbegin(), word.rend());
    
    if(word == reversed){
        cout << "The entered word is palindrome! " << reversed << " " << word;
    } else {
        cout << "The entered word is not a palindrome word: ";   
    }
    
    return 0;
}