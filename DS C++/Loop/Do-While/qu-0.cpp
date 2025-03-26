//print the sum of stream of N nitegers in the input using do-while loop.

#include<iostream>
using namespace std;

int main(){

        cout<<"enter the number"<<endl;
        int n;
        // cin>>n;
        int sum=0;

        do{
            int num;
            cin>>num;
            sum+=num;
            n--;
        }while(n>0);

               cout<<"sum"<<sum<<endl;
            return 0;
        
            
}