#include<iostream>
using namespace std;

void printcounting(int n){
    int i;
        for(i=1;i<=n;i++){
        cout<<i<<"  ";
    }
    cout<<endl;
   
}

int main(){
    int num;
    cin>>num;
    printcounting(num);

    return 0;
}