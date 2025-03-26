// An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.
// Given an integer n, return true if n is an ugly number.

#include<iostream>
using namespace std;

int main(){

// 1. 

cout<<"Enter the number"<<endl;
    int n;                                          // (14 )
    cin>>n;                                 // lno 11 (14 User No)
    int a=2, b=3, c=5;                      // add the memory store

    if(n<=0){                                 //  True & False // (c is T)
        return false;
    }
        if(n%a==0){                         // lno 17 { n%a==0  14%2==0 true 7/2}
            n/=a;                               // Check the conditiona
        }else if(n%b==0){
            n/=b;
        }else if(n%c==0){
            n/=c;
        }else{

               return n==1;
        }
            n==1? n=true : n=false;
            cout<<n<<endl;
            
}

