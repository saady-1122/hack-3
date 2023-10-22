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
      












  

