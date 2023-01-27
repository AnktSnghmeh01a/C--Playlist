#include<iostream>
using namespace std;
class employee{
int id;
int salary;
public:
void setdata(void){
    cout<<"Enter the id of the employee"<<endl;
    cin>>id;
}
void getdata(void){
    cout<<"The id of the emplaoyee is "<<id<<endl;
}

};
int main(){
    employee fb[3];
  for(int i=0;i<3;i++){
      fb[i].setdata();
      fb[i].getdata();
       
  }



    return 0;
}