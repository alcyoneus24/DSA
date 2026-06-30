#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++){
        int p;
        cin >> p;
        ans[p] = i; // i gave a gift to p
    }
    for (int i = 1; i <= n; i++){
        cout << ans[i] << (i == n ? '\n' : ' ');
    }

    return 0;
}