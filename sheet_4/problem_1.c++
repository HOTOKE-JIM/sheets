#include <iostream>
using namespace std;
int main (){

    int i,sum;
    cout <<"welcome \n";
    for (i=0;i<=200;i++){
        if (i%5==0){
            cout <<" "<<i;
             sum+=i;
        }
    }
    cout << "\nthe sum : "<<sum<<"\n";
    return 0;
}