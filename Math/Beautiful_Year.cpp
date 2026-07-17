#include<iostream>
using namespace std;

int main(){
    int y;
    int a,b,c,d;
    cin>>y;
    int year = y;
    while(true){
        year++;
        a = year%10;
        b = (year/10)%10;
        c = (year/100)%10;
        d = (year/1000)%10;
        if (a != b && a != c && a != d && b != c && b != d && c != d){
            cout<<year;
            break;
        }
    }
    return 0;
}