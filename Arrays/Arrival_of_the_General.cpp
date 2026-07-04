#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int maxHeight = arr[0];
    int minHeight = arr[0];
    int maxIndex = 0;
    int minIndex = 0;
    for(int i =  0;i<n;i++){
        if(arr[i]>maxHeight){
            maxHeight = arr[i];
            maxIndex = i;
        }
    }
    for(int i =  0;i<n;i++){
        if(arr[i]<=minHeight){
            minHeight = arr[i];
            minIndex = i;
        }
    }
    int moves = maxIndex + (n-1-minIndex);
    if(maxIndex>minIndex){
        moves--;
    }
    cout<<moves;
    return 0;
}