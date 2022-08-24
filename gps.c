#include"gps.h"
extern int r2,c2;
extern int arr[5][5];
int check (int r,int c)
{
	if (1==arr[r][c])
		return 0;
	else if (0==arr[r][c])
		return 1;
	else
	{
		printf("error");
		return 0;
	}

}
void drroad (int r1 ,int c1)
{ if (4==r1){goto ri;}
	 if (0==arr[r1+1][c1])
	 { r1++;
	 printf("\ndown");}
	 ri:
	 if (4==c1)
	 {goto bl;}
	 else if(0==arr[r1][c1+1])
	 {c1++;
	 printf(" right");
	 }

	  bl:
if (r1==r2&&c1==c2)
{
printf("\nnow you will reach your destiny\n");
return;}
else if (1==arr[r1+1][c1]&&1==arr[r1][c1+1])
{
	 printf(" road blocked\n");
		 return;
}
else {
drroad (r1,c1);}

}
void urroad (int r1,int c1)
{if (r1==0){goto ri;}
	if (0==arr[r1-1][c1])
	 { r1--;
	 printf("\nup");}
	 ri:
	 if(c1==4){goto bl;}
	 else if(0==arr[r1][c1+1])
	 {c1++;
	 printf(" right");
	 }bl:

if (r1==r2&&c1==c2)
{
printf("\nnow you will reach your destiny\n");
return;}
else if (1==arr[r1-1][c1]&&1==arr[r1][c1+1])
{
		 printf(" road blocked\n");
		 return;
	 }
else {
urroad (r1,c1);}
}
void ulroad (int r1,int c1)
{if (r1==0){goto le;}
	if (0==arr[r1-1][c1])
	 { r1--;
	 printf("\nup");}
	 le:
	 if (c1==0){goto bl;}
	 else if(0==arr[r1][c1-1])
	 {c1--;
	 printf(" left");
	 }

	 bl:
if (r1==r2&&c1==c2)
{printf("\nnow you will reach your destiny\n");
return;}
else if (1==arr[r1-1][c1]&&1==arr[r1][c1-1])
{printf(" road blocked\n");
		 return;
}
else {
ulroad (r1,c1);}
}
void dlroad (int r1,int c1)
{if (r1==4){goto le;}
	if (0==arr[r1+1][c1])
	 { r1++;
	 printf("\ndown");}
	 le:
	 if (c1==0){goto bl;}
	 else if(0==arr[r1][c1-1])
	 {c1--;
	 printf(" left");
	 }

	  bl:
if (r1==r2&&c1==c2)
{
printf("\nnow you will reach your destiny\n");
return;}
else if(1==arr[r1+1][c1]&&1==arr[r1][c1-1])
{printf(" road blocked\n");
		 return;
}
else {
dlroad (r1,c1);}
}

void leftroad(int r1,int c1)
{
	 if (c1==0){goto bl;}
	 else if(0==arr[r1][c1-1])
	 {c1--;
	 printf(" left");
	 }

	  bl:
if (r1==r2&&c1==c2)
{
printf("\nnow you will reach your destiny\n");
return;}
else if(1==arr[r1][c1-1])
{printf(" road blocked\n");
		 return;
}else {
leftroad (r1,c1);}}
void rightroad(int r1,int c1)
{
	if(c1==4){goto bl;}
	 else if(0==arr[r1][c1+1])
	 {c1++;
	 printf(" right");
	 }bl:

if (r1==r2&&c1==c2)
{
printf("\nnow you will reach your destiny\n");
return;}
else if (1==arr[r1][c1+1])
{
		 printf(" road blocked\n");
		 return;
	 }
else {
rightroad (r1,c1);}
}
void uproad(int r1,int c1)
{if (r1==0){goto le;}
	if (0==arr[r1-1][c1])
	 { r1--;
	 printf("\nup");}
	 le:
	 if (r1==r2&&c1==c2)
{
printf("\nnow you will reach your destiny\n");
return;}
else if(1==arr[r1-1][c1])
{printf(" road blocked\n");
		 return;
}
else {
uproad (r1,c1);}
}
void downroad(int r1,int c1)
{if (4==r1){goto ri;}
	 if (0==arr[r1+1][c1])
	 { r1++;
	 printf("\ndown");}
	 ri:
	 if (r1==r2&&c1==c2)
{
printf("\nnow you will reach your destiny\n");
return;}
else if (1==arr[r1+1][c1])
{
	 printf(" road blocked\n");
		 return;
}
else {
downroad (r1,c1);}
}



