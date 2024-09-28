#include<iostream>
#include<vector>
using namespace std;
int main(){

    int arr[]={1,2,4,5,4,3,2};
    int anssum=0;

    for(int i=0; i<=7; i++){        //1-2+4-5+4-3
        if(i%2==0){
            anssum+=arr[i];
        }else{
            anssum-=arr[i];
    }
    cout<<arr[i]<<endl;
}
    cout<<anssum;
}