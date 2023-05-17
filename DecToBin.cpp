//
#include<iostream>
 
using namespace std;
 
 

int main(){
    int nd,len=0,binArr[100];
    cin>>nd;

    while(nd !=0){
        binArr[len] = nd%2;
        nd = nd/2;
        len++;
    }
   for(int i= len-1; i>=0; i--){
    cout<<binArr[i]<<" ";
   }
return 0;
}