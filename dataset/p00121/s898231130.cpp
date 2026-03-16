// 2017/11/20 Tazoe

#include <iostream>
#include <queue>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class SP{
public:
	string p;
	int n;		// ?????°

	int find0()		// 0?????¢???
	{
		for(int i=0; i<8; i++){
			if(p[i]=='0')
				return i;
		}

		return -1;
	}

	void swp1()		// ???????????????
	{
		int i0 = find0();

		if(4<=i0 && i0<=7){
			swap(p[i0], p[i0-4]);
		}
	}

	void swp2()		// ???????????????
	{
		int i0 = find0();

		if(0<=i0 && i0<=3){
			swap(p[i0], p[i0+4]);
		}
	}

	void swp3()		// ???????????????
	{
		int i0 = find0();

		if(i0!=0 && i0!=4){
			swap(p[i0], p[i0-1]);
		}
	}

	void swp4()		// ???????????????
	{
		int i0 = find0();

		if(i0!=3 && i0!=7){
			swap(p[i0], p[i0+1]);
		}
	}
};


int main()
{
	queue<SP> que;			// ?????\???
	map<string, int> memo;		// ?????¢

	SP now;
	now.p = "01234567";
	now.n = 0;
	que.push(now);
	memo[now.p] = now.n;

	while(!que.empty()){		// ?????\???????????????????????§
		now = que.front();
		que.pop();

		SP nex1 = now;  nex1.swp1();  nex1.n++;
		if(memo.find(nex1.p)==memo.end()){
			que.push(nex1);
			memo[nex1.p] = nex1.n;
		}

		SP nex2 = now;  nex2.swp2();  nex2.n++;
		if(memo.find(nex2.p)==memo.end()){
			que.push(nex2);
			memo[nex2.p] = nex2.n;
		}

		SP nex3 = now;  nex3.swp3();  nex3.n++;
		if(memo.find(nex3.p)==memo.end()){
			que.push(nex3);
			memo[nex3.p] = nex3.n;
		}

		SP nex4 = now;  nex4.swp4();  nex4.n++;
		if(memo.find(nex4.p)==memo.end()){
			que.push(nex4);
			memo[nex4.p] = nex4.n;
		}
	}


	while(true){
		string q;
		cin >> q;

		if(cin.eof())
			break;

		for(int i=1; i<8; i++){
			string c;
			cin >> c;

			q += c;
		}

		cout << memo[q] << endl;
	}

	return 0;
}