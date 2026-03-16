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

	bool is_over(string q)		// ????????????
	{
		return p==q;
	}

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
	map<string, int> memo2;

	while(true){
		string c;
		cin >> c;

		if(cin.eof())
			break;

		string q = c;

		for(int i=1; i<8; i++){
			cin >> c;

			q += c;
		}

		if(memo2.find(q)!=memo2.end()){
			cout << memo2[q] << endl;
			continue;
		}

		queue<SP> que;			// ?????\???
		map<string, bool> memo;		// ?????¢

		SP now;
		now.p = "01234567";
		now.n = 0;
		que.push(now);
		memo[now.p] = true;

		while(!que.empty()){		// ?????\???????????????????????§
			now = que.front();
			que.pop();
			if(memo2.find(now.p)==memo2.end()){
				memo2[now.p] = now.n;
			}

			if(now.is_over(q)){
				cout << now.n << endl;
				break;
			}

			SP nex1 = now;  nex1.swp1();  nex1.n++;
			if(memo.find(nex1.p)==memo.end()){
				que.push(nex1);
				memo[nex1.p] = true;
			}

			SP nex2 = now;  nex2.swp2();  nex2.n++;
			if(memo.find(nex2.p)==memo.end()){
				que.push(nex2);
				memo[nex2.p] = true;
			}

			SP nex3 = now;  nex3.swp3();  nex3.n++;
			if(memo.find(nex3.p)==memo.end()){
				que.push(nex3);
				memo[nex3.p] = true;
			}

			SP nex4 = now;  nex4.swp4();  nex4.n++;
			if(memo.find(nex4.p)==memo.end()){
				que.push(nex4);
				memo[nex4.p] = true;
			}
		}
	}

	return 0;
}