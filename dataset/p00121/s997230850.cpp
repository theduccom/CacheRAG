#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;



vector<bool> visited;


struct S{
	int panel;
	int zero;
	int step;
};

int main(){
	int f[8];
	int goal=1<<3|2<<6|3<<9|4<<12|5<<15|6<<18|7<<21;
	while(cin>>f[0]){
		visited.assign(1<<24,false);
		for(int i=1;i<8;i++)cin>>f[i];
		queue<S> q;
		S a,b;
		int ans=-1;
		a.panel=0;
		for(int i=0;i<8;i++){
			a.panel |= f[i]<<i*3;
			if(f[i]==0)a.zero=i;
		}
		if(a.panel==goal)ans=0;
		a.step=0;
		visited[a.panel].flip();
		q.push(a);
		while(ans==-1&&!q.empty()){
			a=q.front();
			q.pop();
			if(a.zero%4){
				b=a;
				b.step++;
				b.zero--;
				b.panel |= (a.panel>>b.zero*3&7) <<a.zero*3;
				b.panel &= ~(7<<b.zero*3);
				if(!visited[b.panel]){
					visited[b.panel].flip();
					q.push(b);
					if(b.panel==goal)ans=b.step;
				}
			}
			if(a.zero<4){
				b=a;
				b.step++;
				b.zero+=4;
				b.panel |= (a.panel>>b.zero*3&7) <<a.zero*3;
				b.panel &= ~(7<<b.zero*3);
				if(!visited[b.panel]){
					visited[b.panel].flip();
					q.push(b);
					if(b.panel==goal)ans=b.step;
				}
			}
			if(a.zero%4<3){
				b=a;
				b.step++;
				b.zero++;
				b.panel |= (a.panel>>b.zero*3&7) <<a.zero*3;
				b.panel &= ~(7<<b.zero*3);
				if(!visited[b.panel]){
					visited[b.panel].flip();
					q.push(b);
					if(b.panel==goal)ans=b.step;
				}
			}
			if(4<=a.zero){
				b=a;
				b.step++;
				b.zero-=4;
				b.panel |= (a.panel>>b.zero*3&7) <<a.zero*3;
				b.panel &= ~(7<<b.zero*3);
				if(!visited[b.panel]){
					visited[b.panel].flip();
					q.push(b);
					if(b.panel==goal)ans=b.step;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}