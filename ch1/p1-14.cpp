/*input
20 7 33
*/
#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c, t;
	scanf("%d%d%d", &a, &b, &c);
	if(a>b){t = a; a = b; b = t;}
	if(a>c){t = a; a = c; c = t;}
	if(b>c){t = b; b = c; c = t;}
	printf("%d %d %d\n", a, b, c);
	printf("%f\n", 111111111.0*111111111);
	printf("%f\n", sqrt(-10));
	printf("%f\n", 1.0/0.0);
	printf("%f\n", 0.0/0.0);
	printf("%d\n", 1/0);
	return 0;
}