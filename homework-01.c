#include<stdio.h>
#define maxlenth 100
#define min -10000
int maxSum(int *a,int len){
	int sum=a[0];
	int temp=0;
	int i;
	for( i=0;i<len;i++){ 
		if(temp<0)
			temp=a[i];
			else 
				temp+=a[i];
		if(sum<temp)
			sum=temp;	
	}
	return sum;
}

void  main(){
	int a[maxlenth]={0};
	int Maxsum=0;
	int lenth=0;
	int i;
	while(1){
		printf("Please input the lenth:");
		scanf("%d",&lenth);
		printf("Please input the element:\n");
		for(i=0;i<lenth;i++){
			scanf("%d",&a[i]);
		}
		Maxsum=maxSum(a,lenth);
		printf("\nMaxSum is %d\n================================================================================\n",Maxsum);
	}
}
