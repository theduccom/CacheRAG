#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
bool slove(int a, int b, int c){ 
		if(a==b) return true;
		if(c*c == a*a + b*b) return true;
	return false;
}
int main(){
	int a,b,c,con_h=0,con_t=0;
	vector<int> n;
	bool flag;
	while(scanf("%d,%d,%d",&a,&b,&c) != EOF){
		n.clear();
		n.push_back(a); n.push_back(b); n.push_back(c);
		vector<int>::iterator it = n.begin();
		flag = slove(*it,*(it+1),0); 
		if(flag == true)
			con_h++;
		else{
			flag = slove(*it,*(it+1),*(it+2)); 
			if(flag == true)
				con_t++;
		}
	}
	cout << con_t << endl << con_h << endl;
}