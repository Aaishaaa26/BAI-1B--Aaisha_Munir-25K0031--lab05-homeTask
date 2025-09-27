#include <stdio.h>
int main(){
	char room, action;
	printf("Enter:\n'L' for living room\n'K' for kitchen\n");
	scanf("%c",&room);
	fflush(stdin);
	printf("Enter:\n'L' for lights\n'T' for thermostat\n");
	scanf("%c",&action);
	if (room =='L'){
		if(action =='L'){
			printf("Adjusting ambient lighting");
		}
		else if(action =='T'){
			printf("Setting living room temperature");
		}
	}
	else{ if(room == 'K'){
		if(action=='L'){
		
		printf("Turning on bright task lighting");
	}
	else if(action=='T'){
		printf("Setting kitchen temperature");
	}
	}
	}
	return 0;
	}