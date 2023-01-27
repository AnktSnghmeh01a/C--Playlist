/*Program on static variable  */
#include<iostream>
using namespace std;
inline int produ(int x,int y){
    static int c=0;
    c=c+1;
    return x*y+c;
}
int main(){
    int a=10,b=20;
    cout<<"The product of a and b is "<<produ(a,b)<<endl;
    cout<<"The product of a and b is "<<produ(a,b)<<endl;
    cout<<"The product of a and b is "<<produ(a,b)<<endl;
    cout<<"The product of a and b is "<<produ(a,b)<<endl;
    cout<<"The product of a and b is "<<produ(a,b)<<endl;
    cout<<"The product of a and b is "<<produ(a,b)<<endl;
    cout<<"The product of a and b is "<<produ(a,b)<<endl;
    cout<<"The product of a and b is "<<produ(a,b)<<endl;
    cout<<"The product of a and b is "<<produ(a,b)<<endl;
    return 0;
}