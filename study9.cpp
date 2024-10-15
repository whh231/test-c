#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a,b,c,d,e,f,g;
	int s;
	scanf("%d %d",&a ,&b);
	if (a >= 4 && a <= 1000 && b >= 4 && b <= 1000)
	{
		g = (a + b) * (a + b);
		f= (a - b) * (a - b);
		c = a*a-b*b;
		d = a*a+b*b;
		if (g >= f)
			e = g;
		else e = f;
		if (c >= e && d <= c)
			e = c;
		else if (c <= e && e <= d)
			e = d;
		else if (c >= e && d >= c)
			e = d;
		if (g <= f)
			s = g;
		else s = f;
		if (c >= s && d >= s)
			s = s;
		else if (c <= s && s <= d)
			s = c;
		else if (c <= s && d <= c)
			s = d;









	}




	printf("%d %d",e,s);



	



    
	return 0;
}




