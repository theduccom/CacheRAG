#include<iostream>
#include<stack>
using namespace std;

class P
{
	public:
	int x,y;
	P(int X,int Y)
	{
		x=X;
		y=Y;
	}
};

int main()
{
	int set[2]={1,-1};
	char field[52][52]={""};

	while(cin>>field[1])
	{
		int flag[52][52]={0};
		stack<P> st;
		int ans=0;
		
		for(int i=2;i<=12;i++)
		{
			cin>>field[i];		
		}

		for(int i=1;i<=12;i++)
		{
			for(int j=0;j<12;j++)
			{
				if(field[i][j]!='1' || flag[i][j]==1)continue;
				st.push(P(j,i));
				flag[i][j]=1;
				ans++;

				while(!st.empty())
				{
					int x2=st.top().x;
					int y2=st.top().y;
					st.pop();

					for(int k=0;k<2;k++)
					{
						if(field[y2+set[k]][x2]!='1' ||flag[y2+set[k]][x2]==1)continue;
						flag[y2+set[k]][x2]=1;
						st.push(P(x2,y2+set[k]));
					}
					for(int k=0;k<2;k++)
					{
						if(field[y2][x2+set[k]]!='1' ||flag[y2][x2+set[k]]==1 || (x2+set[k]<0))continue;
						flag[y2][x2+set[k]]=1;
						st.push(P(x2+set[k],y2));
					}
				}
			}
		}
		cout<<ans<<endl;
		ans=0;
	}
	return 0;
}