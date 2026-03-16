#include <bits/stdc++.h>
using namespace std;

int calc(char *s, char *end)
{
	/*for (char *p = s; p != end; p++) printf("%c", *p);
	puts("");*/
	
	bool f = false;
	
	vector<int> st;
	vector<char> op;
	
	char *p = s;
	while (p != end){
		if (!f) if (*p == '('){
			char *e = p + 1;
			int cnt = 1;
			while (true){
				if (*e == '(') cnt++;
				if (*e == ')') cnt--;
				if (cnt == 0) break;
				e++;
			}
			st.push_back(calc(p + 1, e));
			p = e;
		}
		if (f) if (*p == '+' || *p == '-' || *p == '*' || *p == '/'){
			op.push_back(*p);
			p++;
			f ^= 1;
			continue;
		}
		if (!f) if (*p >= '0' && *p <= '9'){
			int n = atoi(p);
			st.push_back(n);
			stringstream ss;
			ss << n;
			p += ss.str().size() - 1;
		}
		if (!f) if (*p == '-'){
			int n = atoi(p);
			st.push_back(n);
			stringstream ss;
			ss << n;
			p += ss.str().size() - 1;
			//printf("%s\n", ss.str().c_str());
		}
		if (op.size() && (op.back() == '*' || op.back() == '/')){
			int b = st.back(); st.pop_back();
			int a = st.back(); st.pop_back();
			if (op.back() == '*') a *= b;
			if (op.back() == '/') a /= b;
			st.push_back(a);
			op.pop_back();
		}
		p++;
		f = !f;
		/*printf("__");
		for (auto a : st) printf("%d ", a);
		puts("");*/
	}
	
	while (op.size()){
		int t = st.front(); st.erase(st.begin());
		/*if (st.size() == 0){
			if (op.front() == '-') st.push_back(-t);
			else st.push_back(t);
			op.erase(op.begin());
			break;
		}*/
		if (op.front() == '+') st[0] = t + st[0];
		if (op.front() == '-') st[0] = t - st[0];
		op.erase(op.begin());
	}
	
	return st[0];
}

int main()
{
	int n;
	char str[1024];
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%s", str);
		str[strlen(str) - 1] = '\0';
		printf("%d\n", calc(str, str + strlen(str)));
	}
	
	return 0;
}