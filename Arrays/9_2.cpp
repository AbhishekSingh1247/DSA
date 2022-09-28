#include<iostream>  //LINEAR SEARCH
using namespace std;

bool search(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int size ,key;
    int arr[100];
    cout<<"Enter size "<<endl;
    cin>>size;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];}
    cout<<"Enter the key"<<endl;
    cin>>key;

    bool found= search(arr,size,key);

    if(found){
        cout<<"Element is present "<<endl;
    } else{
        cout<<"element is not present"<<endl;

    }
    
    return 0;
}