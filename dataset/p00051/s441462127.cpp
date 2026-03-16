#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int n;

/* signed main()
{
    int min = 0, max = 0;
    scanf( "%d\n", &n );
    for( int i = 0; i < n; i++ )
    {
        vector<int> a( 8, 0 );
        int num = 0;
        scanf( "%d\n", &num );
        for( int i = 0; i < 8; i++ )
        {
            a[i] = num % 10;
            num /= 10;
        }
        
        sort( begin(a), end(a) );
        ///min
        for( int i = 0; i < 8; i++ )
        {
            printf( "a[%d]:%d\n", i, a[i] ); 
        }
        printf( "\n" );
        for( int i = 0; i < 8; i++ )
        {
            min += a[i];
            min *= 10; 
        }
        printf( "\n" );
        ///max
        for(  int i = 7; i >= 0; i-- )
        {
            max += a[i];
            max *= 10;   
        }
        
        printf( "%d %d %d\n", max, min,( max - min ) / 10 );
    }
    return 0;
}
 */int main(){
	int n,checkTableMin[10],checkTableMax[10],max,min,tmp;
	char buf[9];


	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",buf);
		min = max = 0;
		for(int k=0; k < 10; k++){
			checkTableMin[k] = 0;
			checkTableMax[k] = 0;
		}
		for(int k=0; buf[k] != '\0';k++){
			checkTableMin[buf[k]-'0']++;
			checkTableMax[buf[k]-'0']++;
		}

		tmp = 10000000;
		for(int k=0; k < 10; k++){
			while(checkTableMin[k] > 0){
				min += tmp*k;
				checkTableMin[k]--;
				tmp /= 10;
			}
		}
		tmp = 10000000;
		for(int k = 9; k>= 0; k--){
			while(checkTableMax[k] > 0){
				max += tmp*k;
				checkTableMax[k]--;
				tmp /= 10;
			}
		}

		printf("%d\n",max-min);

	}

    return 0;
}

