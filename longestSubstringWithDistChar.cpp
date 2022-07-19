#include <bits/stdc++.h>
using namespace std;

int longSubStringWithDistChar(string &str)
{
    int n=str.length();
    int i=0,res=0;
    vector<int>prev(256,-1);
    for(int k=0;k<n;k++)
    {
        i=max(i,prev[str[k]]+1);
        int maxEnd=k-i+1;
        res=max(res,maxEnd);
        prev[str[k]]=k; 
    }
    return res;
}

int main(){
    string str="acbkjsdhfojdsfsdaas";
    cout<<longSubStringWithDistChar(str);
    
    return 0;
}