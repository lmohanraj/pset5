 #include<stdio.h>
 int main()
 {
 	int i,n,c=0;
 	printf("input\noutput : ");
 	scanf("%d",&n);
 	for(i=2;i<n/2;i++)
 	{
 		if(n%i==0)
 		c++;
 	}
 	if(c>0)
 	printf("yes");
 	else
 	printf("no");
 	return 0;
 }
