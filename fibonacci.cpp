#include <iostream>
using namespace std;
int main(){
    int first=0, second=1, output=0, i=0;
    cout << "Fibonacci Series:\n";
    cout << first << "\t" << second << "\t";
    for(i=0;i<10;i++){
        output = first+second;
        first = second;
        second = output;
        cout << output << '\t';
    }
    return 0;
}
