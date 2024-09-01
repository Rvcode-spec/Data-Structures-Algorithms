#include<iostream>
using namespace std;

int main(){

    int C =0;
    int arr[]={2,5,6,7,8};
    int w, n=5, maxx;

    cin>>w;
    if (w > n) {
        cout << "Window size cannot be greater than the array size" << endl;
        return -1; // Error code
    }


    for(int i=0; i<w; i++){
        C+=arr[i];
        // cout<<arr[i];
    }

    maxx = C; 
    // Initialize maxx with the first sum


        for(int i=0; i<=n-w; i++){
            C= C-arr[i-1]+arr[i+w-1];
            if(C>maxx){
                maxx = C;
            }
                
        }

         cout << "Maximum sum of " << w << " consecutive elements is: " << maxx << endl;
 return 0;

}