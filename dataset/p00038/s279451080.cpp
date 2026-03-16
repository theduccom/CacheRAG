#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> r;
	int n[5];
	while (scanf("%d,%d,%d,%d,%d",&n[0],&n[1],&n[2],&n[3],&n[4]) != EOF)
	{
		int two=0,three=0,four=0,straight=0;
		int hand[13]={0};
		for (int i=0; i<5; i++)
			hand[n[i]-1]++;
		for (int i=0; i<13; i++)
		{
			switch(hand[i])
			{
			case 4:
				four++;
				break;
			case 3:
				three++;
				break;
			case 2:
				two++;
				break;
			default:
				break;
			}
		}
		int count=0;
		for (int i=0; i<14; i++)
		{
			if (count>0)
			{
				if (hand[i%13] == 1)
				{
					count++;
				} else {
					count=0;
				}
				if (count == 5)
				{
					straight=1;
					break;
				}
			} else {
				if (hand[i%13] == 1)
				{
					count=1;
				} else if(hand[i%13]!=0) {
					break;
				}
			}
		}
		string handname;
		if (four == 1) {
			handname = "four card";
		} else if (three == 1 && two == 1) {
			handname = "full house";
		} else if (straight == 1) {
			handname = "straight";
		} else if (three == 1) {
			handname = "three card";
		} else if (two == 2) {
			handname = "two pair";
		} else if (two == 1) {
			handname = "one pair";
		} else {
			handname = "null";
		}
		r.push_back(handname);
	}
	for (int i=0; i<r.size(); i++)
	{
		cout << r[i] << endl;
	}
	return 0;
}