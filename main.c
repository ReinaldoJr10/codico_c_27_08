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
	int x=1,y;
	while(x){
		printf("Digite um numero primo:(zero para sair)\n");
    	scanf("%d",&x);
    	y=primo(x);
	if(y)
		printf("o numero eh primo!!!\n");
	else
		printf("o numero nao eh primo.\n");
	}
    	return 0;
}
