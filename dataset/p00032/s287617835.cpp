#include <stdio.h>

/* http://rose.u-aizu.ac.jp/onlinejudge/ProblemSet/description.jsp?id=0032&lang=jp */

int main(void)
{
	int alpha=0;
	int beta=0; /*Óa,Ób,Îpüc*/
	int charley=0;
	int rect = 0;/*·û`Ì*/
	int rhom = 0;/*Ðµ`Ì*/


	while(1){
	if(scanf("%d",&alpha) == EOF)  /* EOFðüÍ·éÉÍACtrl+Z */
		break;
	scanf(",%d",&beta);
	scanf(",%d",&charley);

	if( charley*charley == alpha*alpha + beta*beta )
		rect++;

	if( alpha == beta )
		rhom++;

	}


	printf("%d\n",rect);
	printf("%d\n",rhom);

	return 0;
}