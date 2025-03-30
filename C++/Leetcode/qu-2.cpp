// An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.
// Given an integer n, return the nth ugly number.

#include<iostream>
using namespace std;

int main(){

// 1. 

cout<<"Enter the number"<<endl;
    int n;                                          
    cin>>n;                                 
    int a=2, b=3, c=5; 
    int sum = 0;
                                

if(n<=0){                                 
        return false;
    }

for(int i=1; i<=n; i++){
    if(i%a==0){
        i/=a;
    }else if(i%b==0){
        i/=b;
    }else if(i%c==0){
        i/=c;
       
    }else{

        return n==1;
    }
        sum+=i;
}

    cout<<sum;
          
          
}

    