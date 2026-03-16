#include <cstdio>
#include <map>
using namespace std;

int main()
{
  for(;;){
    int n;
    scanf("%d",&n);
    if(n == 0) break;
    map<int,int> m;
    for(int i=0; i<n; i++){
      int p,d1,d2;
      scanf("%d %d %d",&p,&d1,&d2);
      m.insert(map<int,int>::value_type(d1+d2,p));
    }
    /*
    for(map<int,int>::iterator it = m.begin(); it != m.end(); it++){
      printf("%d %d\n",(*it).first, (*it).second);
    }
    */
    map<int,int>::iterator it = m.end();
    it--;
    printf("%d %d\n",(*it).second,(*it).first);
  }
  return 0;
}