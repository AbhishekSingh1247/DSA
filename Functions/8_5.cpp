// PASS BY VALUE ( TO PASS A VALUE AS A INPUT PARAMETER TO OTHER FUNCTION )


#include<iostream>
using namespace std;

void Dummy(int n){ //IN PASS BY VALUE A COPY IS CREATED
    n++;
    cout<<"n is "<<n<<endl;

}

int main(){
int n;
cin>>n;
Dummy(n);
cout<<"number is "<<n << endl;
return 0;
}
/*
1
n is 2
number is 1   
*/