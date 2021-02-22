#include <stdio.h>

int main(){
	int x,y,a,i;
	printf("¬ведите число:");
	 scanf("%d",&x);
	y = x;
	i = 0;
	while (x>0){
		a = x%10;
		x = x/10;
		
		if (i > 0){
			printf("+ %d *10^ %d",a,i);
		} 
		else{
		printf("%d",a);
		}
		 i++;
	}
	return 0;
} 
