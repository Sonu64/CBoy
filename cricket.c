#include <stdio.h>
#include <stdlib.h>

struct player
{
    char name[100];
    int age;
    int testMatchesPlayed;
    float avgRuns;
};

void displayContent(struct player*);
/* FOR QSORT => int comparator(const void* p1, const void* p2);*/

int main()
{
    struct player team[5] = {
        {"Sonu", 17, 20, 70.78},
        {"Snehasis", 18, 24, 40.98},
        {"Sonai", 19, 40, 70.90},
        {"Souvik", 15, 10, 20.78},
        {"Sangit", 17, 15, 40.78},
    };
    struct player temp;
   
    
    // Classic Selection Sort Algortihm, if you want you can use qsort() present @stdlib 
    //qsort(---something fierce here---, 5, sizeof(team), comparator);

    for(int i = 0; i < 4; i++)
    {
        for(int j = i+1; j<5; j++)
        {
            if(team[i].avgRuns > team[j].avgRuns)
            {
                temp = team[i];
                team[i] = team[j];
                team[j] = temp;
            }
        }
    }

    for(int i = 0; i < 5; i++)
    {
        displayContent(&team[i]);
    }

}

int comparator (const void * p1, const void * p2)
{
  return (*(int*) - *(int*)p2);
}

void displayContent(struct player *dost)
{
    printf("\n\n");
    printf("Player Name: %s\n", dost->name);
    printf("Age: %d\n", dost->age);
    printf("Total Test Matches played: %d\n", dost->testMatchesPlayed);
    printf("Average runs in test cricker: %f\n", dost->avgRuns);
}