//  Print the number from 1-1000 without Looping 

#include<iostream>
using namespace std;

void printno(int firstno , int lastno){

    if(firstno>lastno){
        return ;
    }
    cout<<firstno<<" "<<endl;
    printno(firstno+1,lastno);
}

int main(){



}
