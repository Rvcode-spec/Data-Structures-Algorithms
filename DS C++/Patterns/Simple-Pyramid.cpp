#include <iostream>
using namespace std;

int main(){

        for (int row=1; row<=5; row++){
            for (int star=1; star<=row; star++){
                cout<<"*";

            }
            cout<<"\n";
        }
        return 0;
}