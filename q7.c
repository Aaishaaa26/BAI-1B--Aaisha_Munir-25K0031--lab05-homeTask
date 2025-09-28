#include <stdio.h>
int main(){
	int a,b,c,d;
	printf("(For Read)\nIf you have permission then enter 1 else enter 0\n");
	scanf("%d",&a);
	fflush(stdin);
	printf("(For Write)\nIf you have permission then enter 2 else enter 0\n");
	scanf("%d",&b);
	fflush(stdin);
	printf("(For Execute)\nIf you have permission then enter 4 else enter 0\n");
	scanf("%d",&c);
	fflush(stdin);
	d = a|b|c;
	if ((a==1 || a==0) && (b==2 || b==0) && (c==4 || c==0)){
		if (d==4 || d==5 || d==6 || d==7){
			printf("Access granted, full control");
		}
		else if((a|b)==3){
			printf("Access granted: read and write");
		}
		else if(d==1){
			printf("Access granted: read-only");
		}
		else{
			printf("Access Denied");
		}
	}
	return 0;
}