#include<iostream>
#include<string>
#include<vector>
#include<stdio.h>
#include<stdlib.h>

int magicalTiles();

void listen_matrixSize(int &,int &);
void listen_matrix(std::vector<std::string> &,const int);
void calc_goalPosition(std::vector<std::string> &,int &,int &,const int,const int);
const int LOOPFLAG=999999;
bool is_loop(const int);

//--------------------------------main------------------------------------

int main()
{
	while(magicalTiles());
	
	return 0;
}

int magicalTiles()
{
	using namespace std;
	int height,width;
	listen_matrixSize(height,width);
	if(!height && !width)
	{
		return 0;
	}
	
	vector<string> matrix;
	listen_matrix(matrix,height);
	
	int goal_h,goal_w;
	if(calc_goalPosition(matrix,goal_h,goal_w,height,width),is_loop(goal_h))
	{
		cout<<"LOOP"<<endl;
	}
	else
	{
		cout<<goal_w<<" "<<goal_h<<endl;
	}
	
	return 1;
}

//-----------------------------------------------------------------------------

void listen_matrixSize(int &height,int &width)
{
	using namespace std;
	
	cin>>height>>width;
}

void listen_matrix(std::vector<std::string> &matrix,const int height)
{
	using namespace std;
	
	string tmp_tile;
	for(int loop_h=0;loop_h<height;loop_h++)
	{
		cin>>tmp_tile;
		matrix.push_back(tmp_tile);
	}
}

void calc_goalPosition(std::vector<std::string> &matrix,int &goal_h,int &goal_w,const int height,const int width)
{
	using namespace std;
	
	int reachedPosition[height][width];
	for(int init_h=0;init_h<height;init_h++)
	{
		for(int init_w=0;init_w<width;init_w++)
		{
			reachedPosition[init_h][init_w]=0;
		}
	}
	
	int current_h=0,current_w=0;
	for(;1;)
	{
		if(!reachedPosition[current_h][current_w])
		{
			reachedPosition[current_h][current_w]=1;
		}
		else
		{
			goal_h=LOOPFLAG;
			return;
		}
		switch(matrix[current_h].at(current_w))
		{
		case '^':
			current_h--;
			break;
		case 'v':
			current_h++;
			break;
		case '<':
			current_w--;
			break;
		case '>':
			current_w++;
			break;
		case '.':
			goal_h=current_h;
			goal_w=current_w;
			return;
		default:
			cout<<"unknown tile inputed"<<endl;
			abort();
		}
	}
}

bool is_loop(const int goal_h)
{
	if(goal_h==LOOPFLAG)
	{
		return true;
	}
	else
	{
		return false;
	}
}
	