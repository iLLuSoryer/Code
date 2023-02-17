#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin >> s)
    {
        int a[26] = {0};
        for(int i = 0; i<s.length(); i++)
        {
            if(64 < s[i] && s[i] < 91)
                a[s[i]-65]++;
            else if(96 < s[i] && s[i] < 123)
                a[s[i]-97]++;
        }
        int cnt = 0;
        for(int i = 0; i<26; i++)
            if(a[i]%2 != 0)
                cnt++;
        if(cnt <= 1)
            cout << "yes !" << endl;
        else cout << "no..." << endl;
    }
    return 0;
}
