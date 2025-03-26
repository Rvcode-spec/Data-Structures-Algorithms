// Count the number of digits for a given number n Sum

#include<iostream>
using namespace std;

int main(){

    cout<<"Enter the number"<<endl;

        int n, sum=0;                                                  

        cin>>n;

        // int digits=0;

        while(n>0){                                        
            int digits=n%10;
            sum+=digits;
            n/=10;
            

        }

    cout<<"Sum of n"<<sum<<endl;

}