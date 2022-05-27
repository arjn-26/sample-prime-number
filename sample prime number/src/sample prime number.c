/*
 ============================================================================
 Name        : sample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,i,flag=0;
	setbuf(stdout,NULL);
	printf("enter a number");
	scanf("%d",&a);
	printf("you have entered%d\n",a);
	for(i=2;i<a/2;i++){
		if(a%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("prime number");
	}
	else{
		printf("not prime");
	}
	return EXIT_SUCCESS;
}
