#include<iostream>
using namespace std;

int main(){
    
    int arr[10];

    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    string ans = ""; 
    
        for(int i=0; i<=size; i++){
            if(arr[i]%2 !=0){
              ans +=(arr[i]) + 'x';
            }else{
                  ans +=(arr[i]);
            }
        }
        cout<<ans<<endl;
        return 0;
}