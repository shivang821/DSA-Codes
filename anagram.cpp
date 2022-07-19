#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string &s1,string &s2)
{
    const int CHAR=256;
    int count[CHAR]={0};
    if(s1.length()!=s2.length())return false;
    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<CHAR;i++)
    {
        if(count[i]!=0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    string s1="listen";
    string s2="islent";
    bool a=checkAnagram(s1,s2);
    // cout<<checkAnagram(s1,s2)<<endl;
    cout<<a<<endl;
    return 0;
}