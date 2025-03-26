// Print the sum of the first n natural number,where n is the input;

#include<iostream>
using namespace std;

int main(){

        int n, sum=0;
        cout<<"Enter the Number"<<endl;
        cin>>n;

        for(int i=1; i<=n; i++){
                sum+=i;       
        }
        cout<<sum<<endl;
}