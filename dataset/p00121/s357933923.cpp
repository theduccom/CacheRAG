#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<sstream>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

using namespace std;

typedef unsigned int uint;
typedef uint B;

#define mask 0x07

#define get(d,i) (((d) >> ((i)*3)) & mask)

#define set(d,i,n) {d &= ~(mask << ((i)*3)); d |= (n << (3*(i)));}

#define get2(d,x,y) get(d, x+y*4)

#define set2(d,x,y,n) set(d, x+y*4, n)

#define ABS(x) ((x)<0?-(x):(x))

static inline B swap(B b, int p1, int p2){
  int d1 = get(b, p1);
  int d2 = get(b, p2);
  set(b, p1, d2);
  set(b, p2, d1);
  return b;
}

#define swap2(b,x1,y1,x2,y2) swap(b, (x1)+(y1)*4, (x2)+(y2)*4)


B q[8*7*6*5*4*3*2*1 + 10];
int flag[1<<24];

int main(){
  int tmp;
  B ans = 0; REP(i,8) set(ans,i,i);

  int head = 0;
  int tail = 0;
  q[tail++] = ans;
  flag[ans] = 1;

  while(head != tail){
    B bb = q[head++];
    int nn = flag[bb];

    REP(y,2) REP(x,4){
      if(get2(bb,x,y) == 0){
        if(y == 0){
          B bbb = swap2(bb,x,y,x,y+1);
          if(!flag[bbb]){
            flag[bbb] = nn + 1;
            q[tail++] = bbb;
          }
        }else{
          B bbb = swap2(bb,x,y,x,y-1);
          if(!flag[bbb]){
            flag[bbb] = nn + 1;
            q[tail++] = bbb;
          }
        }
        if(x != 0){
          B bbb = swap2(bb,x,y,x-1,y);
          if(!flag[bbb]){
            flag[bbb] = nn + 1;
            q[tail++] = bbb;
          }
        }
        if(x != 3){
          B bbb = swap2(bb,x,y,x+1,y);
          if(!flag[bbb]){
            flag[bbb] = nn + 1;
            q[tail++] = bbb;
          }
        }
      }
    }
  }
  while(~scanf("%d",&tmp)){
    B b = 0;
    set(b,0,tmp);
    REP(i,7){
      scanf("%d",&tmp);
      set(b,i+1,tmp);
    }
    printf("%d\n",flag[b]-1);
  }
  return 0;
}