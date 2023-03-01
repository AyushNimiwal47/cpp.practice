#include<stdio.h>
int isPrime(int a,int b){
	for(int j=a;j<=b;j++){
		int c=1;
		for(int i=2;i<=j/2;i++){
			if(j%i==0){
				c=0;
				break;
			}
		}
		if(c==1){
			printf("%d\n",j);
		}
	}
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int ans=isPrime(a,b);
//	if(ans==1){
//		printf("Yes");
//	}
//	else{
//		printf("No");
//	}
}
