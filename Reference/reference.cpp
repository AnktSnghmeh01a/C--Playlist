#include<iostream>
using namespace std;
int main(){

int a=10;
int &b=a;  //Using reference operator

cout<<a<<" "<<b<<endl;
++b;//incrementing by 1 
cout<<a<<" "<<b<<endl;
a+=10; //incrementing by 10
cout<<a<<" "<<b<<endl;
    return 0;
}