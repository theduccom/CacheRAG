#include<iostream>
#include<queue>

using namespace std;

int main(){

	int n, m;
	int a[1000], b[1000], c[1000], d[1000];
	int x1, x2, y1, y2;
	int ed[21];
	char gav;
	queue<int> q;

	cin >> n;
	cin >> m;

	for (int i = 0; i < m; i++){
		cin >> a[i] >> gav >> b[i] >> gav >> c[i] >> gav >> d[i];
	}

	cin >> x1 >> gav >> x2 >> gav >> y1 >> gav >> y2;

	for (int i = 0; i < 21; i++){
		ed[i] = -1;
	}

	ed[x1] = y1;
	q.push(x1);
	while (!q.empty()){
		int no = q.front();
		q.pop();
		for (int i = 0; i < m; i++){
			if (a[i] == no){
				if (ed[b[i]] < ed[a[i]] - c[i]){
					ed[b[i]] = ed[a[i]] - c[i];
					q.push(b[i]);
				}
			}
			if (b[i] == no){
				if (ed[a[i]] < ed[b[i]] - d[i]){
					ed[a[i]] = ed[b[i]] - d[i];
					q.push(a[i]);
				}
			}
		}

	}

	ed[x2] -= y2;

	for (int i = 0; i < 21; i++){
		if (i != x2) ed[i] = -1;
	}

	q.push(x2);
	while (!q.empty()){
		int no = q.front();
		q.pop();
		for (int i = 0; i < m; i++){
			if (a[i] == no){
				if (ed[b[i]] < ed[a[i]] - c[i]){
					ed[b[i]] = ed[a[i]] - c[i];
					q.push(b[i]);
				}
			}
			if (b[i] == no){
				if (ed[a[i]] < ed[b[i]] - d[i]){
					ed[a[i]] = ed[b[i]] - d[i];
					q.push(a[i]);
				}
			}
		}

	}

	cout << ed[x1] << endl;

	return 0;
}