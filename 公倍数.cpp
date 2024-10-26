#include<stdio.h>
#include<math.h>
int main (){
	int a,b,c;
	scanf("%d %d",&a,&b);
	if(a<b){
		int tem;
		tem=a;
		a=b;
		b=tem;
		
	}
	for(int i=b;i>=1;i--){
		if(a%i==0){
			c=i;
			break;
		}
	}
	int x=a*b/c;
	printf("%d",x);
}