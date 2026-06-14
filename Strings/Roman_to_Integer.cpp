#include<iostream>
#include <map>
using namespace std;

int main(){
    map<char, int> m1 = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    string s = "IV";
    int total = 0;
    for(int i= 0;i<s.length()-1;i++){
        int current = m1[s[i]];
        int next = m1[s[i+1]];
        if (current < next){
            total -=current;
        }else{
            total +=current;
        }
    }
    total+=m1[s[s.length()-1]];
    return total;
}