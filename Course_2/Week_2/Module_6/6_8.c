#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number_of_subject;
    printf("How many subjects: ");
    scanf("%d", &number_of_subject);
    bool failed = false;

    int total_gradePoint = 0;

    for (int i = 1; i <= number_of_subject; i++)
    {
        printf("Enter Marks: ");

        int marks, gradePoint;
        scanf("%d", &marks);

        if (marks >= 80 && marks <= 100)
        {
            printf("Grade =A+\n");
            gradePoint = 5;
        }
        else if (marks >= 70)
        {
            printf("Grade =A\n");
            gradePoint = 4.5;
        }
        else if (marks >= 60)
        {
            printf("Grade =A-\n");
            gradePoint = 4;
        }
        else if (marks >= 50)
        {
            printf("Grade =B\n");
            gradePoint = 3;
        }
        else if (marks >= 40)
        {
            printf("Grade =C\n");
            gradePoint = 2;
        }
        else
        {
            printf("Grade =F\n");
            gradePoint = 0;
            failed = true;
        }
        total_gradePoint += gradePoint;
        printf("Gread = %d\n", gradePoint);
    }

    if (failed)
    {
        printf("You have failed. GPA =0.0\n");
    }
    else
    {
        double gpa = (double)total_gradePoint / number_of_subject;
        printf("GPA = %lf\n", gpa);
    }
    return 0;
}
