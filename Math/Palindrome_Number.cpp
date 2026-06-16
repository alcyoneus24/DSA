#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int original = num;
    int reverse = 0;
    int digit;
    if(num>0){
        while (num>0){
        digit = num%10;
        reverse = reverse*10 + digit;
        num = num / 10;
        }
        if(reverse==original){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
    return 0;
}