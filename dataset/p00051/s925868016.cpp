#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  int max,min,dif,t,count;

  cin>>count;

  for(t = 0;t < count;++t){
    string v;

    max = 0;
    min = 0;

    cin>>v;

    sort(v.begin(),v.end());
    min = atoi(v.c_str());

    reverse(v.begin(),v.end());
    max = atoi(v.c_str());

    dif = max - min;
    cout<<dif<<endl;
  }

  return 0;
}