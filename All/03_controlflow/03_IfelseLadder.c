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
 * Last Modified Date: 01.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int a=2,b=3,c=45,d=65;
     if(a>b&&a>c&&a>d)
     {
	     printf("%d is the largest\n",a);
     }
     else if(b>a&&b>c&&b>d)
     {
	     printf("%d is the largest\n",b);
     }
     else if(c>a&&c>b&&c>d)
     {
	     printf("%d is the largest\n",c);
     }
     else
     {
	     printf("%d is the largest\n",d);
     }
     return 0;
}

// Program End
