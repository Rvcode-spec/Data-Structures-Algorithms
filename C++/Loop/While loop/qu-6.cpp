// Find the num of the following series;

#include<iostream>
using namespace std;

int main(){

    
    int n;
    cin>>n;
    // int result=0;
    char ch = '+';

    for(int i=1; i<=n; i++){
        if(i%2==0){
            cout<<""<<ch<<i;
            ch='-';
        }else{
            cout<<""<<ch<<i;
            // ch=''
                // result+=i;

        }
    }


}