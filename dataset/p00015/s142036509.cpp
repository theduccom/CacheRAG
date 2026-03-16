#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    getchar();
    while (n--)
    {
        string ara="",ara2="",res="";
        getline(cin,ara);
        getline(cin,ara2);

        if (ara.length()>ara2.length())
            swap(ara,ara2);

        int l1,l2;
        l1=ara.length();
        l2=ara2.length();

        reverse(ara.begin(),ara.end());
        reverse(ara2.begin(),ara2.end());

        int i,sum,carry=0;
        for (i=0;i<l1;i++)
        {
            sum=((ara[i]-'0')+(ara2[i]-'0')+carry);
            res.push_back((sum%10)+'0');
            carry=sum/10;
        }
        for (i=l1;i<l2;i++)
        {
            sum=(ara2[i]-'0')+carry;
            res.push_back((sum%10)+'0');
            carry=sum/10;
        }
        if (carry!=0)
            res.push_back(carry+'0');
        reverse (res.begin(),res.end());
        if (res.length()<=80)
            cout<<res;
        else
            cout<<"overflow";
        cout<<endl;
    }
    return 0;
}
