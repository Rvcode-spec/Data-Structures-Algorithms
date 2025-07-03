#include<iostream>
using namespace std;

 int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;
    
    while (start<=end){

        if (arr[mid]==key){
            return mid;
        }


 // Not == to key search the right Index 
        if (key > arr[mid])
        {
            start = mid+1;
        }else{
            end = mid-1;
        }

      mid = start + (end-start)/2;
            
    }
    return -1; 
 }

int main(){

    int even[6] = {2,4,6,8,10,12};
    int odd [5] = {3,5,7,9,11};

    int Index = binarySearch(even , 6 , 12);

    cout<<"even 12:- " << Index << endl;

    return 0 ;
};