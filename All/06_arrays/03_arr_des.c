/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: 
 * Author: T.Joshuva
 * Title: Project engineer
 * Last Modified Date: 04.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int ary[5],size;
     printf("please enter size of array:");
     scanf("%d",&size);
     printf("enter array elements:\n");
     for(int i=0;i<size;i++)
     {
	scanf("%d",&ary[i]);
     }
	printf("\nyour array is :");
	for(int i=0;i<size;i++)
	{
		printf("%d ",ary[i]);
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ary[i]<ary[j])
			{
				int temp=0;
				temp=ary[i];
				ary[i]=ary[j];
				ary[j]=temp;
			}
		}
		
	}
	printf("\narray in descending order:");
	for(int i=0;i<size;i++)
	{
		printf("%d ",ary[i]);
	}
     return 0;
}

// Program End
