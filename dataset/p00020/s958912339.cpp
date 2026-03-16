
//Nayeem Shahriar Joy ,Applied Physics And Electronic Engineering , University of Rajshahi.


#include <bits/stdc++.h>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;

int main()

{

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  string s;

  getline(cin,s);

  for(int i=0;i<s.size();i++)

  {
      s[i]=toupper(s[i]);
  }

  cout<<s<<endl;

  return 0;

}