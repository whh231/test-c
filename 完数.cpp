#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		int num=0;
		int n=1;
		for(n;n<i;n++){
			if(i%n==0){
				num+=n;
			}
			
		}
		if(num==i){
			printf("%d\n",i);
		}
		
	}
	return 0;
}