#include<iostream>
using namespace std;

int main(){
    string s;
    bool spacePrinted = true;
    cin>>s;
    for(int i = 0; i<s.length(); i++){
        if(s.substr(i, 3) == "WUB"){
            if (!spacePrinted){
                cout<<" ";
                spacePrinted = true;
            }
            i+=2;
        }else{
            cout<<s[i];
            spacePrinted = false;
        }
    }
    return 0;
}