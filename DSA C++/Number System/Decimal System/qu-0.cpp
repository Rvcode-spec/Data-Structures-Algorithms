// Print the Decimal to Binary Number system Input [14]

#include<iostream>
using namespace std;

int main(){

        int n;
        cin>>n;

        int result =0, power =1;


        while(n>0){

                int paritydigits=n%2;
                result+=paritydigits*power;
                power*=10;
                n/=2;
        }

        cout<<result;
}