#include <bits/stdc++.h>
using namespace std;

void reverseStr(char str[], int low, int high)
{
    while (low <= high)
    {
        swap(str[low], str[high]);
        low++;
        high--;
    }
}
void reverseWords(char str[],int n)
{
    int start = 0;
    for (int e = 0; e <n; e++)
    {
        if (str[e] == ' ')
        {
            reverseStr(str, start, e - 1);
            start = e + 1;
        }
    }
    reverseStr(str, start, n-1);
    reverseStr(str, 0, n-1);
}

int main()
{
    string s = "geeks for keeeks";
    int n=s.length();
    char str[n];
    strcpy(str,s.c_str());

    reverseWords(str,n);
    
    for (int i = 0; i <n; i++)
        cout << str[i];
    // cout << str << endl;
    return 0;
}