//user base output

#include<iostream>
using namespace std;

int main(){

        int n;
        int  m;

        cin>>n;
        cin>>m;

        int *ptrn = &n;
        int *ptrm = &m;

        int Ans;

        int *ptr_Ans = &Ans;

        *ptr_Ans = *ptrn + *ptrm;
        
        cout<<*ptr_Ans<<endl;


}