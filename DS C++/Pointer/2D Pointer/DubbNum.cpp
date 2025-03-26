#include<iostream>
#include<vector>
using namespace std ;

int main(){

    vector <int> v={1,2, 2,4,4,4,6,7,8,};
    int l =0 , r=1;
    int sorted_len = 0;

    while(r<v.size()){
        if(v[l]!=v[r]){
            v[l+1]=v[r];
            l++;
            sorted_len++;
        }
        r++;
    }

    for(int i=0; i<=sorted_len; i++){
        cout<<v[i];
    }

    return 0;

}