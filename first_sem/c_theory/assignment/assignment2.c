#include <stdio.h>

int main()
{
    int roll[5], marks[5][5], total[5];
    int i, j, pass;
    char name[5][30];
    float average[5], percentage[5];

    // Input student details
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%29s", name[i]);

        total[i] = 0;
        pass = 1;

        for (j = 0; j < 5; j++)
        {
            printf("Enter marks in Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);

            total[i] += marks[i][j];

            if (marks[i][j] < 35)
            {
                pass = 0;
            }
        }

        average[i] = total[i] / 5.0;
        percentage[i] = (total[i] / 500.0) * 100;
    }

    // Display result sheet
    printf("\n---------------- STUDENT RESULT SHEET ----------------\n");
    printf("Roll  Name       S1  S2  S3  S4  S5  Total  Average  Percentage Result\n");

    for (i = 0; i < 5; i++)
    {
        pass = 1;

        for (j = 0; j < 5; j++)
        {
            if (marks[i][j] < 35)
            {
                pass = 0;
            }
        }

        printf("%-5d %-10s ", roll[i], name[i]);

        for (j = 0; j < 5; j++)
        {
            printf("%-3d ", marks[i][j]);
        }

        printf("%-6d %-8.2f %-11.2f %s\n",
               total[i], average[i], percentage[i],
               pass ? "PASS" : "FAIL");
    }

    return 0;
}