#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int s1 , s2 , diag;
	char c;
	int rect , rhom;
	rect=rhom=0;
	while(cin>>s1>>c>>s2>>c>>diag){
		if((s1*s1)+(s2*s2)==diag*diag && s1==s2){
			rect++; rhom++;
		} else if((s1*s1)+(s2*s2)==diag*diag) {
			rect++;
		} else if(s1==s2){
			rhom++;
		}
	}
	cout << rect << endl << rhom << endl;
	return 0; 
}