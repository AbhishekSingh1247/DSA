#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=0;
        while(col<row){
            cout<<row+col;
            col=col+1;
    
        }
        cout<<endl;
        row=row+1;
    }
}


/*
5
1
23
345
4567
56789*/