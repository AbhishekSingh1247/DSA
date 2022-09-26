#include<iostream>// PASS by VALUE EXAMPLE
using namespace std;
int update(int a){
    a-=5;
    return a;
}
int main(){
    int a=15;
    update(a);
    cout<<a<<endl;
    return 0;
}

// 15 is the answer not 10
