#include <iostream>
#include <cmath>
using namespace std;

float findY(float x){
    float y= 3*pow(x,3) + 2*2.71828 + pow(2,(2*x+1)) + sqrt(pow(x,2)+1);
    return y;
}

int main(){

    float x;
    cout << "Enter x = ";
    cin >> x;
    cout << "Result y = " << findY(x);

    return 0;
}