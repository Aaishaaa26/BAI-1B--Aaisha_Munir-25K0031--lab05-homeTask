#include <stdio.h>
int main(){
	int isCourseFull, hasPrerequisite;
	printf("Enter 0 if seats are available\n");
	scanf("%d",&isCourseFull);
	fflush(stdin);
	printf("If prerequisite is avaialable then enter 1\n");
	scanf("%d",& hasPrerequisite);
	if (isCourseFull==0 && hasPrerequisite==1){
		printf("Enrolled Successfully");
	}
	else if(isCourseFull!=0 && hasPrerequisite==1){
		printf("Can not enroll, course is full");
	}
	else if(isCourseFull==0 && hasPrerequisite!=1){
		printf("Can not enroll, prerequisite missing");
	}
	else if(isCourseFull==0 && hasPrerequisite==1){
		printf("Can not enroll, prerequisite missing and course id full");
	}
    return 0;	
}