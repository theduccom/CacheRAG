#include<bits/stdc++.h>
using namespace std;
char str[102],str1[102],ans[102];
int sam(int ma1,int ma2)
{
    int co,carry=0,a,b;
    for(int i=0;ma1-i>=0||ma2-i>=0||carry==1;i++){
            if(ma1-i>=0&&ma2-i>=0){
                    a=str[ma1-i]-'0';
                    b=str1[ma2-i]-'0';
                    if(a+b+carry>=10){
                        ans[i]=a+b+carry-10+'0';
                        carry=1;
                    }
                    else {
                        ans[i]=a+b+carry+'0';
                        carry=0;
                    }
            }
            else if(ma1-i>=0){
                    a=str[ma1-i]-'0';
                    if(a+carry>=10){
                        ans[i]=a+carry-10+'0';
                        carry=1;
                    }
                    else {
                        ans[i]=a+carry+'0';
                        carry=0;
                    }
            }
            else if(ma2-i>=0){
                    b=str1[ma2-i]-'0';
                    if(b+carry>=10){
                        ans[i]=b+carry-10+'0';
                        carry=1;
                    }
                    else {
                        ans[i]=b+carry+'0';
                        carry=0;
                    }
            }
            else {
                ans[i]='0'+1;
                return i;
            }
        co=i;

    }
    return co;

}
int main()
{
    int a,b,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str>>str1;
        a=strlen(str);
        b=strlen(str1);
        a=sam(a,b);
        if(a>80)cout<<"overflow"<<endl;
        else {
                for(int j=a;j>0;j--)cout<<ans[j];
        cout<<endl;
        }
    }

}