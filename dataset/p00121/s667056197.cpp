#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct tagPATTERN
{
	int hash;
	int set;
} PATTERN;

PATTERN *history;
int history_count;
int que_bottom;

void solve();
int make_hash(int* pattern);
void get_pattern(int* pattern,int hash);
void save_history(int* pattern,int set);

int main()
{
	int pattern[8],hash;
	solve();

	while(cin >> pattern[0] >> pattern[1] >> pattern[2] >> pattern[3] >> pattern[4] >> pattern[5] >> pattern[6] >> pattern[7])
	{
		hash = make_hash(pattern);
		for(int i=0;i<history_count;i++)
			if(hash == history[i].hash)
				printf("%d\n",history[i].set);
	}
	return 0;
	
}

void save_history(int* pattern,int set)
{
	int hash;
	hash = make_hash(pattern);
	for(int i=0;i<history_count;i++)
		if(history[i].hash == hash)
			return;
	history_count++;
	history = (PATTERN *)realloc(history,sizeof(PATTERN)*(history_count));
	history[history_count-1].hash = hash;
	history[history_count-1].set = set;
}

void solve()
{
	int zeropos,hash,set;
	int pattern[8] = {0,1,2,3,4,5,6,7};
	history_count = 0;
	save_history(pattern,0);
	que_bottom = 0;

	for(;;)
	{
		hash = history[que_bottom].hash;
		set = history[que_bottom].set;
		get_pattern(pattern,hash);
		for(int i=0;i<8;i++)
			if(pattern[i] == 0)
			{
				zeropos = i;
				break;
			}
		if(zeropos < 4)  //down
		{
			pattern[zeropos] = pattern[zeropos+4];
			pattern[zeropos+4] = 0;
			save_history(pattern,set+1);
			get_pattern(pattern,hash);
		}
		if(zeropos > 3)  // up
		{
			pattern[zeropos] = pattern[zeropos-4];
			pattern[zeropos-4] = 0;
			save_history(pattern,set+1);
			get_pattern(pattern,hash);
		}
		if((zeropos!=3)&&(zeropos!=7)) //right
		{
			pattern[zeropos] = pattern[zeropos+1];
			pattern[zeropos+1] = 0;
			save_history(pattern,set+1);
			get_pattern(pattern,hash);
		}
		if((zeropos!=0)&&(zeropos!=4)) // left
		{
			pattern[zeropos] = pattern[zeropos-1];
			pattern[zeropos-1] = 0;
			save_history(pattern,set+1);
			get_pattern(pattern,hash);
		}
		que_bottom++;
		if(history_count == que_bottom)
			break;
	}
}

int make_hash(int* pattern)
{
	int hash = 0;
	for(int i=0;i<8;i++)
		hash |= (pattern[7-i]) << (3*i);
	return hash;
}

void get_pattern(int* pattern,int hash)
{
	for(int i=0;i<8;i++)
	{
		pattern[7-i] = hash % 8;
		hash /= 8;
	}
}