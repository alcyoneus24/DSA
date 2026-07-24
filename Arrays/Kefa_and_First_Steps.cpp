#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 1;
    int best = 1;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            count++;
            best = max(best, count);
        }else{
            count = 1;
        }
    }
    cout<<best<<endl;
    return 0;
}