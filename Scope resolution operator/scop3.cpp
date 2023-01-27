//To access the class static variable even if there is a local variable.
#include<iostream>
using namespace std;
class Test
{
   static int x;
   public:
   static int y;

   void func(int x){
       cout<<"Values of static x is "<<Test::x<<endl;
       cout<<"values of local x is "<<x<<endl;
   }

};

int Test::x=1;
int Test::y=2;

int main(){
    
  Test obj;
  int x=3;
  obj.func(x);

  cout<<"Test :: y "<<Test::y;
  
    return 0;
}