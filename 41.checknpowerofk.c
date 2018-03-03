 #include<stdio.h>
 #include<math.h>
 int main()
 {
 	int i,c,n,count=0,k;
 	printf("input\n");
 	scanf("%d%d",&n,&k);
 	for(i=1;c<=n;i++)
 	{
 	  c=pow(k,i);
 	  if(c==n)
 	  {
 	     count++;
 	     break;
 	  }
 	}
 	if(count>0)
 	printf("yes");
 	else
 	printf("no");
 	return 0;
 }
