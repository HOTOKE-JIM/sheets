#include <iostream>
using namespace std;
int main() {
int time ;
cout << "enter time :";
cin >>time ;
int day = time /(24*3600);
time = time%(24*3600);
int hour = time /3600;
time %= 3600;
int minutes = time /60;
time %= 60;
int seconds = time ;
cout << day <<""<<"days\n"
<< hour<<""<< "hours \n"
<<minutes << ""<<"minutes \n"
<<seconds <<""<<"second \n";  
    return 0;
}
