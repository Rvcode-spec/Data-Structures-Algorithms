//  Write a program in C++ to display n terms of natural numbers and their sum.

#include<iostream>
using namespace std;

int main(){
        cout<<"Enter No"<<endl;
        int n, sum=0;
        cin>>n;
        cout<<"The natural numbers upto 7th terms are"<<endl;
        for(int i=1; i<=n; i++){     
            cout<<i<<" ";
                sum+=i;
        }
        cout<<"\n";
        cout<<"The sum of the natural numbers is:"<<" "<<sum<<endl;
}