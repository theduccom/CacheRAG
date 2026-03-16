#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
static const int INF=1<<24;
map<int,int> ma;
vector<vector<int> > puz;
vector<vector<int> > v;
vector<vector<int> > pp;

template<class T>
void initvv(vector<vector<T> > &v,int a,int b,const T &t=T()){
	v.assign(a,vector<T>(b,t));
}


int  foo(){
	int ret=0;
	rep(i,2){
		rep(j,4){
			ret*=10;
			ret+=v[i][j];
		}
	}
	return ret;
}

int  foo1(){
	int ret=0;
	rep(i,2){
		rep(j,4){
			ret*=10;
			ret+=pp[i][j];
		}
	}
	return ret;
}
void foo2(int t){
	rep(i,2){
		rep(j,4){
			pp[1-i][3-j]=t%10;
			t/=10;
		}
	}
}

int solve(int c,int d){
	cout<<c<<" "<<d<<endl;
	// cout<<c<<endl;
	// if(c==1){
		// rep(i,2){
			// rep(j,4){
				// cout<<v[i][j]<<" ";
			// }
			// cout<<endl;
		// }
		// cout<<endl;
	// }
	if(c>d) return d;
	bool f=true;
	rep(i,2){
		rep(j,4){
			if(v[i][j]!=puz[i][j]){
				f=false;
				// if(c==1)cout<<i<<" "<<j<<" "<<v[i][j]<<" "<<puz[i][j]<<endl;
			}
		}
	}

	if(f) return c;
	int  now=foo();
	// if(c==0) cout<<now<<endl;
	if(ma[now]) return ma[now];
	int t=d;
	rep(i,4){
		if(v[0][i]==0){
			if(i>=1){
				swap(v[0][i-1],v[0][i]);
				// if(c==0) cout<<"hoge\n";
				t=min(t,solve(c+1,t));
				// if(c==0) cout<<t<<endl;
				swap(v[0][i-1],v[0][i]);
			}
			if(i!=3){
				swap(v[0][i+1],v[0][i]);
				// cout<<"hoge";
				t=min(t,solve(c+1,t));
				// return 0;
				swap(v[0][i+1],v[0][i]);
			}
			swap(v[1][i],v[0][i]);
			t=min(t,solve(c+1,t));
			swap(v[1][i],v[0][i]);
		}
		if(v[1][i]==0){
			if(i>=1){
				swap(v[1][i-1],v[1][i]);
				t=min(t,solve(c+1,t));
				swap(v[1][i-1],v[1][i]);
			}
			if(i!=3){
				swap(v[1][i+1],v[1][i]);
				t=min(t,solve(c+1,t));
				swap(v[1][i+1],v[1][i]);
			}
			swap(v[1][i],v[0][i]);
			t=min(t,solve(c+1,t));
			swap(v[1][i],v[0][i]);
		}
	}
	// if(c==0) cout<<"aaa"<<endl;
	return ma[now]=t;
}


int main(){
	initvv(puz,2,4);
	rep(i,4){
		// cout<<i<<endl;
		puz[0][i]=i;
		puz[1][i]=i+4;
	}
	pp=puz;
	queue<int> q;
	q.push(foo1());
	int c=0;
	while(q.size()){
		int qs=q.size();
		// cout<<c<<endl;
		rep(i,qs){
			int top=q.front();
			q.pop();
			if(ma[top]){
			}
			else{
				ma[top]=c;
				if(c==0){
					ma[top]=111;
				}
				foo2(top);
				rep(i,2){
					rep(j,4){
						if(pp[i][j]==0){
							if(j!=0){
								swap(pp[i][j],pp[i][j-1]);
								q.push(foo1());
								swap(pp[i][j],pp[i][j-1]);
							}
							if(j!=3){
								swap(pp[i][j+1],pp[i][j]);
								q.push(foo1());
								swap(pp[i][j],pp[i][j+1]);
							}
							swap(pp[i][j],pp[1-i][j]);
							q.push(foo1());
							swap(pp[i][j],pp[1-i][j]);
						}
					}
				}
			}
		}
		c++;
	}
	ma[1234567]=0;
	// rep(i,2){
		// rep(j,4){
			// cout<<puz[i][j]<<endl;
		// }
	// }
	// vector<vector<int> > v;
	initvv(v,2,4);
	while(cin>>v[0][0]){
		rep(i,3){
			cin>>v[0][i+1];
		}
		rep(i,4) cin>>v[1][i];
		// ma.clear();
		// rep(i,2){
			// rep(j,4){
				// cout<<puz[i][j]<<" ";
			// }
			// cout<<endl;
		// }
		// cout<<"*************\n";
		cout<<ma[foo()]<<endl;
		// cout<<solve(0,40330)<<endl;
	}
}