//20
#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<functional>

using namespace std;

int main(){
  int n;
  cin>>n;
  while(n--){
    string s;
    cin>>s;
    string sl=s,sh=s;
    sort(sl.begin(),sl.end());
    sort(sh.begin(),sh.end(),greater<char>());
    cout<<atoi(sh.c_str())-atoi(sl.c_str())<<endl;
  }
  return 0;
}