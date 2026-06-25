#include <iostream>
using namespace std;

int main(){
    int zeroCount = 0;
    int oneCount = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '0'){
            zeroCount++;
            oneCount = 0;
        }else{
            oneCount++;
            zeroCount = 0;
        }
        if (zeroCount >= 7 || oneCount >= 7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}