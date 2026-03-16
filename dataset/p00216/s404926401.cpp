// 2010/12/22 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int w;
		cin >> w;
		if(w==-1)
			break;

		int ryokin;
		if(w<=10)
			ryokin = 1150;
		else if(w<=20)
			ryokin = 1150+(w-10)*125;
		else if(w<=30)
			ryokin = 1150+10*125+(w-20)*140;
		else
			ryokin = 1150+10*125+10*140+(w-30)*160;

		cout << 4280-ryokin << endl;
	}

	return 0;
}