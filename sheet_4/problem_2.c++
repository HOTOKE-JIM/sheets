#include<iostream>
using namespace std;
int main (){
    int num;
    cout <<"Enter number :";
    cin>> num;
    
    for (int i=0;i<num;i++){
        if(i%15==0){
            cout <<i<<" ";
        }
    }
    return 0;
}