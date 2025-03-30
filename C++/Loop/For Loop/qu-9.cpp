// Print the all value between 1 and 50 except for the multipile of 3

#include<iostream>
using namespace std;

int main(){

        for(int i=1; i<=50; i++){
                if(i%3==0){
                    continue;
                }else{
                    cout<<i;
                }
                    cout<<" , ";
        }
return 0;

}