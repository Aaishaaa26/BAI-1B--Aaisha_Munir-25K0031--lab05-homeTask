#include <stdio.h>
#include <string.h>
int main(){
	char storedUsername[] = "aaishaaa26", storedPassword[] = "aaisha123", username[20],password[20];
	printf("Enter Username\n");
	scanf("%s",&username);
	fflush(stdin);
	if (strcmp(storedUsername,username)==0){
	printf("Enter Password\n");
	scanf("%s",&password);
	if (strcmp(storedPassword,password)==0){
		printf("logged in");
	}
	else{
		printf("Incorrect Password");
	}
	}
	else{
		printf("Incorrect Username");
	}
	return 0;
}