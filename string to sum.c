#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	system("chcp 1251");
  system("cls");
	int n,i,sum;
	sum=0;
	printf("Введите количество символов:");
	scanf("%d",&n);
	char *s;
	printf("Введите строку:");
	s = (char*)malloc(n);
	scanf("%s", s);
	for (i = 0; s[i]!='\0';i++){
		if (isalpha(s[i])){
	
		}
		else{
		
			sum = sum + ((int)s[i] -'0');
		}

	}
	
	printf("sum = %d",sum);
	printf("\n");
	
	return 0;
}
