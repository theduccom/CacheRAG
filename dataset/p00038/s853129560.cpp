#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <fstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;
typedef long long LL;
typedef pair<int, int> P;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
vector<string> split( string s, string c )
{
	vector<string> ret;
	for( int i=0, n; i <= s.length(); i=n+1 ){

		n = s.find_first_of( c, i );
		if( n == string::npos ) n = s.length();
		string tmp = s.substr( i, n-i );
		ret.push_back(tmp);
	}
	return ret;
}
string num[13] = {"1","2","3","4","5","6","7","8","9","10","11","12","13"};
int main(void){
  string tmp;
  while(cin>>tmp){
    vector<string> cardstr = split(tmp,",");
    vector<int> card;
    REP(i,cardstr.size()){
      REP(j,13){
        if(cardstr[i]==num[j]){
          card.push_back(j+1);
        }
      }
    } 
    sort(card.begin(),card.end());
    int c[3]={0};
    bool st1 = false;
    bool st2 = true;
    //ツカツウツδ督ト
    for(int i=1; i<=13; i++){
      if(count(card.begin(),card.end(),i)>=2){
        c[count(card.begin(),card.end(),i)-2]++;
      }
    }
    //ツスツトツδ個ーツト
    if(card[0]==1&&card[1]==10&&card[2]==11&&card[3]==12&&card[4]==13)
      st1 = true;
    for(int i=1; i<5; i++){
      if(card[i]-card[i-1]!=1){
        st2 = false;
        break;
      }
    }
    if(c[2]){
      cout<<"four card"<<endl;
    }else if(c[1]&&c[0]){
      cout<<"full house"<<endl;
    }else if(st1||st2){
      cout<<"straight"<<endl;
    }else if(c[1]){
      cout<<"three card"<<endl;
    }else if(c[0]==2){
      cout<<"two pair"<<endl;
    }else if(c[0]==1){
      cout<<"one pair"<<endl;
    }else{
      cout<<"null"<<endl;
    }
  }
  return 0;
}