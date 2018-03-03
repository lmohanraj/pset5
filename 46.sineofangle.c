 #include<stdio.h>
 #include<math.h>
 int main()
 {
 	float a,r;
 	printf("input\n");
 	scanf("%f",&a);
 	a=a*(3.142/180);
 	r=sin(a);
 	printf("output : %f",r);
 	return 0;
 }
