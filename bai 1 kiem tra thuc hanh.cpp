#include<stdio.h>
int main(){
	int ary[10];
	printf("nhap vao so nguyen : \n");
	for(int i=0;i<10;i++){
		printf("ary[%d]:",i);
		scanf("%d",&ary[i]);
	}
	printf("thu tu dao nguoc : \n");
	for(int a=9;a>0;a--){
		printf("%d\n",ary[a]);
	}
}
