#include<stdio.h>
int main(){
	int ary[11];
	printf("nhap vao so nguyen : \n");
	for(int i=1;i<11;i++){
		printf("ary[%d]=",i);
		scanf("%d",&ary[i]);
	}
	printf("thu tu dao nguoc : \n");
	for(int a=10;a>0;a--){
		printf("%d\n",ary[a]);
	}
}
