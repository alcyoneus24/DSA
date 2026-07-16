#include <iostream>
using namespace std;

int main(){
    int n, h;
    int width = 0;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++){
        if (arr[j] > h){
            width = width + 2;
        }
        else if (arr[j] <= h){
            width = width + 1;
        }
    }
    cout << width;
    return 0;
}