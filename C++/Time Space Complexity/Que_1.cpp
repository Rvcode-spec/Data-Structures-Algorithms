// N of  Ap { n/2 (2a+(n-1)*d)}

#include<iostream>
using namespace std;

int sum_range_opt(int x, int y){
    int n = (y - 1 +1);
    int a = x;
    int Ans = (n * (2*a + (n-1)*1))/2;
    return Ans;
}

int main(){

  cout<<sum_range_opt(6 , 8);
    return 0;
}