#include<stdio.h>
#include<conio.h>
#define max 100

int fibo(int n){
	int i=2;
	int n0=0;
	int n1=1;
	while(i<=n){
		int tmp=n1;
		n1 = n1+n0;
		n0=tmp;
		i=i+1;
	}
	return n1;
}

int main(){
	printf("%d",fibo(3));
	return 0;
}
