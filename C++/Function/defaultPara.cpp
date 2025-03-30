#include<iostream>
using namespace std;

 int Default(int a, int b=0, int c= 0){

        return (a+b+c);    
 }

int main(){

   cout<<Default(5)<<endl;
   return 0;


}