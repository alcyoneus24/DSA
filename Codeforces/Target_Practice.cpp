#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        char grid[10][10];
        int score = 0;
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                cin >> grid[i][j];
            }
        }
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                if (grid[i][j] == 'X'){
                    int top = i;
                    int bottom = 9 - i;
                    int left = j;
                    int right = 9 - j;
                    int ring = min(min(top, bottom), min(left, right));
                    score += ring + 1;
                }
            }
        }
        cout << score << endl;
    }
    return 0;
}