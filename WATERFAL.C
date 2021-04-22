#include<stdio.h>
#include<conio.h>
void main()
{
	unsigned int w[5],l=0,i,s=0,t;
	clrscr();

	printf("Enter the Number of Walls- ");
	scanf("%d",&t);

	printf("Enter the Height of Walls\n");

	for(i=1;i<=t;i++)
	{
		scanf("%d",&w[i]);
	}

	for(i=1;i<=t;i++)
	{
		switch(i)
		{
			case 1:
			{
				if(w[1]>=w[2])
				{
					s=w[1]-w[2];
					l=1;
				}
				break;
			}
			case 2:
			{
				if(l==1 && w[1]>=w[3] && w[2]!=0)
				{
					s=s+w[1]-w[3];
					l=2;
				}
				else if(w[2]>w[3])
				{
					s=s+w[2]-w[3];
					l=3;
				}
				else if(w[2]==0 && w[3]!=0)
					s=w[3];
				break;
			}
			case 3:
			{
				if(l==2 && w[1]>=w[4])
				{
					s=s+w[1]-w[4];
					l=4;
				}
				else if(l==3 && w[3]>w[4])
				{
					s=s+w[3]-w[4];
				}
				else if(w[3]==0 && w[4]!=0)
					s=w[4];
				break;
			}
			case 4:
			{
				if(l==4 && w[1]>=w[5])
				{
					s=s+w[5]-w[1];
				}
				break;
			}
		}
	}
		printf("%d",s);
	getch();
}