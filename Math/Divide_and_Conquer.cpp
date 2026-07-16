#include<iostream>
using namespace std;

int main(){
    int t,x,y;
    cin>>t;
    int xarr[t];
    int yarr[t];
    for(int i = 0;i<t;i++){
        cin >> xarr[i];
        cin>>yarr[i];
    }
    for(int j = 0;j<t;j++){
        if(xarr[j]%yarr[j]==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}