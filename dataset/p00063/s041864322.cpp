#include<bits/stdc++.h>
using namespace std;int main(){ string s,work; int sum=0; while(cin>>s){work=s;reverse(work.begin(),work.end());if(work==s){sum++;}}cout<<sum<<endl;return 0;}  