#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x == 1)
            count1++;
        else if (x == 2)
            count2++;
        else if (x == 3)
            count3++;
        else
            count4++;
    }
    int taxis = 0;
    taxis += count4;
    taxis += count3;
    if (count1 >= count3)
        count1 -= count3;
    else
        count1 = 0;
    taxis += count2 / 2;
    count2 %= 2;
    if (count2){
        taxis++;
        if (count1 >= 2)
            count1 -= 2;
        else
            count1 = 0;
    }
    taxis += (count1 + 3) / 4;
    cout << taxis;
    return 0;
}