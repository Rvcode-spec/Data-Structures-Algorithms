//Count the number of digits for a given number n\...

#include<iostream>
using namespace std;

int main(){

        cout<<"Enter the number"<<endl;
        int n;
        cin>>n;

        int digits=0;

        while(n>0){
            digits++;
            n/=10;
        }
        cout<<digits;
}