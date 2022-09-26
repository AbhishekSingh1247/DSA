#include<iostream>
using namespace std;

int isprime(int n){
    for(int i=2;i<n;i++){   // leave 1 and that number itself
        if(n%i==0){  // divide hogya hai therefore not a prime no
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
 if (! isprime(n)){  //1 aayega toh condition of if true therefore not laga dia
    cout<<"not a prime number";
 }else {
    cout<<"prime number";
 }
}