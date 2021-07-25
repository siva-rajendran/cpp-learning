#include <iostream>
using namespace std;

int main(){
    int number, output=1, i=0;
    cout << "Enter number to generate fibonacci\n";
    cin >> number;
    for(i=number; i>0; i--){
        output *= i;
    }
    cout << "Factorial is " << output <<"\n";
    return 0;
}
