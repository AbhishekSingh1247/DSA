// BINARY SEARCH
#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int mid= start +  (end-start)/2; // SAME AS S+E/2  JUST DOING THIS CHALAKI SO THAT IT DOES NOT GO OUT OF RANGE OF INT 
 
    while(start<=end){
    
    if(arr[mid]==key){
        return mid;}

        if(key>arr[mid]){
            // go to right wala part
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        mid = start+  (end-start)/2;

    }
    return -1;
}

    int main(){

        int even[6]={2,4,8,10,15,12};
        int odd[5]={3,7,9,17,15};
     int evenindex = binarySearch(even,6,10);
     cout<<"Index of 10 is"<< " "  << evenindex<<endl;

     int oddindex = binarySearch(odd,5,15);
     cout<<"Index of 15 is"<<  " "  << oddindex;

    }

