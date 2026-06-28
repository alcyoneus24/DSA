#include <iostream>
using namespace std;

int main(){
    string n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n.length(); i++){
        if (n[i] == '4' || n[i] == '7'){
            count++;
        }
    }
    if (count == 0){
        cout << "NO" << endl;
        return 0;
    }
    while (count > 0){
        int digit = count % 10;
        if (digit != 4 && digit != 7){
            cout << "NO" << endl;
            return 0;
        }
        count /= 10;
    }
    cout << "YES" << endl;
    return 0;
}