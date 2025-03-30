// The number 2020 is interpreted as:-Base 10 to Base 2
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int ans=0, power=1;

    while(n>!0){
        int digits =n%2;
        ans+=digits*power;
        power*=10;
        n/=2;
    }
    cout<<ans;
}