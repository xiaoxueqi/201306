#include<stdio.h>

main()
{
	char *s1="223";
	char *s2="153";
	char *s3="223";

	//if(!strcmp(s1, s2))printf("1");
	if(!(strcmp(s1, s3)>0 || strcmp(s1, s2)<0))
		printf("%d", strcmp(s1, s2));
	//if(strcmp(s1, s2))printf("2");
	//if(!strcmp(s1, s3))printf("3");

	printf("HelloWorld!");	
}
