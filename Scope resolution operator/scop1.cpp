//To access the global variable when there is a local variable with the same name.
#include<iostream>
using namespace std;
int x=11;
int main(){
    int x=10;
    cout<<"value of global x is "<<::x<<endl;
    cout<<"value of global x is "<<x;

    return 0;
}