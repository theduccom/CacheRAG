#include <iostream>
#include <string>
using namespace std;
bool isAlpha(char c){
	return ('a' <= c && c <= 'z');
}
char getShift(char c, int v){
	if (0 == v) return c;
	return char('a' + int(c + v + 26 - 'a') % 26);
}
int getShiftIndex(string& line){
	int s = line.size();
	string::size_type ps = 0, pe = 0;
	while (true){
		while (ps < s && !isAlpha(line[ps])) ++ps;
		pe = ps;
		while (pe < s && isAlpha(line[pe])) ++pe;
		if (ps >= s || pe >= s)
			break;
		int len = pe - ps;
		if (3 == len){
			if(	   line[ps] == getShift(line[ps + 1], 12)
				&& line[ps] == getShift(line[ps + 2], 15))
				return int('t' - char(line[ps]));
		}
		else if (4 == len){
			if(	   line[ps] == getShift(line[ps + 1], 12)
				&& line[ps] == getShift(line[ps + 2], 11)
				&& line[ps] == getShift(line[ps + 3], 1))
				return int('t' - char(line[ps]));
			if (   line[ps] == getShift(line[ps + 1], 12)
				&& line[ps] == getShift(line[ps + 2], 19)
				&& line[ps] == getShift(line[ps + 3], 0))
				return int('t' - char(line[ps]));
		}
		ps = pe;
	}
	return -1;
}

int main()
{
	string line;
	while (std::getline(cin, line)){
		int s = line.size();
		int v = getShiftIndex(line);
		for (int i = 0; i < s; ++i){
			char c = line[i];
			if (isAlpha(c)) cout << getShift(c, v);
			else cout << c;
		}
		cout << "\n";
	}
	return 0;
}