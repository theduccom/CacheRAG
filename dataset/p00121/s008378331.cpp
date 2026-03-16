#include <iostream>
#include <map>
#include <queue>
#include <sstream>
using namespace std;

typedef struct {
	int d[8];
	int count;
} data;
map <string,int> memo;
queue <data> bfs;

string tto_string(int n) {
stringstream ss;
ss << n;
string str = ss.str();  
return str;
}

int main() {
	data first;
	for (int i = 0;i < 8;i++) {
		first.d[i] = i;
	}
	first.count = 0;
	bfs.push(first);
	for (;;) {
		if (bfs.empty()) break;
		data front = bfs.front();
		bfs.pop();
		string str = tto_string(front.d[0])+tto_string(front.d[1])+tto_string(front.d[2])+tto_string(front.d[3])+tto_string(front.d[4])+tto_string(front.d[5])+tto_string(front.d[6])+tto_string(front.d[7]);
		if(memo.find(str) !=memo.end()){
			continue;
		}
		memo[str] = front.count;
		//Find Zero
			int zero;
			for (int i = 0;i < 8;i++) {
				if (front.d[i] == 0) {
					zero = i;
					break;
				}
			}
			
			//Move
			if (zero < 4) {
				//???????????\?????????
				int x;
				data array = front;
				array.count = front.count + 1;
				x = array.d[zero];
				array.d[zero] = array.d[zero+4];
				array.d[zero+4] = x;
				bfs.push(array);
				if (zero>0) {
					int y;
					data array2 = front;
					array2.count = front.count + 1;
					y = array2.d[zero];
					array2.d[zero] = array2.d[zero-1];
					array2.d[zero-1] = y;
					bfs.push(array2);
				}
				if(zero<3) {
					int z;
					data array3 = front;
					array3.count = front.count + 1;
					z = array3.d[zero];
					array3.d[zero] = array3.d[zero+1];
					array3.d[zero+1] = z;
					bfs.push(array3);
				}
			}
			else {
				//???????????\?????????
				int x;
				data array = front;
				array.count = front.count + 1;
				x = array.d[zero];
				array.d[zero] = array.d[zero-4];
				array.d[zero-4] = x;
				bfs.push(array);
				if (zero>4) {
					int y;
					data array2= front;
					array2.count = front.count + 1;
					y = array2.d[zero];
					array2.d[zero] = array2.d[zero-1];
					array2.d[zero-1] = y;
					bfs.push(array2);
				}
				if(zero<7) {
					int z;
					data array3 = front;
					array3.count = front.count + 1;
					z = array3.d[zero];
					array3.d[zero] = array3.d[zero+1];
					array3.d[zero+1] = z;
					bfs.push(array3);
				}
			}
	} 
	while(true) {
		int puz[8];
		if (cin >> puz[0]) {
			for (int i = 1;i < 8;i++) {
				cin >> puz[i];
			}
			string str = tto_string(puz[0])+tto_string(puz[1])+tto_string(puz[2])+tto_string(puz[3])+tto_string(puz[4])+tto_string(puz[5])+tto_string(puz[6])+tto_string(puz[7]);
			cout << memo[str] << endl;
		}
		else break;
	}
	return 0;
}