#include<iostream>
#include<vector>
using namespace std;

struct Node{
  int num;

  vector<int> edge_to;
  vector<int> edge_cost;
  vector<int> edge_time;

  bool done;
  int cost;
  int time;
};

int main(){
  for(;;){
    int n,m,a,b,c,t,p,q,r;
    cin>>n>>m;
    if(n==0&&m==0)break;
    vector<Node> node;

    Node no;

    for(int i=1;i<=m;i++){
      no.num=i;
      no.done=false;
      no.cost=-1;
      no.time=-1;
      node.push_back(no);
    }


    while(n--){
      cin>>a>>b>>c>>t;
      node[a-1].edge_to.push_back(b);
      node[b-1].edge_to.push_back(a);
      node[a-1].edge_cost.push_back(c);
      node[b-1].edge_cost.push_back(c);
      node[a-1].edge_time.push_back(t);
      node[b-1].edge_time.push_back(t);
    }

    cin>>n;
    while(n--){
      cin>>p>>q>>r;

      vector<Node> n(node.size());
      copy(node.begin(),node.end(),n.begin());
      p--;
      q--;

      if(r){

	n[p].time = 0;
	while(1){

	  int d=-1;

	  for(int i=0;i<n.size();++i){
	    if( n[i].done || n[i].time < 0) {
	      continue;
	    } else if(d == -1 || n[i].time < n[d].time) {
	      d=i;
	    }
	  }

	  if ( d == -1 )
	    break;

	  n[d].done = true;

	  for(int i=0;i<n[d].edge_to.size();++i) {
	    int ttime = n[d].time + n[d].edge_time[i];
	    if(n[n[d].edge_to[i]-1].time < 0 || ttime < n[n[d].edge_to[i]-1].time){
	      n[n[d].edge_to[i]-1].time = ttime;
	    }
	  }

	}
	cout<<n[q].time<<endl;

      }else{

	n[p].cost = 0;
	while(1){

	  int d=-1;

	  for(int i=0;i<n.size();++i){
	    if( n[i].done || n[i].cost < 0) {
	      continue;
	    } else if(d == -1 || n[i].cost < n[d].cost ) {
	      d=i;
	    }
	  }

	  if ( d == -1 )
	    break;

	  n[d].done = true;

	  for(int i=0;i<n[d].edge_to.size();++i) {
	    int tcost= n[d].cost + n[d].edge_cost[i];
	    if(n[n[d].edge_to[i]-1].cost < 0 || tcost < n[n[d].edge_to[i]-1].cost){
	      n[n[d].edge_to[i]-1].cost = tcost;
	    }
	  }

	}
	cout<<n[q].cost<<endl;

      }

    }
  }
}