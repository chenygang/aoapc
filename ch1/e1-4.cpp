/*input
60
*/
#include<stdio.h>
#include<math.h>
int main(){
	const float Pi = acos(-1);
	int n;
	scanf("%d", &n);
	printf("%f %f\n", sin(n*Pi/180), cos(n*Pi/180));
	return 0;
}