#include<iostream>
#include<string>

using namespace std;

#define ROW 8
#define COLUMN 8

#define INSIDE_INDEX( x1 , y1 ) ( (x1 >= 0 && x1 < ROW) && (y1 >= 0 && y1 < COLUMN) )

void get_answer( string *matrix_str , char& ans );
bool get_ans( string *matrix_str , int x1 , int y1 , int x2 , int y2 , int x3 , int y3 , int x4 , int y4 );

int main(void)
{
	string matrix_str[ROW+3];
	char c;

	while(1)
	{
		char ans = '0';
		int flag = 0; // 二重ループ脱出用
		for( int i = 0 ; i < COLUMN ; i++ )
		{
			cin >> matrix_str[i];
			if( cin.eof() )
			{
				flag = 1;
				break;
			}
		}
		if( flag == 1 )
		{
			break;
		}
		get_answer( matrix_str , ans );
		cout << ans << endl;
	}

	return 0;
}

void get_answer( string *matrix_str , char& ans )
{
	for( int i = 0 ; i < ROW ; i++ )
	{
		for( int j = 0 ; j < COLUMN ; j++ )
		{
			if( get_ans( matrix_str ,  j ,  i ,  j+1 ,  i ,  j ,  i+1 ,  j+1 ,  i+1 ) )
			{
				ans = 'A';
			}

			if( get_ans( matrix_str , j , i , j , i+1 , j , i+2 , j , i+3 ) )
			{
				ans = 'B';
			}

			if( get_ans( matrix_str , j , i , j+1 , i , j+2 , i , j+3 , i ) )
			{
				ans = 'C';
			}

			if( get_ans( matrix_str , j , i , j-1 , i+1 , j , i+1 , j-1 , i+2 ) )
			{
				ans = 'D';
			}

			if( get_ans( matrix_str , j , i , j+1 , i ,  j+1 , i+1 , j+2 , i+1) )
			{
				ans = 'E';
			}

			if( get_ans( matrix_str , j , i , j , i+1 , j+1 , i+1 , j+1 , i+2) )
			{
				ans = 'F';
			}

			if( get_ans( matrix_str , j , i , j+1 , i , j-1 , i+1 , j , i+1 ) )
			{
				ans = 'G';
			}
		}
	}
}

bool get_ans( string *matrix_str , int x1 , int y1 , int x2 , int y2 , int x3 , int y3 , int x4 , int y4 )
{
	if( INSIDE_INDEX( x1 , y1 ) && INSIDE_INDEX( x2 , y2 ) && INSIDE_INDEX( x3 , y3 ) && INSIDE_INDEX( x4 , y4 ) )
	{
		if( matrix_str[y1].at(x1) == '1' &&
			matrix_str[y2].at(x2) == '1' &&
			matrix_str[y3].at(x3) == '1' &&
			matrix_str[y4].at(x4) == '1' )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}