#include <stdio.h>
int main(){
	int a,b,c,discriminant;
	printf("For determining discriminant of ax² + bx + c\nEnter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	discriminant = (b*b) - (4*a*c);
	if (discriminant == 0){
		printf("one real root\n");
	}
	else if (discriminant>0){
		printf("two real roots\n");
	}
	else{ 
		printf("No real roots, imaginary roots\n");
	}
	return 0;

}
