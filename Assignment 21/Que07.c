// 7. Write a program to calculate the difference between two time periods. 

#include<stdio.h>
#include<string.h>
struct Time{
    int hour;
    int minute;
};

int main(){
    struct Time start_time, end_time, difference;
    
    printf("Enter Start Time(HH:MM) in 24hr Format : ");
    scanf("%d %d",&start_time.hour,&start_time.minute);

    printf("Enter End Time(HH:MM) in 24hr Format : ");
    scanf("%d %d",&end_time.hour,&end_time.minute);

    printf("Start time\n");
    printf("%d %d \n",start_time.hour,start_time.minute);
    printf("end time\n");
    printf("%d %d\n",end_time.hour,end_time.minute);


    if(start_time.minute<end_time.minute){
        start_time.minute +=60;
        start_time.hour -= 1;

        difference.hour = start_time.hour - end_time.hour;
        difference.minute = start_time.minute - end_time.minute;
    }
    else if(start_time.hour<end_time.hour){
        difference.hour = end_time.hour - start_time.hour;
        difference.minute = start_time.minute - end_time.minute;
    }
    else {
        difference.hour = start_time.hour - end_time.hour;
        difference.minute = start_time.minute - end_time.minute;
    }

    printf("Time Difference is: %d:%d ( %d hr and %d minutes ) \n",difference.hour,difference.minute,difference.hour,difference.minute);
    return 0;
}