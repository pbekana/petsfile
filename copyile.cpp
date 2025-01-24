// coping file 1 to another file
#include <iostream>
#include<fstream>
using namespace std;
int main (){
ifstream s;// one of hold a file
ofstream e;
e.open("mfile_copy.txt");
s.open("mfile.txt");

if(s.is_open() && e.is_open()){
    string d;
while(getline(s,d)){//reading first file line by line
    e<<d;//writing each word of first file to second one 
}
cout<<" file copied  succesfully "<<endl;
s.close();
}
else
cout<<"unable to open  ";


return 0;
}