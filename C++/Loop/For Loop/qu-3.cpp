// Write a program in C++ to find the sum of the first 10 natural numbers.


#include<iostream>
using namespace std;

int main(){

        cout<<"This is Natural Numbers"<<endl;
        int sum = 0;
        for(int i=1; i<=10; i++){
            cout<<i<<" ";
                sum+=i;
        }
        cout<<"\n";
        cout<<"Sum of natural number:-"<<" "<<sum<<endl;
        // cout<<sum<<endl;

}