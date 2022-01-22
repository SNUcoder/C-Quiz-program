#include<stdio.h>


int main()
{
	int a;
	int b;
	int c;
	int d;
	int i = 0;

	printf("1+1=?\n Ans:");
	scanf ("%d", &a);
	switch (a)
	{
	case 2:
	i++;
	default:
		break;
	}
	printf("2+2=? \n Ans:");
	scanf("%d", &b);
		switch (b)
		{
			case 4:
			i++;
    			break;
			default:
			break;
		}
			printf("8*2=?");
	scanf ("%d", &c);
	switch (c)
	{
	case 16:
	i++;
	default:
		break;
	}
	printf("9+9=?\n Ans:");
	scanf("%d", &d);
		switch (d)
			{
				case 18:
				i++;
				break;
				default:
				break;
			}
	   printf("your score:%d", i);
}