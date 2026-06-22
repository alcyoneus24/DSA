#include<iostream>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    t = string(t.rbegin(), t.rend());
    if(s==t){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}