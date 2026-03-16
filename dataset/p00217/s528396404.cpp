#include <iostream>

using namespace std;

int main(int argc,char **argv)
{
  int maxid, n, s, t, max, id;

  while(1){
    cin >> n;
    if(n == 0){
      break;
    }

    maxid = max = -1;
    for(int i = 0; i < n; i++){
      cin >> id >> s >> t;
      if(max < s+t){
	max = s + t;
	maxid = id;
      }
    }
    cout << maxid << " " << max << endl;
  }

  return 0;
}