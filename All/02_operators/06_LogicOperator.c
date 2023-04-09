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
 * Last Modified Date: 31.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int i=5,j=5,k=10;
     if(i==j||k>j)
     {
	     printf("i is equal to j or k greater than j is 1\n");
     }
     if(i==j||k<j)
     {
	     printf("i is equal to j or k less than j is 1\n");
     }
     if(i!=j||k<j)
     {
	     printf("i is not equal to j or k less thanj is 0\n");
     }

     return 0;
}

// Program End
