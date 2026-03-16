//0042 A Thief
//vñFibvTbNâè
//Ql http://algorithms.blog55.fc2.com/blog-category-6.html

#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main(void)
{

	const int MAX_WEIGHT = 1000 + 1;
	const int MAX_OBJECT = 1000 + 1;
	const int MAX_SCORE = 10000;

	int caseNum = 1;
	while(1)
	{
		int totalWeight, totalN;
		int i, j;
		static int c[MAX_OBJECT][MAX_WEIGHT];	//X^bNÉæçÈ¢ÌÅÃIÌæÉu­
		for(i = 0; i < MAX_OBJECT; i++)
			for(j = 0; j < MAX_WEIGHT; j++)
				c[i][j] = 0;
		char dummy;

		cin >> totalWeight;
		if(totalWeight == 0)
			break;
		cin >> totalN;

		int score, w;
		for(i = 0; i < totalN; i++)
		{
			cin >> score >> dummy >> w;

			//eÊjÌibvTbNÉüé©AüéÈçAüêéÆ«üêÈ¢Æ«ÇÁ¿ª¢©
			for(j = 0; j <= totalWeight; j++)
			{
				//ibvTbNÉüèÜ·@©ÂAüê½Æ«ÍüêÈ¢Æ«æè¾µÜ·
				if(w<=j && c[i][j-w]+score > c[i][j])
				{
					c[i+1][j] = c[i][j-w] + score;
				}
				//»ÌiÍgíÈ¢
				else
				{
					c[i+1][j] = c[i][j];
				}
			}
		}

		cout << "Case " << caseNum << ":" << endl;
		caseNum++;


		w = totalWeight;
		//¯¶¿lÅæèy¢àÌª é©²×é
		while(1)
		{
			if(c[totalN][totalWeight] == c[totalN][w-1])
				w--;
			else
				break;
		}
		cout << c[totalN][totalWeight] << endl << w << endl;
	}
	return 0;
}