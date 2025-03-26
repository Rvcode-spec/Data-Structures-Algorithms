#include<iostream>
using namespace std;

int main(){

    char name [4];

    // for(int i=0; i<4; i++){
    //     cin>>name[i];
    // }

    // for(int i=0; i<4; i++){
    //     cout<<name[i];
    // }

    // for each loop

    for(char element: name){
        cin>>element;
    }

    for(int i=0; i<4; i++){
        cout<<name[i];
    }
}