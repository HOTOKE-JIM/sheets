#include<iostream>
using namespace std;
int main (){

double gas_tank,fuel_eff,gas_price;
cout <<"Enter gas in tank :";
cin >> gas_tank;
cout << "\nfule efficiency :";
cin >> fuel_eff;
cout <<"\n price of gas :";
cin >> gas_price;

cout <<"\ncost per miles = "<< 100/fuel_eff*gas_tank;
cout <<"\nmax distance = "<<fuel_eff*gas_tank;

return 0;
}