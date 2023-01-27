//voting program 
#include <iostream>
using namespace std;
int main()
{  int age;
  cout<<"Enter the age"<<endl;
  cin>>age;

 if(age>18&&age<=110){
     cout<<"Eligible for vote"<<endl;
 }
 else if(age>110){
     cout<<"Not eligible for vote"<<endl;
 }
else{
    cout<<"Not eligible for vote"<<endl;
}




    return 0;
}