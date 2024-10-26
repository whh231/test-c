#include<stdio.h>
int main(){
	double n;
	int a;
	double x;
	scanf("%lf %d",&n,&a);
	if(n<=3){
		x=10;
	}
	else if(n>3&&n<=10){
		x=10+(n-3)*2;
		
	}
	else if(n>10){
		x=10+14+(n-10)*3;
	}
	int h;
	if(a>=5){
		h=(a/5)*2;
	}
	int y;
	y=(int)(x+0.5);
	y=y+h;
	printf("%d",y);
	return 0;
}