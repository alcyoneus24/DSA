#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int best;
    int worst;
    int count = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    best = arr[0];
    worst = arr[0];
    for(int i = 1;i<n;i++){
        if (arr[i] > best){
            best = arr[i];
            count++;
        }
        else if (arr[i] < worst){
            worst = arr[i];
            count++;
        }
    }
    cout<<count;
    return 0;
}