#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=i-1;          //first print space 
        while(space){
        cout<<" ";
        space=space-1;}
        int j=n;
        while(j>=i){
            cout<<"*";                   
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
    }

    /*

****
 ***
  **
   *
   
   */
