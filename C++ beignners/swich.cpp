#include <iostream>
using namespace std;
int main()
{
  int age;

  cout<<"Enter the age"<<endl;
  cin>>age;
 switch (age)
 {
 case 12:
  cout<<"You are 12 years old";
     break;
 case 13:
  cout<<"You are 13 years old";
     break;
 case 14:
  cout<<"You are 14 years old";
     break;
 case 15:
  cout<<"You are 15 years old";
     break;
 
 default:
 cout<<"You are more than 15 years old";
     break;
 }
    return 0;
}