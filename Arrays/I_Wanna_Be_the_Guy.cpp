#include<iostream>
using namespace std;

int main(){
    int n,p,q;
    int x;
    int y;
    cin>>n;
    bool level[101] = {false};
    cin>>p;
    for(int i = 0;i<p;i++){
        cin>>x;
        level[x] = true;
    }
    cin>>q;
    for(int i = 0;i<q;i++){
        cin>>y;
        level[y] = true;
    }
    for (int i = 1; i <= n; i++){
        if (level[i] == false){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}