#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main()
{
    float NumberOfSemesters;//Number of Semester the student has completed in the school.
    float NumberOfcourses;//Number of courses taken by the student in the recent semester.
    float ScoreOfEachCourse;//Scores obtained in each course.
    float WeightedAverage;//Average Score of the recent semester.
    float CWA;//The Cumulated Weighted Average of the recent semester.
    float PreviousCWA;//The Cumulated Weighted Average of the previous semester.
    float Start = 1;
    float TotalScore=0;
    float Credits;
    float WeightedScore;
    float TotalCredits;


    printf("How many semesters have you completed so far? \n");
    scanf(" %f", &NumberOfSemesters);
    printf("How many courses have you taken in the recent semester? \n");
    scanf(" %f", &NumberOfcourses);


    do{
        printf("Enter score of course %.0f: \t", Start);
        scanf(" %f", &ScoreOfEachCourse);
        printf("Enter the number of credits for course %.0f: \t",Start);
        scanf(" %f", &Credits);
        TotalCredits += Credits;
        WeightedScore = ScoreOfEachCourse*Credits;
        TotalScore += WeightedScore;
        Start++;
    }while(Start <= NumberOfcourses);

    printf("Weighted Marks:  %.2f\n",TotalScore);
    printf("Credits Offered:  %.0f\n",TotalCredits);
    WeightedAverage = TotalScore/TotalCredits;
    printf("Weighted Average:  %.2f\n", WeightedAverage);

     if(NumberOfSemesters==1){
    CWA=WeightedAverage;
   }else{printf("Enter Previous CWA:\t");
   scanf(" %f",&PreviousCWA);
   CWA=PreviousCWA+((WeightedAverage-PreviousCWA) / NumberOfSemesters);
               }
        printf("Your CWA after semester %.0f is %.2f.", NumberOfSemesters,CWA);

}
