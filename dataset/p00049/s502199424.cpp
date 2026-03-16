#include <iostream>
#include <string>

using namespace std;

main(){
  long long data[4];
  for(int i=0;i<4;i++) data[i]=0;
  while(1){
    int tmp;
    char c;
    string type;
    if(scanf("%d%c", &tmp, &c)==EOF) break;
    cin >> type;
    if(type=="A"){
      data[0]++;
    }
    else if(type=="B"){
      data[1]++;
    }
    else if(type=="AB"){
      data[2]++;
    }
    else if(type=="O"){
      data[3]++;
    }
  }
  printf("%lld\n%lld\n%lld\n%lld\n", data[0], data[1], data[2], data[3]);
  return 0;
}