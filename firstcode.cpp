#include<stdio.h>
#include<math.h>
int main()
{
//	int n;
//	int r;
//	scanf("%d",&n);
//	int count=0;
//	if (n>=100){
//		r=n%100;
//		count+=n/100;
//		printf("No of notes of 100 rupee is %d\n",n/100);
//	}
//	n=r;
//	if (n>=50){
//		r=n%50;
//		count+=n/50;
//		printf("No of notes of 50 rupee is %d\n",n/50);
//	}
//	n=r;
//	if (n>=10){
//		r=n%10;
//		count+=n/10;
//		printf("No of notes of 10 rupee is %d\n",n/10);
//	}
//	n=r;
//	if (n>=5){
//		r=n%5;
//		count+=n/5;
//		printf("No of notes of 5 rupee is %d\n",n/5);
//	}
//	n=r;
//	if (n>=2){
//		r=n%2;
//		count+=n/2;
//		printf("No of notes of 2 rupee is %d\n",n/2);
//	}
//	n=r;
//	if (n>=1){
//		r=n%1;
//		count+=n/1;
//		printf("No of notes of 1 rupee is %d\n",n/1);
//	}
//	printf("Total No of notes %d\n",count);	


//	int qty,cost;
//	float dis;
//	scanf("%d %d",&qty,&cost);
//	if(qty>1000){
//		dis=cost*0.1;
//	}
//	dis=cost-dis;
//	printf("New cost is %f",dis);


//	char a[7]="ard df";
//	printf("%s",a);
//	char b[7];
//	scanf("%s",&b);
//	gets(b);
//	printf("%s",b);
//int n=4;;
//for(int i=1;i<=n;i++){
//	for(int j=1;j<=n-i;j++){
//		printf(" ");
//	}
//	for(int j=1;j<=2*i-1;j++){
//		printf("*");
//	}
//	printf("\n");
//}

//int n,p,s,d;
//scanf("%d %d %d %d",&n,&p,&s,&d);
//if(n%400==0){
//	printf("yes");
//}
//else if(n%100==0){
//	printf("No");
//}
//else if(n%4==0){
//	printf("Yes");
//}
//else{
//	printf("No");
//}
//if(n%400==0||n%100!=0&&n%4==0){
//	printf("yes");
//}
//else{
//	printf("No");
//}

//n%2==0?printf("even %d %d %d",p,s,d):printf("odd");


//int n=4;
//for(int i=1;i<=n;i++){
//	for (int j=1;j<=n-i;j++){
//		printf(" ");
//	}
//	for(int j=1;j<=2*i-1;j++){
//		printf("*");
//	}
//	printf("\n");
//}
//for(int i=n-1;i>=1;i--){
//	for (int j=1;j<=n-i;j++){
//		printf(" ");
//	}
//	for(int j=1;j<=2*i-1;j++){
//		printf("*");
//	}
//	printf("\n");
//}
//int a=54,b=43,c=32;
////a>b?(a>c?printf("greatest number is %d",a):printf("greatest number is %d",c)):(b>c?printf("greatest number is %d",b):printf("greatest number is %d",c));
//if(a>b){
//	printf("d");
//}
//else if(a>c){
//	printf("de");
//}

//int t=2345,s=0,n=t,r;
//while(t!=0){
//	t/=10;
//	s+=1;
//}
//while(n!=0){
//	s-=1;
//	r+=pow(10,s)*(n%10);
//	n/=10;
//	
//}
//printf("%d",r);
//int a,b;
//char c;
//printf("Enter First No : ");
//scanf("%d",&a);
//printf("\nEnter operator : ");
//scanf("%s",&c);
//printf("\nEnter First No : ");
//scanf("%d",&b);
//switch(c){
//	case '+':
//		printf("\nAddition of Number is : %d",a+b);
//		break;
//	case '-':
//		printf("\nSubtraction of Number is : %d",a-b);
//		break;
//	case '*':
//		printf("\nMultiplication of Number is : %d",a*b);
//		break;
//	case '/':
//		printf("\nDivision of Number is : %d",a/b);
//		break;
//	case '%':
//		printf("\nModulus of Number is : %d",a%b);
//		break;
//	default:
//		printf("Not an operator");
//}
//	int a,bin[32],i=0;
//	char ch;
//	scanf("%d",&a);
//	printf("Enter b for binary\nEnter o for octal\nEnter h for Hexadecimal : ");
//	scanf("%s",&ch);
int a,bin[32],i;
	char ch;
	scanf("%d",&a);
	printf("Enter b for binary\nEnter o for octal\nEnter h for Hexadecimal : ");
	scanf("%s",&ch);
	switch(ch){
		case 'b':
				while(a!=0){
				bin[i]=a%2;
				printf("%d",a%2);
				a/=2;}
//				i++;}
//				for(int j=i-1;j>=0;j--){
//					printf("%d",bin[j]);
//				}
			break;
		case 'o':
//			while(a!=0){
//			bin[i]=a%8;
//			a/=8;
//			i++;}
//			for(int j=i-1;j>=0;j--)
//				printf("%d",bin[j]);
			break;
		case 'h':
//			while(a!=0){
//			bin[i]=a%16;
//			a/=16;
//			i++;}
//			for(int j=i-1;j>=0;j--)
//				printf("%d",bin[j]);
			break;
	}
}
