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
#include<string.h>

// Main Function
int main()
{
     char word1[15], word[15]="hi";
     printf("Plz enter a str:\n");
     scanf("%[^\n]s",word1);
     int result=strcmp(word,word1);
     if(result==0)
     {
	     printf("Hello");
     }
     else
     {
	     printf("not enter hi\n");
     }
     return 0;
}

// Program End
