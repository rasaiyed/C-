#include<stdio.h>
int main()
{
	int row,col,x=1;
	for(row=5;row>=1;row--) // 4; 4>=1 ;4--
	{
		for(col=1;col<=row;col++)//1;1<=4;1++
		{
			
			printf(" "); // * * * * * $
						//  * * * * $ $
		}
		
		for(col=row;col<=5;col++)//4;5<=5;4++
		{
			
			printf("$");
				
		}				
		
		printf("\n");
	}
	
	return 0;
}