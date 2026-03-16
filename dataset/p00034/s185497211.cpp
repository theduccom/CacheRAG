#include <iostream>
using namespace std;

int main(){
	int ans;
	double l[10], sum;
	double v1, v2, t;
	char k;

	while(1){
		sum=ans=0;
		for(int i=0; i<10; i++){
			cin>>l[i]>>k;
			sum+=l[i];
		}
		cin>>v1>>k>>v2;
		if(cin.eof())break;

		t=sum/(v1+v2);//ツ猟キツ人ツ算

		sum=0;

		while(t*v1>sum){//t*v1ツづ債つキツづェツ暗。ツつ、ツ仰猟猟」
			sum+=l[ans];
			ans++;
		}
		cout<<ans<<"\n";

	}
	
	return 0;
}