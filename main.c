#include <stdio.h>
#include <stdlib.h>
int primo(int x){
	int n=0;
	for(int i=1;i!=x+1;i++){
		if(x%i==0)
			n++;
	}
	printf("\n%d",n);
	if(n==2)
		return 1;
	else
		return 0;}

int main()
{
	int x,y;
	printf("Digite um numero primo:\n");
    	scanf("%d",&x);
    	y=primo(x);
	if(y)
		printf("o numero eh primo!!!");
	else
		printf("o numero nao eh primo.");
    	return 0;
}
