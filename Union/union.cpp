#include<iostream>
using namespace std;
union money{
/*data*/
int rice;
char car;
float pound;


};
int main(){
    union money m1;
   m1.rice=10;
  // m1.car='v';
cout<<"The amount of rice is "<<m1.rice<<endl;
cout<<"The amount of rice is "<<m1.car<<endl;


    return 0;

}