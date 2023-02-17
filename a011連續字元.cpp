#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int counter=0;
    while(getline(cin,s))
    {
        counter=0;
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]) && !isalpha(s[i+1]))
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }

}
bool isalpha(char c)
{
    if((c>='A' && c<='Z') || (c>='a' && c<='z'))
        return true;
    else return false;
}
