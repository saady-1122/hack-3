#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
   if (argc != 4){
       printf("ERROR: Invalid number of command line arguments.\n");
        return 1;
      }    


    float total_gb = atof(argv[1]);
    int current_day = atoi(argv[2]);
    float gb_used = atof(argv[3]);

    if (total_gb <= 0 || current_day <= 0 || current_day > 30 || gb_used < 0) {
        printf("ERROR: Invalid input values.\n");

        return 1;
      } 
      float average_daily_use = gb_used / current_day;
      int remaining_days = 30 - current_day;
      float remaining_gb = total_gb - gb_used;
      float allowed_daily_use = remaining_gb / remaining_days;


      printf("%d days used, %d days remaining\n", current_day, remaining_days);
      printf("Average daily use: %.3f GB/day\n", average_daily_use);

      if (average_daily_use > allowed_daily_use) {
           printf("You are EXCEEDING your average daily use (%.3f GB/day).\n", allowed_daily_use);
           printf("Continuing this high usage, you'll exceed your data plan by %.1f GB.\n", (average_daily_use - allowed_daily_use) * remaining_days);
            printf("To stay below your data plan, use no more than %.3f GB/day.\n", allowed_daily_use);
            } else if (average_daily_use == allowed_daily_use) {
             printf("You are at your average daily use limit (%.3f GB/day).\n", average_daily_use);
             printf("You can use up to %.3f GB/day and stay below your data plan limit.\n", allowed_daily_use);
            } else { 
            printf("You are under your average daily use (%.3f GB/day).\n", allowed_daily_use);
            printf("You can use up to %.3f GB/day and stay below your data plan limit.\n", allowed_daily_use);

          }
          return 0;
    }      

   /*
   OUTPUT:
   
PS E:\labwrk\hack3\hack-3> .\a.exe 20 15 5
15 days used, 15 days remaining
Average daily use: 0.333 GB/day
You are under your average daily use (1.000 GB/day).
You can use up to 1.000 GB/day and stay below your data plan limit.
   
   */

  







 
         
















  

