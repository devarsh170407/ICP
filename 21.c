#include <stdio.h>

int main() {
    int physics, chemistry, biology, maths, computer, totalMarks, percentage;
    char grade;

    printf("Enter marks for Physics: ");
    scanf("%d", &physics);

    printf("Enter marks for Chemistry: ");
    scanf("%d", &chemistry);

    printf("Enter marks for Biology: ");
    scanf("%d", &biology);

    printf("Enter marks for Maths: ");
    scanf("%d", &maths);

    printf("Enter marks for Computer: ");
    scanf("%d", &computer);

    totalMarks = physics + chemistry + biology + maths + computer;
    percentage = (totalMarks * 100) / 500;

    if (percentage >= 90) {
        grade = 'A';
        }  else if (percentage >= 80) 
    { grade = 'B';
    }  else if (percentage >= 70) 
    {  grade = 'C';
    } else if (percentage >= 60) 
    {   grade = 'D';
    }  else if (percentage >= 40) 
    { grade = 'E';
    }  else 
    {  grade = 'F';
    }

    printf("Percentage: %d%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}