// 121121121
// 121121121
// 121121121
// 121121121


#include<iostream>
using namespace std;

int main(){

        int n;
        cin>>n;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if((i+j)%2==0){
                    cout<<1;
                }else{
                    cout<<2;
                }
            }
            cout<<"\n";
        }
}