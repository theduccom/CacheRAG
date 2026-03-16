#include<iostream>
#include<string>
using namespace std;

int main(){

  int n, out, runner, pt;
  string str, s;

  cin >> n;

  for(int i=0; i<n; i++){
    out = 0;
    runner = 0;
    pt = 0;
    while(out != 3){
      cin >> s;
      if(s == "OUT"){
        out++;
      }
      else if(s == "HOMERUN"){
        pt += runner + 1;
        runner = 0;
      }
      else{
        if(runner < 3) runner++;
        else pt++;
      }
    }

    cout << pt << endl;

  }  

  return 0;

}