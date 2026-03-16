#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <string>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,P> pip;
typedef long long ll;
const int inf=(1<<31)-1;
const double pi=acos(-1);

int a;
vi n(5);
char t;

int main(){
	while(cin>>a){
		vi vec,tmp;
		n[0]=a;
		vec.push_back(a);
		for(int i=1;i<5;i++){
			cin>>t>>n[i];
			bool used=1;
			for(int j=0;j<vec.size();j++){
				if(n[i]==vec[j]) used=0;
			}
			if(used) vec.push_back(n[i]);
			else tmp.push_back(n[i]);
		}
		if(vec.size()==4){
			cout<<"one pair"<<endl;;
			continue;
		}
		if(vec.size()==3){
			if(tmp[0]==tmp[1]) cout<<"three card"<<endl;
			else cout<<"two pair"<<endl;
			continue;
		}
		if(vec.size()==2){
			if(tmp[0]==tmp[1]&&tmp[1]==tmp[2]) cout<<"four card"<<endl;
			else cout<<"full house"<<endl;
			continue;
		}
		sort(n.begin(),n.end());
		int tmpn=0;
		for(int i=1;i<4;i++){
			if(n[i]+1==n[i+1]) tmpn++;
		}
		if((n[0]==1&&n[1]==10)||n[0]+1==n[1]) tmpn++;
		if(tmpn==4){
			cout<<"straight"<<endl;
			continue;
		}
		cout<<"null"<<endl;
	}
}