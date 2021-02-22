#include <stdio.h>

int main(){
	int x,y,a,i,f;
	printf("������� �����:");
	 scanf("%d",&x);
	f = x;
	i = 0;
	if (x<0){
		x = abs(x);
	}
	y =abs(x);
	while (x >0){
		
		x= x/10;
		i= i+1;
	
	}
	int b[i];
	int k;
	k=0;
	 
	 while(k < i) {
		a= y%10;
		y=y/10;
		b[k] = a;
	
		k = k+1;
		
	}
	if (f<0){
		while (i>0){
		
			i=i-1;
			if (i > 0){
			printf("- %d *10^ %d ",b[i],i);
		} 
		else{
		printf("- %d",b[i]);
		}
	}
	}
	else {
	while (i>0){
		i=i-1;
			if (i > 0){
			printf(" %d *10^ %d +",b[i],i);
		} 
		else{
		printf(" %d",b[i]);
		}
		
}
	}
	return 0;
} 
