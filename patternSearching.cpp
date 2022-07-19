#include <bits/stdc++.h>
using namespace std;
// my method
// void isPatternExist(string str, string pat)
// {
//     int j = 0;
//     vector<int> v;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == pat[j])
//         {
//             v.push_back(i);
//         }
//     }
//     reverse(v.begin(), v.end());
//     bool isexist=false;
//     while (v.empty() != true)
//     {
//         int e = v.back();
//         v.pop_back();
//         int count = 0;
        
//         for (int i = 0; i < pat.length(); i++)
//         {
//             if (pat[i] == str[e])
//             {
//                 e++;
//                 count++;
//             }
//             if (count == pat.length())
//             {
//                 cout << e - count << " ";
//                 isexist=true;
//             }
//         }
//     }
//     if (!isexist)
//     {
//         cout << "not present";
//     }
// }

// naive method

// void isPatternExist(string &str,string &pat)
// {
//     int m=pat.length();
//     int n=str.length();
//     for(int i=0;i<=n-m;i++)
//     {
//         int j=0;
//         for(j;j<m;j++)
//         {
//             if(str[i+j]!=pat[j])
//             {
//                 break;
//             }
//         }
//         if(j==m)
//         {
//             cout<<i<<" ";
//         }
//     }
// }
// optimized naive method
void isPatternExist(string &str,string &pat)
{
    int m=pat.length();
    int n=str.length();
    for(int i=0;i<=n-m;)
    {
        int j=0;
        for(j;j<m;j++)
        {
            if(str[i+j]!=pat[j])
            {
                break;
            }
        }
        if(j==m)
        {
            cout<<i<<" ";
        }
        if(j==0)
        {
            i++;
        }
        else{
            i=i+j;
        }
    }
}
int main()
{
    string str ="abdabceabc";
    string pat = "abc";
    isPatternExist(str, pat);
    return 0;
}