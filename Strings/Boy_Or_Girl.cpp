#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int freq[26] = {0};
    int distinct = 0;
    for (int i = 0; i < s.length(); i++){
        int index = s[i] - 'a';
        if (freq[index] == 0){
            distinct++;
        }
        freq[index]++;
    }
    if (distinct % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}