#include <stdio.h>
int

sdn (int n){
	int x = 0;
	for(n; n!=0; n=n/10){
		x=x*10+n%10;
	}
	return x;
}

sln (int a, int b, int c){
	int max = a;
	if(max<b){
		max = b;
	}
	if(max<c){
		max = c;
	}
	return max;
}

fibo (int n){
	int i= 3;
	int f1 = 1;
	int f2 = 1;
	for(i; i<=n; i++){
		int f = f1;
		f1 = f2;
		f2 = f + f1;
	}
	return f2;
}

tongs1 (int n){
	int i = 0;
	int s1 = 0;
	for(i; i<=n; i++){
		s1 += i;
	}
	return s1;
}

float
tongs2 (int n){
	int i=1;
	float s2=0;
	for(i; i<=n; i++){
		s2+=1.0/i;
	}
	return s2;
}

main()
{
	int a;
	do{
		printf("Nhap vao so duong a: ");
		scanf("%d", &a);
	}while(a<=0);
	int b;
	do{
		printf("Nhap vao so duong b: ");
		scanf("%d", &b);
	}while(b<=0);
	int c;
	do{
		printf("Nhap vao so duong c: ");
		scanf("%d", &c);
	}while(c<=0);
	
	int x1 = sdn(a);
	printf("1. So dao nguoc cua %d la: %d\n", a, x1);
	
	int x2 = sln(a,b,c);
	printf("2. So lon nhat trong 3 so la: %d\n", x2);
	
	int x3 = fibo(a);
	printf("3. So thu %d trong day fibonacci la: %d\n", a, x3);
	
	int x4 = tongs1(a);
	printf("4. Tong cac so tu 1 den %d la: %d\n", a, x4);
	
	double x5 = tongs2(a);
	printf("5. Tong cac so 1 + 1/2 + 1/3 ... + 1/%d la: %f", a, x5);
}

