#include<iostream>
#include<cmath>
using namespace std;

float findDistance(float u,float a,float t){

  float s = u*t + 0.5*a*pow(t,2);

  return s;
}

int main(){

  float u,a,t;

  cout << "Input u: ";
  cin >> u;
  cout << "Input a: ";
  cin >> a;
  cout << "Input t: ";
  cin >> t;

  cout << "Distance is " << findDistance(u,a,t);

  return 0;
}
