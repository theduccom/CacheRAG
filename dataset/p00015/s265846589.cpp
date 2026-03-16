//0015 National Budget
//80ÜÅÌ2ÂÌ®Ì«µZÊðoÍ¹æ
//1sÚÉf[^Zbgnª^¦çêé
//^¦çê½â»Ìaª80ð´¦½êAoverflowÆoÍµÄ­¾³¢

#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;


int main(void)
{
	int n;
	cin >> n;
	while(n--)
	{
		const int N = 80;
		int i;
		string a, b;
		//0ú»@æ­í©çÈ¢ÌÅKÉå«­
		char c[N+10] = "";

		cin >> a >> b;

		//vZµâ·¢æ¤É½]
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());

		int aSize, bSize;
		aSize = a.size();
		bSize = b.size();

		//Ü¸ÍAcÉ»ÌÜÜlðüêÄ¢­
		for(int i = 0; i < min( max(aSize, bSize), N+1); i++)
		{
			int s = 0;
			if(i < aSize)
				s += a[i] - '0';
			if(i < bSize)
				s += b[i] - '0';

			c[i] += s;
			c[i+1] += c[i]/10;
			c[i] %= 10;
		}

		//ã©ç©Ä¢ÁÄA0ÈOÌ¶ª»ê½ç¶»·é
		bool isAnswer = false;
		for(i = sizeof(c)-1; i >= 0; i--)
		{
			if(c[i])
				isAnswer = true;
			if(isAnswer)
				c[i] += '0';
		}
		//½]µÄ®¬
		reverse(c, c+strlen(c));

		//àµà80¶ÚªNULL¶Å êÎI[o[t[
		if(c[N])
			cout << "overflow" << endl;
		//dlãA¦ª0ÈçNULL¶ÅÜéÌÅËÁÞ
		else if(c[0] == '\0')
			cout << '0' << endl;
		else
			cout << c << endl;
	}
	return 0;
}