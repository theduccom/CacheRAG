#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
#include<cmath>
#include<complex>
using namespace std;

typedef complex<double> P;

#define X real()
#define Y imag()


int main(){
    int mod=1000000007;
    int ax, ay;
    char f[12][12];
    int c[5];
    while (scanf("%d,%d,%d,%d,%d",&c[0],&c[1],&c[2],&c[3],&c[4])!=EOF) {
        vector<int> card(5);
        for (int i=0;i<5;++i) {
            card[i]=c[i];
        }
        sort(card.begin(),card.end());
        if ((card[1]==card[2] && card[2]==card[3]) && (card[0]==card[1] || card[4]==card[3])) printf("four card\n");
        else if ((card[0]==card[1] && card[3]==card[4]) && (card[2]==card[1] || card[2]==card[3])) printf("full house\n");
        else if (card[0]==card[1]-1 && card[1]==card[2]-1 && card[2]==card[3]-1 && card[3]==card[4]-1) printf("straight\n");
        else if (card[0]==1 && card[1]==10 && card[2]==11 && card[3]==12 && card[4]==13) printf("straight\n");
        else if ((card[0]==card[1] && card[1]==card[2]) || (card[1]==card[2] && card[2]==card[3]) || (card[2]==card[3] && card[3]==card[4])) printf("three card\n");
        else if ((card[0]==card[1] && (card[2]==card[3] || card[3]==card[4])) || (card[1]==card[2] && card[3]==card[4])) printf("two pair\n");
        else if (card[0]==card[1] || card[1]==card[2] || card[2]==card[3] || card[3]==card[4]) printf("one pair\n");
        else printf("null\n");
    }
    return 0;
}