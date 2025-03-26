#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> v={1, 2, 4, 8, 10 , 12};
int target = 12;
int l=0;
int r=v.size()-1;

while(l<r)
    if(v[l]+v[r]==target){
        cout<<v[l]<<" "<<v[r]<<endl;
         r--;
        l++;
    }
     
     else if(v[l]+v[r]>target){
        r--;
       
    }else{
        l++;
    }

    return 0;
}


