#include <iostream>
using namespace std;

int findDivisor(int x){
    int n=2;
    while(x%n !=0){
        n++;
    }
    return n;
}

int main(){

    int x;
    cout << "Input number: ";
    cin >> x;

    cout << "Divisor is " << findDivisor(x);

    return 0;
}
