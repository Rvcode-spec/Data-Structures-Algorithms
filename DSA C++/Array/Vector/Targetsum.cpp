#include<iostream>
using namespace std;

int main(){

    int arr[]={1,1,1,1,1};
    int targetsum;
    cin>>targetsum;

    int size = 5;
    int pairs =0;

    for(int i=0; i<=size; i++){
        for(int j=i+1; j<=size; j++){
                if(arr[i]+arr[j]==targetsum){
                    pairs++;
                }
        }
    }
        cout<<pairs;
}