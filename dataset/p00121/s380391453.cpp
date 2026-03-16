#include<iostream>
#include<queue>
#include<vector>
#include<map>
using namespace std;

vector<int> cards(8);
typedef pair<vector<int>,int> state;
map<vector<int>,int> memo;
queue<state> q;
int mv[4]={-1,1,-4,4};//左，右，上，下

int main()
{
	for(int i=0;i<8;i++) cards[i]=i;
	q.push(state(cards,0));
	memo.insert(map<vector<int>,int>::value_type(cards,0));
	while(!q.empty())
	{
		state now=q.front(); q.pop();
		cards=now.first;
		int zero;
		for(int i=0;i<8;i++)
		{
			if(cards[i]==0) 
			{
				zero=i;
				break;
			}
		}

		for(int i=0;i<4;i++)
		{
			if((zero==3&&i==1)||(zero==4&&i==0)) continue;
			int change=zero+mv[i];
			if(0<=change&&change<=7)
			{
				vector<int> tmp;
				tmp=cards;
				tmp[zero]=cards[change];
				tmp[change]=cards[zero];
				if(memo.find(tmp)==memo.end())
				{
					q.push(state(tmp,now.second+1));
					memo.insert(map<vector<int>,int>::value_type(tmp,now.second+1));
				}
			}
		}
	}

	while(cin>>cards[0]>>cards[1]>>cards[2]>>cards[3]>>cards[4]>>cards[5]>>cards[6]>>cards[7])
	{
		cout<<memo.find(cards)->second<<endl;
	}
	return 0;
}