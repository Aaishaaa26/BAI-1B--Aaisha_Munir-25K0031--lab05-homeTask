#include <stdio.h>
int main(){
	int age;
	printf("Enter your age:\n");
	scanf("%d",&age);
	if (age>=0 && age<=110){
		if (age<=5){
			printf("Free Ticket");	
		}
		else{ if (age<=65){
			printf("Standard Ticket");
		}
		else{
			printf("Discounted Ticket");
		}
		} 
	}
	else{
		printf("Invalid age entered");
	}
	return 0;
}