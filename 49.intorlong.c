 #include<stdio.h>
 int main()
 {
            signed long int a;
 	printf("input\noutput : ");
 	scanf("%li",&a);
 	if((a>=-2147483648)&&(a<=2147483647))
 	printf("INT");
 	else
 	printf("LONG LONG");
 	return 0;
 }
