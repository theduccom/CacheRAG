#include <iostream>
using namespace std;

int main()
{
	int last = 4280;
	int w;
	int mon=0;
	while(cin >> w){
		mon = 1150;
		if(w<0)
			break;
		for(int i=1;i<=w;i++){
			if(i<=10)
				mon=1150;
			else if(10<i && i<=20)
				mon+=125;
			else if(20<i && i<=30)
				mon+=140;
			else
				mon+=160;
		}
		cout << last-mon << endl;
	}
	return 0;
}