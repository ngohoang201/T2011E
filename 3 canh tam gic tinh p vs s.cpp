#include <stdio.h>
#include <math.h>
int  main () {
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf( "%d",&b);
	printf(" Nhap c=");
	scanf("%d",&c);
	if (a>0 ) {
		if (b>0 ) {
			if (c>0 ) {
				if (a+b>c) {
					if (a+c>b) {
						if (b+c>a) {
							printf("day la 3 canh tam giac\n");
							int p = a+b+c;
							float q =(float)p/2;
							float s =(p*(p-a)*(p-b)*(p-c));
							printf("Chu vi:% d va dien tich:%f",p/2,s);
						} else {
							printf("Khong phai 3 canh tam giac");
						}
					}else{
						printf("Khong phai 3 canh tam giac");
					}
				}else{
					printf ("Khong phai 3 canh tam giac");
				}
			}else{
				printf ("Khong phai 3 canh tam giac");
			}
		}else{
			printf("Khong phai 3 canh tam giac");
		}
	}else{
		printf ("Khong phai 3 canh tam giac");
	}
}
