#include <bits/stdc++.h>
using namespace std;

int isRepeat(string s1)
{
    int count[256]={0};
    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]]++;
    }
    for(int i=0;i<s1.length();i++)
    {
        if(count[s1[i]]==1)
        {
            return i;
        }
    }
    return -1;
}

int main(){
    cout<<isRepeat("geeksforgeeks");
    return 0;
}