#include<iostream>
using namespace std;

int main(){
    int n;
    int k;
    int count = 0;
    cin>>n>>k;
    int scores[50];
    for (int i = 0; i < n; i++){
        cin >> scores[i];
    }
    int target = scores[k - 1];
    for (int i = 0; i < n; i++){
        if (scores[i] >= target && scores[i] > 0){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}