int r2,c2;
int arr[5][5];
#include"gps.h"
void main (void)
{ int choose,r1,c1;
int s,d;


	printf(" choose 0 for random road & 1 for specific road\n");
	scanf("%d",&choose);
if(0==choose)
{
	for(int i=0;i<5;i++)
	{
	for(int j=0;j<5;j++)
		arr[i][j]=rand()%2;
	}
}
else if (1==choose)
{ for(int i=0;i<5;i++)
	{
	for(int j=0;j<5;j++)
		scanf("%d",&(arr[i][j]));
	}

}
	for(int i=0;i<5;i++)
	{
	for(int j=0;j<5;j++)
 printf("%d",arr[i][j]);
 printf("\n");
	}

		printf ("choose number of row you want to start from\n");
scanf("%d",&r1);
		printf ("choose number of column you want to start from\n");
scanf("%d",&c1);
s=check(r1,c1);
		printf ("choose number of row you want to end to\n");
scanf("%d",&r2);
printf ("choose number of coulmn you want to end to\n");
scanf("%d",&c2);
d=check(r2,c2);
if (1==s==d)
{ printf ("start");
if (r1==r2)
{
	if (c1>c2)
		leftroad(r1,c1);
	else 
		rightroad(r1,c1);
}else if (c1==c2)
{
	if (r1>r2)
		uproad(r1,c1);
	else 
		downroad(r1,c1);
}

else if (r2>r1)
{ if (c2>c1)
	drroad (r1,c1);
else
	dlroad(r1,c1);
}else if (r1>r2) {
	if (c2>c1)
		urroad(r1,c1);
	else if (c1>c2)
		ulroad(r1,c1);
}

}
	else
printf("the road is blocked\n");

}