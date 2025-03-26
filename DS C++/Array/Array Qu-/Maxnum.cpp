// Find the Maxima in Array

#include<iostream>
using namespace std;

int main(){

    int array[]={1,2,4,5,710,876};
    int max = array[0];

    for(int i=0; i<6; i++){
        if(array[i]>max){
            max=array[i];
        }
    }

    cout<<"this is Maxima num:-"<<" "<<max;
}