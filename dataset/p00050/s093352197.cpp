#include <cstdio>
#include <cstring>

using namespace std;

int main(void){
  char buf[1024],*p;
  
  fgets(buf, 1024, stdin);
  while(p=strstr(buf,"apple")){
    strncpy(p,"*****", 5);
  }
  while(p=strstr(buf,"peach")){
    strncpy(p,"apple",5);
  }
  while(p=strstr(buf,"*****")){
    strncpy(p,"peach",5);
  }
  *strrchr(buf,10)=0;
  puts(buf);
  return 0;
}
