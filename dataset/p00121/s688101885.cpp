#include<iostream>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<string.h>

using namespace std;

struct st{
    int p[8];
    int t;
};

bool used[8][8][8][8][8][8][8];

inline bool judge(int ar[8]){

    for(int i=0;i<8;i++){
	if (ar[i] != i) return false;
    }
    return true;
}

inline int findzero(int *ar){
    for(int i=0;i<8;i++){
	if(ar[i] == 0) return i;
    }
    return 0;
}

int main(){

    int d[] = {-4,-1,1,4};
    vector< vector<int> > d1;
    for(int i=0;i<8;i++){
	d1.push_back(vector<int>());
	for(int j=0;j<4;j++){
	    if(i+d[j]>-1&&i+d[j]<8){
		if(i == 3 && j==2) continue;
		else if(i == 4 && j == 1) continue;
		d1[i].push_back(i+d[j]);
	    }
	}
    }
		
    queue<struct st > next;
    int zero,nextzero;
    bool endflag=false,flag;
    struct st ar;
    while(true){
	memset(used,0,sizeof(used));
	flag = false;
	if((cin >> ar.p[0])==0) break;
	for(int i=1;i<8;i++){
	    cin >> ar.p[i];
	}
       while(!next.empty()){
	   next.pop();
       }
	ar.t=0;
	next.push(ar);
       if(ar.p[0] == 0 && ar.p[1] == 1 && ar.p[2] == 2&&ar.p[3]==3&&ar.p[4] == 4&&ar.p[5]==5) {
	    flag = true; 
	    cout << '0' << endl;
	    continue;
	}
	while(!next.empty()){
	    ar = next.front();
	    used[ar.p[0]][ar.p[1]][ar.p[2]][ar.p[3]][ar.p[4]][ar.p[5]][ar.p[6]] = true;
	    zero = findzero(ar.p);
	    next.pop();
	    ar.t++;
	    for(int i=0;i<d1[zero].size();i++){
		   nextzero = d1[zero][i];
		   swap(ar.p[nextzero],ar.p[zero]);
		   if( ar.p[0] == 0 && ar.p[1] == 1 && ar.p[2] == 2&&ar.p[3]==3&&ar.p[4] == 4&&ar.p[5]==5&&ar.p[6]==6 ) {
		       flag = true;
		       cout << ar.t << endl;
		       while(!next.empty()){
			   next.pop();
		       }
		   }
		    if(!used[ar.p[0]][ar.p[1]][ar.p[2]][ar.p[3]][ar.p[4]][ar.p[5]][ar.p[6]]){
			next.push(ar);
		    }
		   swap(ar.p[nextzero],ar.p[zero]);
	    }
	    if(flag) break;
	}

	ar.t = 0;
    }
    return 0;
}