// dereference pointer  

#include<iostream>
using namespace std;

int main(){

    int Value=42;
int* ptr = &Value;
cout<<*ptr<<endl;


// Updata the Value 

    *ptr=50;
    // cout<<"old value"<<Value<<endl;
    cout<<"new value"<<*ptr<<endl;

}
