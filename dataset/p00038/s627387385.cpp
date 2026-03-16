#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i, n) REP(i, 0, n)
#define lengthof(x) (sizeof(x) / sizeof(*(x)))
#define FILL(ptr, value) FILL_((ptr), sizeof(ptr)/sizeof(value), (value))
template <typename T>
void FILL_(void * ptr, size_t size, T value){
  std::fill((T*)ptr, (T*)ptr+size, value);
}
//4方向ベクトル→↑←↓
int dx[] ={1,0,-1,0};
int dy[] ={0,-1,0,1};
int card[5];
int main()
{
  while(scanf("%d,%d,%d,%d,%d",&card[0],&card[1],&card[2],&card[3],&card[4]) !=EOF){
    sort(card,card+5);
    bool four,one,two,three,full,straight,flag;
    flag = false;
    one = two = three =four= full =straight = false;
    if(!flag){
      if(card[0]==card[1]&&card[0]==card[2]&&card[0]==card[3]||card[1]==card[2]&&card[1]==card[3]&&card[1]==card[4]){
	four = true;
	flag = true;
      }else if(card[0]==card[1]&&card[0]==card[2]&&(card[3]==card[4])||card[0]==card[1]&&card[2]==card[3]&&card[2]==card[4]){
	full = true;
	flag = true;
      }else if(card[0]==1&&card[1]==10&&card[2]==11&&card[3]==12&&card[4]==13||card[1]==card[0]+1&&card[2]==card[0]+2&&card[3]==card[0]+3&&card[4]==card[0]+4){
	straight = true;
	flag = true;
      }else if(card[0]==card[1]&&card[0]==card[2]||card[1]==card[2]&&card[1]==card[3]||card[2]==card[3]&&card[2]==card[4]){
	three = true;
	flag = true;
      }else if(card[0]==card[1]&&(card[2]==card[3]||card[3]==card[4])||card[1]==card[2]&&card[3]==card[4]){
	two = true;
	flag = true;
      }else if(card[0]==card[1]||card[1]==card[2]||card[2]==card[3]||card[3]==card[4]){
	one = true;
	flag = true;
      }
    }
    if(!flag)
      cout <<"null"<<endl;
    else if(four)
      cout <<"four card"<<endl;
    else if(full)
      cout <<"full house"<<endl;
    else if(straight)
      cout <<"straight"<<endl;
    else if(three)
      cout <<"three card"<<endl;
    else if(two)
      cout <<"two pair"<<endl;
    else if(one)
      cout <<"one pair"<<endl;
  }
  return 0;
}