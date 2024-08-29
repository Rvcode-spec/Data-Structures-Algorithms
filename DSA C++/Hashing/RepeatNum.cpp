// Repeat Number Using by Hashing..

#include<iostream>
using namespace std;

int main(){

 int n ; //size of the array
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int hashing[n]={0};

    for(int i=0;i<n;i++){
        hashing[array[i]]++; 

     }

   int q;
   cin>>q;
   while(q--){
       int num;
       cin>>num;
       //test
       cout<<"not ---"<<hashing[num]<<endl;
   }

    return 0;
}