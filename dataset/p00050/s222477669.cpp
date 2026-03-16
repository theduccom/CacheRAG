#include <iostream>
#include <string>
using namespace std;
const string apple = "apple";
const string peach = "peach";
int main (int argc, char *argv[]) {
	string line;
	getline(cin,line);
	for(int i = 0; i < line.size(); ++i) {
		bool flag = true;
		if (line[i] == 'a') {
			if (line.size() < i + apple.size()) continue;
			for(int j = 0; j < apple.size(); ++j) {
				if (apple[j] != line[i+j]) {
					flag = false; break;
				}
			}
			
			if (flag) {
				for (int j=0;j<peach.size();j++) line[i+j] = peach[j];
			}
			
		} else if (line[i] == 'p') {
			if (line.size() < i + peach.size()) continue;
			for(int j = 0; j < peach.size(); ++j) {
				if (peach[j] != line[i+j]) {
					flag = false; break;
				}
			}
			
			if (flag) {
				for (int j=0;j<apple.size();j++) line[i+j] = apple[j];
			}
		}
	}
	cout << line << endl;
	return 0;
}