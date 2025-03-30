#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector<int> a={11,12,17,23,29};
    vector<int> b= {3,11,12};
    int l =0, r=0;

    while(l<a.size() &&  r<b.size()){
        if(a[l]==b[r]){
            cout<<a[l]<<endl;
            l++;
            r++;
        }else if (a[l]>b[r]){
            r++;
        }else{
            l++;
        }

    }
        return 0;
}