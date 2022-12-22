#include<iostream>
#include<string>
using namespace std;

void subsequence(string s , int n , string printer){
    if(n == s.length()){
        cout<<printer<<"\n";
        return;
    }
    string p1 = printer;
    printer.push_back(s[n]);
    string p2 = printer;
    subsequence(s , n+1 , p2);
    subsequence(s , n+1 , p1);
    return;
}

int main(){
    
    return 0;
}