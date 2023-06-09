#include<stdio.h>
struct marks{
	int Roll_no;
	char Name[100];
	int Chem_marks;
	int Phy_marks;
	int Maths_marks;
};
main()
{
	int i,sum;
	float percentage;
	struct marks m[5];
	for(i=0;i<5;i++)
	{
		printf("Enter Roll no.:-");
		scanf("%d",&m[i].Roll_no);
		printf("Enter Name:-");
		scanf("%s",&m[i].Name);
		printf("Enter Physics marks:-");
		scanf("%d",&m[i].Phy_marks);
		printf("Enter Chemistry marks:-");
		scanf("%d",&m[i].Chem_marks);
		printf("Enter Maths marks:-");
		scanf("%d",&m[i].Maths_marks);
	}
	printf("\n====================================\n");
	for(i=0;i<5;i++)
	{
		printf("Student Roll No.=%d\n",m[i].Roll_no);
		printf("Student Name=%s\n",m[i].Name);
		printf("Student Physics marks=%d\n",m[i].Phy_marks);
		printf("Student Chemistry marks=%d\n",m[i].Chem_marks);
		printf("Student Matha marks=%d\n",m[i].Maths_marks);
		sum=m[i].Phy_marks+m[i].Chem_marks+m[i].Maths_marks;
		percentage=((sum*100)/300);
		printf("students percentage is=%0.2f\n",percentage);
	}
}
