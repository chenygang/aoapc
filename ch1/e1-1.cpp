/*input
2 3 5
*/
#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%.3f", (a+b+c)*1.0/3);
	return 0;
}