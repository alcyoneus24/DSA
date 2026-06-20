#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;
    string s;
    cin>>n;
    cin>>s;
    for(int i = 0;i<n-1;i++){
        if(s[i]!=s[i+1]){

        }else{
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}