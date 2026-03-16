#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define INF 11451400


/*
int main(){
	while(true){
		int lineL, statL;
		cin >> lineL >> statL;
		if(lineL==0&&statL==0){return 0;}

		long leastCosts[statL][statL];
		long leastTimes[statL][statL];
		FOR(aStat,0,statL){
			FOR(bStat,0,statL){
				leastCosts[aStat][bStat] = leastTimes[aStat][bStat] = (aStat==bStat)?0:INF;
			}
		}

		REP(lineI,lineL){
			int naStat,nbStat,nCost,nTime;
			cin >> naStat >> nbStat >> nCost >> nTime;
			naStat -=1; nbStat -=1;
			FOR(aStat,0,statL){
				FOR(bStat,0,statL){
					leastCosts[aStat][bStat] = min(leastCosts[aStat][bStat] , leastCosts[aStat][naStat]+nCost+leastCosts[nbStat][bStat]);
					leastCosts[aStat][bStat] = min(leastCosts[aStat][bStat] , leastCosts[aStat][nbStat]+nCost+leastCosts[naStat][bStat]);
					leastTimes[aStat][bStat] = min(leastTimes[aStat][bStat] , leastTimes[aStat][naStat]+nTime+leastTimes[nbStat][bStat]);
					leastTimes[aStat][bStat] = min(leastTimes[aStat][bStat] , leastTimes[aStat][nbStat]+nTime+leastTimes[naStat][bStat]);
				}
			}
		}

		int reqL;
		cin >> reqL;
		REP(reqI,reqL){
			int aStat,bStat,costOrTime;
			cin >> aStat >> bStat >> costOrTime;
			aStat-=1;bStat-=1;
			if(costOrTime==0){cout<<leastCosts[aStat][bStat]<<endl;};
			if(costOrTime==1){cout<<leastTimes[aStat][bStat]<<endl;};
		}
	}
}
*/

int main(){
	while(true){
		int lineL, statL;
		cin >> lineL >> statL;
		if(lineL==0&&statL==0){return 0;}

		long leastCosts[statL][statL];
		long leastTimes[statL][statL];
		FOR(aStat,0,statL){
			FOR(bStat,0,statL){
				leastCosts[aStat][bStat] = leastTimes[aStat][bStat] = (aStat==bStat)?0:INF;
			}
		}

		REP(lineI,lineL){
			int naStat,nbStat,nCost,nTime;
			cin >> naStat >> nbStat >> nCost >> nTime;
			naStat -=1; nbStat -=1;
			leastCosts[naStat][nbStat] = leastCosts[nbStat][naStat] = nCost;
			leastTimes[naStat][nbStat] = leastTimes[nbStat][naStat] = nTime;
		}

		REP(k,statL) REP(i,statL) REP(j,statL) {
			leastCosts[i][j] = min(leastCosts[i][j] , leastCosts[i][k]+leastCosts[k][j]);
			leastTimes[i][j] = min(leastTimes[i][j] , leastTimes[i][k]+leastTimes[k][j]);
		}

		int reqL;
		cin >> reqL;
		REP(reqI,reqL){
			int aStat,bStat,costOrTime;
			cin >> aStat >> bStat >> costOrTime;
			aStat-=1;bStat-=1;
			if(costOrTime==0){cout<<leastCosts[aStat][bStat]<<endl;};
			if(costOrTime==1){cout<<leastTimes[aStat][bStat]<<endl;};
		}
	}
}