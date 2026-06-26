#include<iostream>
using namespace std;

int main(){
    int n;
    int p;
    double total = 0;
    cin>> n;
    for(int i = 0;i<n;i++){
        cin>>p;
        total+=p;
    }
    cout<<(double)total/n;
    return 0;
}