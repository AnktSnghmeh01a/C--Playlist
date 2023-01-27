//Basically enum is initialised from 0 to n
#include<iostream>
using namespace std;
enum shape {
circle,
rectangle,
triangle,
};
int main(){

cout<<"Enter shape code::";
int code;
cin>>code;

while(code>=circle && code<=triangle){

    switch(code)
    {
        case circle:
        cout<<"I Am circle";
        break;

         case rectangle:
         cout<<"I am rectangle";
        break; 

        case triangle:
        cout<<"I am triangle";
        break;
    }
    cout<<endl;
    cout<<"Enter shape code";
    cin>>code;
}    
cout<<"BYE \n";

    return 0;
}