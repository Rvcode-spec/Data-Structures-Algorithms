// formal Parameters to * the value 

#include<iostream>
using namespace std;

void formalInto(int p){
    p= p*2;
}

int main(){

    int p = 24;
    formalInto(p);
    cout<<p;
    return 0;

}