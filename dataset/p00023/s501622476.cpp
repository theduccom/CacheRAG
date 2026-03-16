#include <iostream>
#include <iomanip>
#include <list>
#include <map>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

#define R(a,b) (a.r + b.r) * (a.r + b.r)
#define TP(a,b) (b.pos.x - a.pos.x) * (b.pos.x - a.pos.x) + (b.pos.y - a.pos.y) * (b.pos.y - a.pos.y)

using namespace std;

struct POINT{
	double x;
	double y;
};

struct CIRCLE{
	POINT pos;
	double r;
};

int main(){
	int n;
	cin >> n;

	CIRCLE a,b;
	while(n--){
		cin >> a.pos.x >> a.pos.y >> a.r >> b.pos.x >> b.pos.y >> b.r;

		if(R(a,b) >= TP(a,b)){
			POINT pa,pb,ma,mb;
			pa.x = a.pos.x + a.r;
			ma.x = a.pos.x - a.r;
			pa.y = a.pos.y + a.r;
			ma.y = a.pos.y - a.r;
			pb.x = b.pos.x + b.r;
			mb.x = b.pos.x - b.r;
			pb.y = b.pos.y + b.r;
			mb.y = b.pos.y - b.r;

			if(ma.x < mb.x && pa.x > pb.x){
				if(ma.y < mb.y && pa.y > pb.y) cout << "2" << endl;
			}
			else if(ma.x > mb.x && pa.x < pb.x){
				if(ma.y > mb.y && pa.y < pb.y) cout << "-2" << endl;
			}
			else{
				cout << "1" << endl;
			}
		}
		else if(R(a,b) < TP(a,b)){
			cout << "0" << endl;
		}
	}
	return 0;
}