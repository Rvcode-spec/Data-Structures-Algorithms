#include <iostream>
using namespace std;

int main(){

    int nspace = 0;
    int nstar = 5;

    for(int row=1; row<=5; row++){

        for(int space=1; space<=nspace; space++){
                cout<<" ";
        }

        for(int star=1; star<=nstar; star++){
                cout<<"*";
        }

        cout<<"\n";
        nspace = nspace+1;
        nstar = nstar -1;
    }

    return 0;

}
