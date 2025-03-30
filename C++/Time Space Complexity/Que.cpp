// Simple code { Youre given number x and y , x=10topower 5 , and y =10topower 8, sum of the all numbers in the renge }  


#include<iostream>
using namespace std ;

int main(){

    int x;
    int y;
    cin>>x>>y;

    int ans =0;

    for(int i=x; i<=y; i++){
        ans+=i;
    }
    cout<<ans;

    return 0;
}