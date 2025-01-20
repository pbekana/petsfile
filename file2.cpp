#include <iostream>
using namespace std;
#include <fstream>
#include <string>


int main() {
ofstream d;
d.open("My_file ",ios::app);
if(d.is_open()){
d<<" here is da ";
d<<"livrepol ";
    cout<<" appended succesfully ";
    d.close();
}
else 
cout<<" unable tto open ";
    return 0;
}
