#include<string>
#include<iostream>
using namespace std;
int main()
{
string ss;
string ans="A";
while(cin >> ss){
if(ans[ans.length()-1]==ss[0])ans+=ss[2];
else if(ans[ans.length()-1]==ss[2])ans+=ss[0];
else ;
}
cout << ans[ans.length()-1] << "\n";
return 0;
}