#include<iostream>
#include<string>
using namespace std;

class binary{
   string s;

public:
  void read(void);
  void chk_bin(void);
  void ones(void);
};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
  for(int i=0;i<s.length();i++){
      if(s.at(i)!='0'&& s.at(i)!='1'){
          cout<<"Incorrect binary format"<<endl;
          exit(0);
      }
  }
}
void binary :: ones(void){
    chk_bin();
   for(int i=0;i<s.length();i++) {
     if(s.at(i)=='0'){
         s.at(i)='1';
     }
       if(s.at(i)=='1'){
         s.at(i)='0';
     }
    }
}
int main()
{
    //OOPs - Classes and objects

//C++ -->initially called -->C with classes by stroustroup
//class -->extension of structure (in C)
//structure had limitations 
// members are public
// No methods
// classes -->structure +more
// classes -->can have methods and properties
// classes -->can make few members as private & few as public
// structure in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class employee{
    //class defination
} harry,rohan,lovish; */
//harry.salary = 8 makes no sense if salary is private.

//Nesting of member functions

binary b;
b.read();
b.chk_bin();
    return 0;
} 

