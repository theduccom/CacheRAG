//0023 Circles Intersection
//2Ì~ÌSÆ¼aª^¦çê½Æ«A»Ì2ÂÌ~ªðíÁÄ¢é©Aàï³êÄ¢é©AðíçÈ¢©ð»è¹æ
//È¨AAÆBª®SÉ¯êÌ~Å é±ÆÍÈ¢

//³Ä³ÄA0,0,1,0,2,1Ý½¢ÉêdÈéªÉÂ¢ÄÍÈÉà¾y³êÄ¢È¢Ì¾ª


#include<iostream>
#include<cmath>
using namespace std;

double Square(double x){return x*x;}
double Distance(double x, double y)
{
	return sqrt(Square(x) + Square(y) );
}

int main(void)
{
	int n;
	cin >> n;
	while(n--)
	{
		double ax, bx, ay, by, ar, br;
		cin >> ax >> ay >> ar >> bx >> by >> br;

		//Ql@http://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q1251422802

		//à~ÌSðciA¼aðriAO~ÌSðcoA¼aðroÆ·éÆ
		//|ci-co|<=ro-ri@ÈçA®SÉàï·éEEEçµ¢
		double distance = Distance(ax-bx, ay-by);
		if(distance < br - ar)	//BªAðàï
			cout << -2 << endl;
		else if(distance < ar - br)	//AªBðàï
			cout << 2 << endl;
		//|ci-co| <= ar+br ËaÆbÍdÈé
		else if(distance <= ar+br)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}