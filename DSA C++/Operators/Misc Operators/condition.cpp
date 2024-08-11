// condition? Expressionl1 - ture then Expressionl2 (Run code)

#include<iostream>
using namespace std;

int main(){

        int a = 10, b = 10, c;
        cout<<a+b<<endl;

        a==b? c = true : c= false; //Ternary
        cout<<c<<endl;

        cout<<&a<<endl; // This is Address Operators [Defiend the Address in Data]

        cout<<"--------------------"<<endl;

        int d = 6 , e = 7;
        cout<<d++<<endl;// This is Post - Increment.
        cout<<++d<<endl; // Pre - Increment
        cout<<--b<<endl; // Pre - Decrement 
        cout<<b--<<endl; // Post - Decrement 

        return 0;    
}