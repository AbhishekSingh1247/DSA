#include<iostream>
using namespace std;
int main(){
   int a=1;
   int b=2;
   if(a-- >0 || ++b >2){       // it won't change the value of b cause 1st condition is true 

    cout<<"Stage 1 - Inside If"; //it would also change the value of b if && was used 
   } else {
    cout<<"Stage 2 - Inside else";
   }
   cout<<a<<" "<<b<<endl;
}

//    Stage 1 - Inside If0 2