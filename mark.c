/*A Student studying in an institution is examined by course work and written examination. Both components of the assessment carry a maximum of 50 marks. The following rules are applied by the examiner in order to determine whether a student passes or fails:
i) A student must secure a total of 45% or more in order to pass.
ii) A total mark of 44% is moderate to 45% however.
iii) Each component must be passed with minimum of 20 out of 50.
iv) If a student scores 45% or more but does not achieve the minimum mark in one component he is failed with 44% which is moderated to 45%.
    Write a program to input the marks for each component and output the final mark along with the result.
*/ 
#include<stdio.h>

int main()
{
    int course, written;
    printf("Enter the course and written marks: ");
    scanf("%d %d", &course, &written);

    float total = course + written;
    float percentage = (total / 100) * 100;

    if (course >= 20 && written >= 20)
    {
        if (percentage >= 45.0)
        {
            printf("The total marks scored are %0.2f and the student has passed.", total);
        }
        else if (percentage >= 44.0)
        {
            printf("The total marks scored are %0.2f and the student has Moderate pass.", total);
        }
        else
        {
            printf("The student has failed with a total score of %0.2f", total);
        }
    }
    else
    {
        printf("The student has failed with a total score of %0.2f", total);
    }

    return 0;
}
