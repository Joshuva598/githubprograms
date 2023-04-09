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
 * Last Modified Date: 04.04.2024
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
int main()
{
  int s1, s2, s3;
   int array1[100], array2[100], array3[200];

   printf("Plz enter size of first array: ");
   scanf("%d", &s1);
   printf("enter first array elements: ");

   for(int i = 0; i < s1; i++) 
   {
      scanf("%d", &array1[i]);
   }

   printf("Plz enter size of second array: ");
   scanf("%d", &s2);
   printf("enter second array elements: ");

   for(int i = 0; i < s2; i++) 
   {
      scanf("%d", &array2[i]);
   }

   s3 = s1 + s2;

   for(int i = 0; i < s1; i++) 
   {
      array3[i] = array1[i];
   }

   for(int i = 0,j=s1; i < s2; i++,j++) 
   {
      
      array3[j] = array2[i];
      
   }
   printf("\n");
   printf("after merging 1 and 2 array resultant array is: ");

   for(int i = 0; i < s3; i++) 
   {
      printf("%d ", array3[i]);
   }
  return 0;
}
