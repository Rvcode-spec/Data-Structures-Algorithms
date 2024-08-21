// pass by value { value Decrease formal and Actual }

#include<iostream>
using namespace std;
// Formal Parameter

void Decrease (int n1, int n2){
    n1--;
    n2=n2-2;
    cout<<(n1)<<":"<<(n2)<<endl;
    // n1 and n2 both are Formal Parameters Value
}

int main(){
    int p =26;
    int q = 14;
    Decrease(p,q);
    cout<<(p)<<":"<<(q)<<endl;
    // p and q both are Actual Parameters 

    return 0;



}