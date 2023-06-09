#include<stdio.h>
struct distances{
	int feet;
	int inch;
}s,s1,sum;
main()
{
	printf("Enter 1st distances\n");
	printf("Enter feet:-");
	scanf("%d",&s.feet);
	printf("Enter inch:-");
	scanf("%d",&s.inch);
	
	printf("Enter 2st distances\n");
	printf("Enter feet:-");
	scanf("%d",&s1.feet);
	printf("Enter inch:-");
	scanf("%d",&s1.inch);
	
	sum.feet=s.feet+s1.feet;
	sum.inch=s.inch+s1.inch;
	while(sum.inch>=12)
	{
		sum.feet++;
		sum.inch-=12;
	}
	printf("\nSum of distances feet=%d  inch=%d",sum.feet,sum.inch);
}
