#include<stdio.h>
int main(){
	int n;
	int i=0;
	int a;
	double sum=0;
	int s=0,d=0,f=0,g=0,h=0,j=0;
	scanf("%d",&n);
	for(i;i<n;i++){
		scanf("%d",&a);
		if(a<=50){
			s++;
		}
		else if (a>50&&a<=100){
			d++;
		}
		else if (a>100&&a<=150){
			f++;
		}else if (a>150&&a<=200){
			g++;
		}else if (a>200&&a<=300){
			h++;
		}else if (a>300){
			j++;
		}
		sum+=a;
	}
	sum=sum/n;
	printf("%.2lf\n",sum);
	printf("%d %d %d %d %d %d",s,d,f,g,h,j);
}