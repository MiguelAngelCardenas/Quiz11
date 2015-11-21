#include <iostream>
#include <cmath>
using namespace std;

float calculate_e (float n){
  float e = 0.0;
  float saved_e;
  float result = 1000000;
  float d = 0.0;
  float fact = 1.0;
  while (result > n){
    if (d == 0.0){
      fact = 1.0;
      saved_e = e;
      e = e + (1.0/fact);
      result = e - saved_e;
      d++;
    }else {
    fact = fact*d;
    saved_e = e;
    e = e + (1.0/fact);
    result = e - saved_e;
    d++;
  }
}
  return e;
}

int main(){
  float n;
  cout << "Tell me the accuracy you need"<< endl;
  cin>> n;
  float e = calculate_e (n);
  cout << e << endl;
  return 0;
}
