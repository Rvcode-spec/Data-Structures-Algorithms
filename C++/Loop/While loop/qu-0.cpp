// Print the sum of the first n natural number,where n is the input;

#include<iostream>
using namespace std;

int main(){

        int n; 
        int sum=0;
        cout<<"Enter the number"<<endl;
        cin>>n;

        int i=0;
        while(i<=n){
                sum+=i; // sum = sum+i
                i++;
        }

        cout<<sum<<endl;

        return 0;
}