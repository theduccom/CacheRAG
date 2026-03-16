#include <iostream>
using namespace std;

int main()
{
	int n,count,point,out;
	string s;
	cin >> n;
	while(n--){
		point = count = out = 0;
		while(out < 3){
			cin >> s;
			if(s=="OUT"){
				out++;
			}else if(s=="HIT"){
				count++;
				if(count>3){
					point++;
					count--;
				}
			}else{
				point += count + 1;
				count = 0;
			}
		}
		cout << point << endl;
	}
}