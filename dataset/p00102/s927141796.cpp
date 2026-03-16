#include <stdio.h>
int main() {int N,i,j,Map[105][105];while (1) {scanf("%d",&N);if (!N) return 0;for (i=0;i<=N;i++) Map[i][N]=Map[N][i]=0;
    for (i=0;i<N;Map[N][N]+=Map[i++][N]) for (j=0;j<N;j++) {scanf("%d",&Map[i][j]);Map[i][N]+=Map[i][j];Map[N][j]+=Map[i][j];}for (i=0;i<=N;i++,puts("")) for (j=0;j<=N;j++) printf("%5d",Map[i][j]);}}