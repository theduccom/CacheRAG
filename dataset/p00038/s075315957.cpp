#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
#include<algorithm>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int n[5];
    string ans;
    while(scanf("%d%*c%d%*c%d%*c%d%*c%d", &n[0],&n[1],&n[2],&n[3],&n[4]) != EOF){
        rep(i,4){
            for(int j = 4; j > i; j--){
                if(n[j] < n[j - 1]){
                    int num = n[j];
                    n[j] = n[j - 1];
                    n[j - 1] = num;
                }
            }
        }
        ans = "null";
        rep(i,4){
            if(n[i] == n[i + 1]){
                ans = "one pair";
                rep(j,4){
                    if(n[j] == n[j + 1] && n[j] != n[i]){
                        ans = "two pair";
                        break;
                    }
                }
            }
        }
        rep(i,3){
            if(n[i] == n[i + 1] && n[i] == n[i + 2]){
                ans = "three card";
                rep(j,4){
                    if(n[j] == n[j + 1] && n[j] != n[i] && n[j] != n[i + 1]){
                        ans = "full house";
                        break;
                    }
                }
            }
        }
        rep(i,2){
            if(n[i] == n[i + 1] && n[i] == n[i + 2] && n[i] == n[i + 3]){
                ans = "four card";
                break;
            }
        }
        bool c = true;
        int f = n[0];
        rep(i,5){
            if(n[i] != f + i){
                c = false;
                break;
            }
        }
        if(c) ans = "straight";
        if(n[0] == 1 && n[1] == 10 && n[2] == 11 && n[3] == 12 && n[4] == 13) ans = "straight";
        cout << ans << endl;
    }
}