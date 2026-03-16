#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	int N,i,r,R,o;
	string ivent;
	cin >> N;
	i=0;
	r=0;
	R=0;
	o=0;
	
	while(1) {
		cin >> ivent;
		if(ivent=="HIT"){
			r++;
			if(r==4) {
				r--;
				R++;
			}
		}
	
		else if(ivent=="HOMERUN"){
			R+=r+1;
			r=0;
		}
	
		else if(ivent=="OUT"){
			o++;
			if(o==3){
				r=0;
				o=0;
				i++;
				cout << R << endl;
				R=0;
				if(i==N) return 0;
			}
		}
	}
}