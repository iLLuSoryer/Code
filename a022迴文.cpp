using namespace std;
int main()
{
    string s1;
    while(cin>>s1)
    {
        bool flag=1;
        string s2;
        int len=s1.length();
        for(int i=0;i<len/2;i++)
        {
            if(s1[i]!=s1[len-1-i])
            {
                flag=0;
                break;
            }
        }
        cout << (flag ? "yes" : "no") << endl;
    }
}
