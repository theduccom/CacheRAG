#include <stdio.h>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <map>

using namespace std;

int main(){
  map<string, vector<int> > m;
  vector<string> keys;

  char s[32];
  int n;
  while(scanf(" %s %d",s,&n)!=EOF){
    string str(s);
    if(m.find(str) != m.end()){
      m[s].push_back(n);
    }else {
      keys.push_back(str);
      m.insert(pair<string,vector<int> >(s, vector<int>(1, n)));
    }
  }

  sort(keys.begin(), keys.end());
  vector<string>::iterator it;
  for(it=keys.begin();it!=keys.end();it++){
    printf("%s\n", (*it).c_str());

    vector<int> v = m[(*it)];

    sort(v.begin(), v.end());

    vector<int>::iterator it2;
    it2=v.begin();
    while(1){
      printf("%d", (*it2));
      it2++;
      if(it2!=v.end()) printf(" ");
      else{ printf("\n");break;}
    }
  }
  return 0;
}