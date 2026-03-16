
#include<cstring>
#include<iostream>
using namespace std;
char s[1005];
char ans[1005];
int main()
{
    while(cin.getline(s,1000))
    {
        int len=(int)strlen(s);
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<len;j++)
            {
                if(s[j]>='a'&&s[j]<='z')
                    ans[j]=(char)((s[j]-'a'-i+26)%26+'a');
                else
                    ans[j]=s[j];
            }
            ans[len]='\0';
            char *str,*str2,*str3;
            str=strstr(ans,"the");
            str2=strstr(ans,"this");
            str3=strstr(ans,"that");
            if(str==0&&str2==0&&str3==0)continue;
            cout<<ans<<endl;
            break;
        }
    }
}