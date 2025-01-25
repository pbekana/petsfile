//this programm calculate each row and column of array 
#include<iostream>
using namespace std;
int main(){
int arr1[3][2];
int row_sums[3];
int col_sums[2];
cout<<"enter a number of rows "<<endl;
for(int i=0;i<3;i++){
    for(int j =0;j<2;j++){
        cin>>arr1[i][j];
    }
}
cout<<"sum of each row is "<<endl;
for(int i=0;i<3;i++){
    row_sums[i] = 0;
    for(int j =0;j<2;j++){
        row_sums [i] += arr1[i][j];
    }
}
cout<<" displaying summation of each rows ";
for(int i=0;i<3;i++){
    cout<<endl<<row_sums[i]<<endl;
}
cout<<"adding each column of matric array 3 by 2 "<<endl;
for(int j=0;j<2;j++){
    col_sums[j] = 0;
    for(int i =0;i<3;i++){
       col_sums [j] += arr1[i][j]; 
    }
}
cout<<"displaying addition of each column of 3 by  2matrix "<<endl;
for(int i=0;i<2;i++){
    cout<<col_sums[i]<<endl;
}

    return 0;
}