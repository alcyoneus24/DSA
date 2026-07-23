#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int count2 = 0, count3 = 0;
        while (n % 2 == 0){
            count2++;
            n = n/2;
        }
        while (n % 3 == 0){
            count3++;
            n = n/3;
        }
        if (n != 1 || count2 > count3){
            cout << -1 << endl;
        }
        else{
            cout << (count3 - count2) + count3 << endl;
        }
    }
    return 0;
}