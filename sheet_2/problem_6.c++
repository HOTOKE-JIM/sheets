#include<iostream>
using namespace std;
int main (){
    int length,width,area,perimeter,price,cost;
    cout <<"enter length,wightthen price\n";
    cin >> length >> width >> price ; 

    area = length*width;
    perimeter = 2*(width*length);
    cost = area*price;
    cout <<"area of carpet :"<<area<<"\n";
    cout <<"perimeter :"<<perimeter<<"\n";
    cout <<"cost :"<<cost<<"$\n";

    return 0;
}