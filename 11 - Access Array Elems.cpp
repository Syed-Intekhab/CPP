#include <iostream>
#include <string>
using namespace std;

int main(){
    string cars[5] = {"Volvo", "BMW", "Toyota", "Farari", "Ford"};
    
    {
        int i = 0;
        while(i < sizeof(cars) / sizeof(string)){
            cout << cars[i] << endl;
            i++;
        } 
    }
    
    cout << "\n\n";
    
    {
        for(int i = 0; i < sizeof(cars) / sizeof(string); i++){
            cout << cars[i] << endl;
        }
    }
    
    cout << "\n\n";
    
    {
        int i = 0;
        do{
            cout << cars[i] << endl;
            i++;
        } while (i < sizeof(cars) / sizeof(string));
    }
    
    cout << "\n\n";

    {
        for(string car : cars){
            cout << car << endl;
        }
    }

    return 0;
}
