#include<iostream>
using namespace std;

int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}



int main(){

    int num1=10;
    int num2=20;

    cout<<add(num1,num2);
}