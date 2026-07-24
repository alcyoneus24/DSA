#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (n % 4 != 0){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        int evenSum = 0;
        int oddSum = 0;
        for (int i = 2; i <= n; i += 2){
            cout << i << " ";
            evenSum += i;
        }
        for (int i = 1; i < n - 1; i += 2){
            cout << i << " ";
            oddSum += i;
        }
        cout << evenSum - oddSum << endl;
    }
    return 0;
}