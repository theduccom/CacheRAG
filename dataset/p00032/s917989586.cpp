#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int rectangle_num =0, rhombus_num=0;
	
	int side1, side2, diagonal;
	while( scanf("%d,%d,%d", &side1, &side2, &diagonal) != EOF ){
		if(side2 > side1) swap(side1, side2);
		
		// 長方形の判定
		if( side1*side1 + side2*side2 == diagonal*diagonal){
			rectangle_num++;
		}else if( side1==side2){
			rhombus_num++;
		}
		
	}
	cout<<rectangle_num<<endl<<rhombus_num<<endl;
	
	return 0;
}