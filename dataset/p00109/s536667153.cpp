#include <iostream>
#include <string>
#include <cctype>
#include <stdlib.h>

using namespace std;

string ex_s; //expression_string
int n;

int cal(string ex_s) //calculate expression_string
{
    int i;
    int j;
    int ans; //answer
    int cnt_p=0; //count_parentheses
    int cnt_pp=1;
    int cnt_as=0; //count_add subtract
    int cnt_md=0; //count_nultiply divide
    for(i=0;i<ex_s.size();i++)
    {
        if(ex_s[i]=='(')
        {
            for(j=i+1;j<ex_s.size();j++)
            {
                if(ex_s[j]=='(') cnt_pp+=1;
                else if(ex_s[j]==')')
                {
                    cnt_pp-=1;
                    if(cnt_pp==0)
                    {
                        cnt_pp=1;
                        break;
                    }
                }
            }
            ans=cal(ex_s.substr(i+1,j-i-1));
            ex_s=ex_s.substr(0,i)+to_string(ans)+ex_s.substr(j+1);
            i=j;
            cnt_p+=1;
        }
    }
    if(cnt_p!=0)
    {
        return cal(ex_s);
    }
    else
    {   for(i=ex_s.size()-1;i>0;i--)
        {
            if(ex_s[i]=='+')
            {
                ans=cal(ex_s.substr(0,i))+cal(ex_s.substr(i+1));
                cnt_as+=1;
                return ans;
                break;
            }
            else if(ex_s[i]=='-')
            {
                if(!isdigit(ex_s[i-1])) continue;
                ans=cal(ex_s.substr(0,i))-cal(ex_s.substr(i+1));
                cnt_as+=1;
                return ans;
                break;
            }
        }
        if(cnt_as==0)
        {
            for(i=ex_s.size()-1;i>0;i--)
            {
                if(ex_s[i]=='*')
                {
                    ans=cal(ex_s.substr(0,i))*cal(ex_s.substr(i+1));
                    cnt_md+=1;
                    return ans;
                    break;
                }
                else if(ex_s[i]=='/')
                {
                    ans=cal(ex_s.substr(0,i))/cal(ex_s.substr(i+1));
                    cnt_md+=1;
                    return ans;
                    break;
                }
            }
            if(cnt_md==0)
            {
                return atoi(ex_s.c_str());
            }
        }
    }
}

int main()
{
    cin >> n;
    while(n--)
    {
        cin >> ex_s;
        ex_s.pop_back();
        cout << cal(ex_s) << endl;
    }
	return 0;
}
