#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool present[26] = {false};
    for (char ch : s){
        ch = tolower(ch);
        present[ch - 'a'] = true;
    }
    for (int i = 0; i < 26; i++){
        if (!present[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}