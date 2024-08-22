// find linear Search value ..

#include<iostream>
using namespace std;

int main(){

        int arr[]= {23,45,67,76,89};
        int Key =76;
        int ans=-1;
        for(int i=0; i<5; i++){
            if(arr[i]==Key){
                ans=i;
            }
        }
        cout<<ans;
}
