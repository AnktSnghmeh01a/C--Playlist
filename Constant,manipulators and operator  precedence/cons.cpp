#include<iostream>
#include<iomanip>
using namespace std;
int main(){

// int a =20;
// a=10;
// cout<<"The value of a is "<<a<<endl;

// const int  b=15;
// //The value of constant is not changed further in the program.
// //b=10;
// cout<<"The value of b is  "<<b<<endl;

// using manipulators
int a=10;
int b=112;
int c=1209;

cout<<"Without Setw"<<endl;
cout<<"The value of a is "<<a<<endl;
cout<<"The value of b is "<<b<<endl;
cout<<"The value of c is "<<c<<endl;

cout<<"With Setw"<<endl;
cout<<"The value of a is "<<setw(4)<<a<<endl;
cout<<"The value of b is "<<setw(4)<<b<<endl;
cout<<"The value of c is "<<setw(4)<<c<<endl;



    return 0;
}