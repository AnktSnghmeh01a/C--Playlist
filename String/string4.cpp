//To check whether a string is empty or not

#include<iostream>
using namespace std;

int main(){
    string s1="abc";
    cout<<s1<<endl;
   // s1.clear();
  //Without clear function it will print the string is not empty
if(s1.empty()){
    cout<<"String is empty";
}
else
{
    cout<<"The given string is not empty"<<endl;
}



    return 0;
}