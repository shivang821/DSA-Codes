#include <bits/stdc++.h>
using namespace std;

int areRotations(string s1,string s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    return ((s1+s1).find(s2));
}

int main(){
    string s1="shivang";
    string s2="ivangsh";
    cout<<areRotations(s1,s2);
    return 0;
}