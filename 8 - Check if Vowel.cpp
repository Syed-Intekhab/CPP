#include <iostream>
#include <string>
using namespace std;

int main(){
    char ch;
    int isVowel;
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    
    cout << "Enter any character: ";
    cin >> ch;
    
    for(char i : vowels){
        if(i == ch){
            cout << "The entered character " << ch << " is Vowel!";
            isVowel = 1;
        }
    }
    
    if(!isVowel){
        cout << "The entered character is not a Vowel";
    }
    
    return 0;
}
