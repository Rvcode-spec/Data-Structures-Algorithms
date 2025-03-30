// 123456
// 123456
// 123456

// 1234567
// 234567
// 34567
// 4567
// 567
// 67
// 7

#include<iostream>
using namespace std;

int main(){

        int n;
        cin>>n;
        int sum =0;

        for(int i=1; i<=n; i++){
                for(int j=1; j<=n; j++){
                    cout<<j;
                    sum+=j;
                }
                cout<<"\n";
               
        }
         cout<<"Sum"<<sum<<endl;
}