#include <string>
using namespace std;

void ReplaceAll(string& s, string from, string to){
  string::size_type p = 0;
  while(p=s.find(from,p), p!=string::npos){
    s.replace(p, from.length(), to);
    p += to.length();
  }
}

int main(void){
  int n;
  string x;
  char tmp[1024];

  cin>>n;
  cin.get();
  while(n--){
    cin.getline(tmp,1024);
    x = tmp;
    ReplaceAll(x,"Hoshino","Hoshina");
    cout<<x<<endl;
  }

  return 0;
}