// this program shows how to writa file in a binary number format
#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream f;
char sd[10]= {"hi there "};
f.open("My_file.txt",ios::app|ios::in|ios::out|ios::binary);
if(f.is_open()){
f<<" felos ";
cout<<"appended succesfully "<<endl;
string s;
while(getline(f,s)){
    cout<<s<<endl;
}
// reading file in a binary format
f.read(reinterpret_cast<char*>(&sd),sizeof(char));
//writing a file in a binary format
f.write(reinterpret_cast<char*>(&sd),sizeof(char));
f.close();
}
else
cout<<"unable to open a code ";
    return 0;
}