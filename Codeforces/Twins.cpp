#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int coins[100];
    int total = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> coins[i];
        total += coins[i];
    }
    sort(coins, coins + n, greater<int>());
    int mySum = 0;
    int count = 0;
    for (int i = 0; i < n; i++){
        mySum += coins[i];
        count++;
        if (mySum > total - mySum){
            break;
        }
    }
    cout << count << endl;
    return 0;
}