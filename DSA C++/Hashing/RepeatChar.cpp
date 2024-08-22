#include <iostream>
using namespace std;

int main()
{
    
     string s;
     cin>>s;
     
     int hf[255]={0};
     
     for(int i=0;i<s.size();i++){
         hf[s[i]-'A']++;

         
     }
     
     int q;
     cin>>q;
     while(q--){
         char ch;
         cin>>ch;    
         cout<<"not --- "<<hf[ch-'A']<<endl;
         
     }
     

    return 0;
}