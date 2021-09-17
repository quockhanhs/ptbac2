#include<stdio.h>
#include<math.h>
main()
{
	float a, b, c, delta, x1, x2;
	printf("Nhap a= "); scanf("%f", &a);
	printf("Nhap b= "); scanf("%f", &b);
	printf("Nhap c= "); scanf("%f", &c);
	if(a==0)
	{
		if(b==0)
		{
			if(c==0) 
			    printf("Vo so nghiem");
			else 
			    printf("Vo nghiem");
		}
		else
			printf("x=%.2f", -c/b);
	}
	else
	{
		delta=b*b-4*a*c ;
		if(delta<0) 
		    printf("Vo nghiem");
		if(delta==0)
			printf("x=%.2f", -b/(2*a));
		if(delta>0)
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet");
			printf("\n %.2f", x1);
			printf("\n %.2f", x2);
		}
	}
}


