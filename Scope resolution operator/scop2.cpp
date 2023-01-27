//It is used to declare function outside the class
#include<iostream>
using namespace std;
class school{
public:
void student();
};

void school ::student(){
    cout<<"I am a brillant student "<<endl;
}
using namespace std;

int main(){
    
school a;
a.student();



    return 0;
}