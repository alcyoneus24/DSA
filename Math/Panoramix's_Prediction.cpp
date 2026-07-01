#include <iostream>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i < num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n, m;
    cin >> n >> m;
    int next = n + 1;
    while (!isPrime(next)){
        next++;
    }
    if (next == m){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}