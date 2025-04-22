#include<stdio.h>
// Function declaration
int Total(int marks[], int size)
{
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }
    return sum;
}
float Avg(int total, int size)
{
    return total / 5.0;
}

char Grade(float avg)
{
if(avg >= 90)
    {
        printf("Grade A");
    }

    else if (avg >= 75)
    {
        printf("Grade B");
    }

    else if(avg >= 60)
    {
        printf("Grade C");
    }

    else if(avg >= 40)
    {
        printf("Grade D");
    }

    else
    {
        printf("Grade F"); // F for Fail
    }
}

int main()
{
    int marks[5];
    int total;
    float avg;
    char grade;
     
    printf("Student Marks Calculator\n");

    //Input Marks
    for(int i = 0; i < 5; i++)
    {
        printf("Enter marks for subjects %d: ", i + 1);
        scanf("%d", &marks[i]);

        if(marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks. Please enter values between 0 & 100. \n");
            i--;
        } 
    }
    
    //Calculations
    total = Total(marks, 5);
    avg = Avg(total , 5);
    grade = Grade(avg);

    //Output Result
    printf("\n----Results----\n");
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", avg);

    return 0;
}