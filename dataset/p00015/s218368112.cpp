#include <iostream>
#include <string>
#include <cstdlib>
#define x 81
using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	for(int i=0;i<n;i++){
		string a,b;
		getline(cin,a);
		getline(cin,b);
		bool c = false;
		if(a.size()>=x) c = true;
		if(b.size()>=x) c = true;
		int p[x];
		int k = 0;
		for(int j=0;j<x;j++){
			p[j] = k;
			int s = a.size()-j-1;
			int t = b.size()-j-1;
			string f;
			string g;
			if(s>=0) f = a.substr(s,1);
			if(t>=0) g = b.substr(t,1);
			if(s>=0) p[j] += atoi(f.c_str());
			if(t>=0) p[j] += atoi(g.c_str());
			if(p[j]>=10){ p[j] -= 10; k = 1; }
			else k = 0;
			if(k*j==79) c = true;
		}
		if(c) cout << "overflow" << endl;
		else{
			int d = x-1;
			while(p[d]==0){ d--; }
			if(d<0) cout << 0 << endl;
			else{
				for(int j=d;j>=0;j--) cout << p[j];
				cout << endl;
			}
		}
	}
}