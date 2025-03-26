// An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.
// Given an integer n, return true if n is an ugly number.

#include<iostream>
using namespace std;

int main(){

        cout<<"Enter The Number"<<endl;
        int n;
        cin>>n;
        int a=2, b=3, c=5;

        if(n<=0){
            return false;
        }
        while(n%a==0){
            n/=a;
        }while(n%b==0){
            n/=b;
        }while(n%c==0){
            n/=c;
        }

        // return n==1; 
            n==1? n=true : n= false;
        cout<<n<<endl;   
 
}