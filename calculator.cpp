#include <iostream>
using namespace std;

int main(){
    double value1, value2;
    char operation;
    
    cout << "Enter first value: ";
    cin >> value1;
    
    cout << "Enter second value: ";
    cin >> value2;
    
    cout << "Enter operation: ";
    cin >> operation;
    
    switch(operation){
        case '+':
            cout << value1 << operation << value2 << " = " << value1+value2;
            break;
        
        case '-':
            cout << value1 << operation << value2 << " = " << value1-value2;
            break;
        
        case '*':
            cout << value1 << operation << value2 << " = " << value1*value2;
            break;
            
        case '/':
            if (value2 == 0){
                cout << "cannot be divided by 0";
            }
            else{
                cout << value1 << operation << value2 << " = " << value1/value2;
            }
            break;
            
        default:
            cout << "Unknown operation";
    }
    return 0;
}