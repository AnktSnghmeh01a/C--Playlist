//To find area of circle and volume of cylinder......
#include<iostream>
using namespace std;
int main(){
float radius,height,pie=3.14;

cout<<"Enter the radius"<<endl;
cin>>radius;

cout<<"Enter the height of student"<<endl;
cin>>height;

cout<<"The area of circle is "<<pie*radius*radius<<endl;
cout<<"The volume of cylinder is "<<(pie*radius*radius)/height<<endl;

    return 0;
}