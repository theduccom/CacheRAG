// Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int w;
		cin >> w;

		if(w==-1)
			break;

		int bil;
		if(w<=10){
			bil = 1150;
		}
		else if(w<=20){
			bil = 1150+(w-10)*125;
		}
		else if(w<=30){
			bil = 1150+10*125+(w-20)*140;
		}
		else{
			bil = 1150+10*125+10*140+(w-30)*160;
		}

		cout << 4280-bil << '\n';
	}

	return 0;
}