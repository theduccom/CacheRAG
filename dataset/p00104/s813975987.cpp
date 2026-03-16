#include <iostream>
#include <algorithm>

using namespace std;

bool search(char a[101][101], bool vis[101][101], int s, int t)
{
	if(vis[s][t]){
		return true;
	}
	vis[s][t] = true;
	
	if(a[s][t] == '>'){
		return search(a, vis, s, t+1);
	}
	if(a[s][t] == '^'){
		return search(a, vis, s-1, t);
	}
	if(a[s][t] == '<'){
		return search(a, vis, s, t-1);
	}
	if(a[s][t] == 'v'){
		return search(a, vis, s+1, t);
	}
	
	cout << t << " " << s << endl;
	return false;
}

int main()
{
	int h, w;
	bool vis[101][101];
	char a[101][101];
	
	while(1){
		cin >> h >> w;
		if(h == 0 && w == 0){
			break;
		}
		fill(&vis[0][0], &vis[h][w], false);
		
		for(int i = 0; i < h; i++){
			cin >> a[i];
		}
		
		if(search(a, vis, 0, 0)){
			cout << "LOOP" << endl;
		}
	}
	
	return 0;
}