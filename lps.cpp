#include <bits/stdc++.h>
using namespace std;

// Naive solution
// int longPropPreSuff(string str, int n)
// {
//     for (int len = n - 1; len > 0; len--)
//     {
//         bool flag = true;
//         for (int i = 0; i < len; i++)
//         {
//             if (str[i] != str[n - len + i])
//             {
//                 flag = false;
//             }
//         }
//         if (flag == true)
//         {
//             return len;
//         }
//     }
//     return 0;
// }

// void fillLps(string str, int lps[])
// {
//     for (int i = 0; i < str.length(); i++)
//     {
//         lps[i] = longPropPreSuff(str, i + 1);
//     }
// }

// int main()
// {
//     string str = "ababacab";
//     int lps[str.length()];
//     fillLps(str,lps);
//     for (int i=0;i<str.length();i++)
//     {
//         cout<<lps[i]<<" ";
//     }
//     // for(int x:lps)
//     // {
//     //     cout<<x<<" ";
//     // }
//     return 0;
// }


// efficient solution

void fillLps(string str,int lps[])
{
    int n=str.length();int len=0;
    lps[0]=0;
    int i=1;
    while(i<n)
    {
        if(str[i]==str[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len==0){
                lps[i]=0;i++;
            }
            else{ 
                len=lps[len-1];
            }
        }
    }
}
int main(){
    string str="AAABAAAAC";
    int lps[str.length()];
    fillLps(str,lps);
    for(int x:lps)
    {
        cout<<x<<" ";
    }
    return 0;
}