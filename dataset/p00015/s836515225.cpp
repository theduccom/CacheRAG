#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,x=0,i;
    cin>>n;
    while(n--){
        x=0;
        string a,b,c="";
        cin>>a>>b;
        if(a.length()>80||b.length()>80){
            cout<<"overflow"<<endl;
            continue;
        }
        if(a.length()>b.length())swap(a,b);
        b='0'+b;
        while(a.length()<b.length())
            a='0'+a;
        char m;
        for(i=a.length()-1;i>0;i--){
            m=('0'+(a[i]-'0'+b[i]-'0'+x)%10);
            x=(a[i]-'0'+b[i]-'0'+x)/10;
            c=m+c;
        }
        if(x>0){
            m=('0'+x);
            c=m+c;
        }
        if(c.length()>80)
            cout<<"overflow"<<endl;
        else cout<<c<<endl;
    }
}