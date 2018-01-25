/*input
3200
*/
#include<stdio.h>

int main(){
	/*
		1.能被4整除而不能被100整除。
        2.能被100整除也能被400整除。
     */

	int year;
	scanf("%d",&year);
	if(year % 4 == 0 && year % 100 != 0)
		printf("yes");
	else if(year % 100 == 0 && year % 400 == 0)
		printf("yes");
	else
		printf("no");

	return 0;

}