#include <stdio.h>
int main(){
	int powerCheck;
	char lightColor;
	printf("enter 1 for power on\n");
	scanf("%d",&powerCheck);
	fflush(stdin);
	if (powerCheck == 1){
	printf("R:red\nY:yellow\nG:green\n");
	scanf("%c",&lightColor);
		if (lightColor =='R'){
			printf("STOP");
		}
		else{ if (lightColor == 'Y'){
			printf("CaUtIoN");
		}
		if (lightColor == 'G'){
			printf("Go");
		}
		}
		}
		else{
			printf("Signal Off");
		}
		return 0;
	}
    
