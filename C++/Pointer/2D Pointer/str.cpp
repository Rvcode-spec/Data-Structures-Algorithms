#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

            string str = "Ravi";
            int l =0, r=str.length()-1;
            while(l<r){
                char temp = str[l];
                str[l]=str[r];
                str[r]=temp;
                ++l;
                --r;
            }
            cout<<str;


        return 0;

}
