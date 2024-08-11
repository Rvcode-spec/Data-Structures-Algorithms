//Reverse digits of a number ;

#include<iostream>
using namespace std;

int main(){


        cout<<"Enter the number"<<endl;
        int n;
        cin>>n;

        int res=0;
        while(n>0){
            int lastdigits = n%10;
            res=res*10+lastdigits;
            n/=10;
        }

        cout<<res;


}