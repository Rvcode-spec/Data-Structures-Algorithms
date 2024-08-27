//Sum the number in pointer 

#include<iostream>
using namespace std;

int main(){

        int x =10;
        int y=30;

        int *ptrx = &x; /// fetch the address of x
        int *ptry=&y;  // fetch the address of y 

        int ans;

        int *ptr_ans = &ans;

        *ptr_ans = *ptrx + *ptry;

        cout<<*ptr_ans<<endl;
}