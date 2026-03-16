#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){

  int cheeze[3], n, r, hole;
  double d;

  while(cin >> cheeze[0] >> cheeze[1] >> cheeze[2]){
    if(cheeze[0] == 0) break;
    cin >> n;

    sort(cheeze, cheeze+3);
    r = cheeze[0] * cheeze[0] + cheeze[1] * cheeze[1];
    d = (double)cheeze[0] * cheeze[1];
    d = d * d / r;

    for(int i=0; i<n; i++){
      cin >> hole;
      if(4 * hole * hole > r && (double)hole * hole > d) cout << "OK" << endl;
      else cout << "NA" << endl;
    }
  }

  return 0;

}