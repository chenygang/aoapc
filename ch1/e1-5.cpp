/*input
1
*/
#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n * 95 > 300){
		printf("%.2f\n", n*95*1.0*0.85);
	}else{
		printf("%.2f\n", n*95*1.0);
	}
	return 0;
}