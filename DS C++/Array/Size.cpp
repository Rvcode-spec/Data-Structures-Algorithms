#include<iostream>
using namespace std;

int main(){
    int array[]={1,3,5,6,7};

    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[0])<<endl;

    int array1[4];

    cout<<array1[0]<<endl;
    cout<<array1[1]<<endl;
    cout<<array1[2]<<endl;
    cout<<array1[3]<<endl;

    cout<<array1<<endl;


    return 0;
}