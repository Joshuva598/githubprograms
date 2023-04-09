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
 * Last Modified Date: 08.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include <string.h>
struct Student 
{
    char name[50];
    float marks;
};

int main() 
{
    
    struct Student students[5];
    
   
    printf("Enter information of students:\n");
    for (int i = 1; i <=5; i++) 
    {
        printf("\nFor roll number:%d\n", i);
        printf("Enter first name:");
        scanf("%s", students[i].name);
        printf("Enter marks:");
        scanf("%f", &students[i].marks);
    }
    
    printf("Displaying information:\n");
    for (int i = 1; i <=5; i++) 
    {
        printf("\nRoll number:%d\n", i);
        printf("First Name: %s\nMarks: %.f\n", students[i].name, students[i].marks);
    }
    
    return 0;
}


// Program End
