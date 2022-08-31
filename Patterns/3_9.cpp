#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
  
    while(i<=n){
        int j=1;
      char start ='A'+n-i;    //i=row,j=column
        while(j<=i){
        cout<<start;
        start=start+1;
        j=j+1;}
        i=i+1;
        cout<<endl;

    }
     
    }

    /*
D
CD
BCD
ABCD

*/