#include <iostream>
#include <cmath>
using namespace std;
int main (){
float num1,num2;
cout <<"Enter two number :";
cin >> num1 >> num2;
cout <<"The arithmetic mean of two numbers = "<<(num1+num2)/2<<"\n";
cout <<"The geometric mean of two numbers = "<< sqrt(num1*num2)<<"\n";
cout <<"The harmonic mean of two numbers = "<<(2/((1/num1)+(1/num2)))<<"\n";
    return 0;
}