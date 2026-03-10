//by azidoazideazide(c2n14)
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //#include<map>
#include<vector>
using namespace std;
typedef long long ll;
//#include<fstream>
//ifstream fin("rps.in");
//ofstream fout("rps.out");
//#define pb push_back
int main(){
	ios::sync_with_stdio(0);
	int f,j;
  for(f=1;f<=9;f++){
    for(j=1;j<=9;j++)
      cout<<f<<"x"<<j<<"="<<f*j<<endl;
  }
return 0;
}
