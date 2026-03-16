#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a[20] = {0};
	while(scanf("%d",&a[0]) != EOF){
        int sum = a[0];
        for(int i = 1; i < 10; i++){
            scanf(",%d",&a[i]);
            sum += a[i];
        }
        int v1,v2;
        scanf(",%d,%d",&v1,&v2);
        double ans;
        ans = (double)(v1*sum)/(v1+v2);
        int x;
        sum = 0;
        for(int i = 0; i < 10; i++){
            sum += a[i];
            if(sum > ans){
                x = i + 1;
                break;
            }
            else if(sum == ans){
                x = i + 1;
                break;
            }

        }
        cout << x << endl;
	}
	return 0;
}