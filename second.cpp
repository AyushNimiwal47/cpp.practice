#include<stdio.h>
#include<math.h>
//int main(){
//	int a,sum,count=0,r;
//	scanf("%d",&a);
//	int t=a;
//	while(a!=0){
//		sum+=a%10;
//		a/=10;
//		count+=1;
//	}
//	printf("Sum :%d \nNo of digits :%d\n",sum,count);
//	while(t!=0){
//		int d=t%10;
//		r+=pow(10,count-1)*d;
//		count-=1;
//		t/=10;
//	}
//	printf("Reverse of Number :%d",r);
//	
//	return 0;
//	
//}
//void binary(int a){
//	int bin[32],i=0;
//	while(a!=0){
//			bin[i]=a%2;
//			a/=2;
//			i++;}
//	for(int j=i-1;j>=0;j--)
//		printf("%d",bin[j]);
//}
//int main(){
//	int a,bin[32],i=0;
//	char ch;
//	scanf("%d",&a);
//	printf("Enter b for binary\nEnter o for octal\nEnter h for Hexadecimal : ");
//	fflush(stdin);
//	scanf("%c",&ch);
//	if(ch=='b'){
//	printf("drfhrsh");
//	while(a!=0){
//			bin[i]=a%2;
//			a/=2;
//			i++;
//			}
//	for(int j=i-1;j>=0;j--){
//		printf("%d",bin[j]);
//	}
//	}
//	switch(ch){
//		case 'b':
//			printf("dfhsfnh");
//			binary(a);
//			break;
//		case 'o':
//			while(a!=0){
//			bin[i]=a%8;
//			a/=8;
//			i++;}
//			for(int j=i-1;j>=0;j--)
//				printf("%d",bin[j]);
//			break;
//		case 'h':
//			while(a!=0){
//			bin[i]=a%16;
//			a/=16;
//			i++;}
//			for(int j=i-1;j>=0;j--)
//				printf("%d",bin[j]);
//			break;
//	}
			
//	binary(a);
//	return 0;
	
//}

int passwordchecker(){
	int a,b;
	printf("Enter Password : ");
	scanf("%d",&a);
	printf("\nEnter Confirm Password : ");
	scanf("%d",&b);
	if(a==b){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	printf("%d",passwordchecker());
	return 0;	
}
