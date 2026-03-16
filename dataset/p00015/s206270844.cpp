#include<iostream>
#include<cstdlib>
#include<cmath>
#include<string>
#include<sstream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string first,second;
        cin>>first;
        cin>>second;
        int carry=0;
        ostringstream sout;
        sout<<setfill('0')<<setw(max(first.length(),second.length()))<<first;
        first=sout.str();
        sout.str("");
        sout<<setfill('0')<<setw(max(first.length(),second.length()))<<second;
        second=sout.str();
        string ans="";
        for(int j=first.length()-1;j>=0;j--){
           int d1,d2;
           d1=first[j]-'0';
           d2=second[j]-'0';
           int sum=d1+d2+carry;
           carry=sum/10;
           char d3=sum%10+'0';
           ans=d3+ans;
        }
        if(carry==1)ans='1'+ans;
        if(ans.length()<=80)cout<<ans<<endl;
        else cout<<"overflow"<<endl;
    }
    return 0;
}