#include<stdio.h>

int main(){

	int a=1, b =1, c = 1;
	if(a && b ||c){
		printf("True\n");
	}
	printf("%.10f\n", 1.0);
	int x = 0, y = 0;
	if(a)
		if(b)
			x++;
	else
		y++;
	int sum = 1;
	printf("%d %d\n", x, y);
	for(int i=1; i<=32; i++){
		sum += sum + (a>>i);
		printf("%d\n",sum);
	}
	return 0;
}