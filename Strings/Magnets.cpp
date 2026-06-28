#include<iostream>
using namespace std;

int main(){
    int n;
    string prev;
    string curr;
    int groups = 1; 
    cin>>n;
    cin>>prev;
    for(int i = 1;i<n;i++){
        cin>>curr;
        if (curr!=prev){
            groups++;
        }
        prev = curr;
    }
    cout<<groups<<endl;
    return 0;
}