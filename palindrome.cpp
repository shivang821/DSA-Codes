#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s1)
{
    int f=0;
    int l=s1.length()-1;
    while(f<l)
    {
        if(s1[f]!=s1[l])return false;
        f++;
        l--;
    }
    return true;
}

int main(){
    cout<<isPalindrome("abba");
    return 0;
}