/*input
3 4 5
*/
#include<stdio.h>
int main(){
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	if (a + b <= c || a + c <= b || b + c <= a)
		printf("not a triangle");
	else{
		if (b < c && a < c && b*b + a*a == c*c)
			printf("yes");
		else if(b < a && c < a && b*b + c*c == a*a)
			printf("yes");
		else if(a<b && c<b && a*a + c*c == b*b)
			printf("yes");
		else
			printf("no");
	}
	return 0;
}