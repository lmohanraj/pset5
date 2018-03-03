 #include<stdio.h>
 int main()
 {
 	float a,b,c;
 	printf("input\n");
 	scanf("%f%f%f",&a,&b,&c);
 	if((a>0)&&(b>0)&&(c>0)&&((a+b+c)==180))
 	printf("yes");
 	else
 	printf("no");
 	return 0;
 }
