#include<iostream>
using namespace std;

void Numbers(int i, int j){
    
    if(i==j){
            return;
    }

    cout<<i<<endl;
    Numbers(i+1, j);
}

int main(){

    Numbers(1,5);

}