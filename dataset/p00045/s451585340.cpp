#include <iostream>
using namespace std;

int sisya(double ave,int count)
{
	ave = ave / static_cast<double>(count);
	int a = static_cast<int>(ave*10);
	if(a%10 >= 5){
		ave++;
	}
	return static_cast<int>(ave);
}

int main()
{
	int y,m;
	int count = 0;
	int sum = 0;
	int ave = 0;
	char dot;
	while(cin >> y >> dot >> m){
		sum += y*m;
		ave += m;
		count++;
	}
	cout << sum << endl;
	cout << sisya(static_cast<double>(ave),count) << endl;
	return 0;
}