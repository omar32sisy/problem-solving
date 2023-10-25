#include <stdio.h>
 
int main() {
    int N,num,a[200],b[200];
    int i,sum,ave,ans;
    num=0;
    while (scanf("%d",&N)!=EOF&&N!=0) {
        num++;
       // ans[num]=0;
        sum=ans=0;
        for (i=0; i<N; i++) {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        ave=sum/N;
        for (i=0; i<N; i++) {
            b[i]=a[i]-ave;
            if (b[i]>0)
                ans+=b[i];
        }
        printf("Set #%d\n",num);
        printf("The minimum number of moves is %d.\n",ans);
        printf("\n");
    }
    return 0;
}