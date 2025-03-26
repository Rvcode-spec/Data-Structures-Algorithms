// Write a program in C++ to find the perfect numbers.
// Notes:- { Perfect Numbers is a equal to the sum of its proper divisors.}


#include<iostream>
using namespace std;

int main(){

        cout<<"Enter the number"<<endl;
        int n,sum = 0;
        cin>>n;

            for(int i=1; i<=n/2; i++){
                    if(n%i==0){
                        sum+=i;
                    }    
            }

            if(n==sum){
                        cout<<"perfect numbers:-"<<endl;
                }else{
                    cout<<"perfect not numbers:-"<<endl;
                }
      
}