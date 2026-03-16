#include <cstdio>
#include <map>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
	int rcv; char type[3]; map<string, int> nums;
	string blood_name[4] = {"A", "B", "AB", "O"};
	for (int i=0;i<4;i++) nums.insert(make_pair(blood_name[i],0));
	while (EOF != fscanf(stdin, "%d,%s", &rcv, type)) {
		nums[type]++;
	}
	for (int i=0;i<4;i++) printf("%d\n",nums[blood_name[i]]);
	return 0;
}