#include <iostream>
using namespace std;

int main(){
    int n;
    int h[1000];
    int maxWatered = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }
    for (int i = 0; i < n; i++){
        int count = 1;
        for (int j = i; j > 0; j--){
            if (h[j - 1] <= h[j]){
                count++;
            }else{
                break;
            }
        }
        for (int j = i; j < n - 1; j++){
            if (h[j + 1] <= h[j]){
                count++;
            }else{
                break;
            }
        }
        if (count > maxWatered){
            maxWatered = count;
        }
    }
    cout << maxWatered << endl;
    return 0;
}