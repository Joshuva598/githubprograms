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
 * Last Modified Date: 31.09.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
	int a=10,b=15,result;
	result=a+b;
	printf("addition       :a+b=%d\n",result);
	result=a-b;
	printf("Substraction   :a-b=%d\n",result);
	result=a*b;
	printf("multiplication :a*b=%d\n",result);
	result=a/b;
	printf("division       :a/b=%d\n",result);
	result=a%b;
	printf("modulo division:%d\n",result);
	result=++a;
	printf("Increment the value of a by 1:%d\n",result);
	result=--b;
	printf("Decrement the value of b by 1:%d\n",result);

     return 0;
}

// Program End
