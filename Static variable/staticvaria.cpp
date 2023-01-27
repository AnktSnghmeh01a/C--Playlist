#include<iostream>
using namespace std;
class Employee{
  int id;
  static int count;
  public:
void setdata(void){
cout<<"Enter the id"<<endl;
cin>>id;
count++;
}
 void getdata(void){
     cout<<"The id of the employee is "<<id<<"  and this is a employee number "<<count<<endl; 
     }
     static void getcount(void){
         //cout<<id;//Throws an error 
         cout<<"The value of count is "<<count<<endl;

     }
};
//count is the static data member of class employee
int Employee::count;//Default value is 0

int main(){
    
Employee Ankit,Vivek,Harshit;
//Ankit.id=1;
//Ankit.count=1;//cannot do this as id and count are private
Ankit.setdata();
Ankit.getdata();
Ankit.getcount();

Vivek.setdata();
Vivek.getdata();
Vivek.getcount();

Harshit.setdata();
Harshit.getdata();
Harshit.getcount();

    return 0;
}