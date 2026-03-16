#include <string>
#include <iostream>
using namespace std;

int base[3] = { 0,0,0 };
int score = 0;
int out = 0;

int hit()
{
	score += base[2];
	base[2] = base[1];
	base[1] = base[0];
	base[0] = 1;
	return 0;
}

int homerun()
{
	for (int i = 0; i < 3; i++)
	{
		score += base[i];
		base[i] = 0;
	}
	score++;
	return 0;
}

int outf()
{
	out++;
	if (out > 2)
	{
		out = 0;
		cout << score << endl;;
		score = 0;
		base[0] = base[1] = base[2] = 0;
	}
	return 0;
}

int main()
{
	int n;
	cin >> n;
	string state;
	while (cin >> state)
	{
		if (state == "HIT")
			hit();
		else if (state == "HOMERUN")
			homerun();
		else if (state == "OUT")
			outf();
	}

	return 0;
}