#include<stdio.h>
struct time
{
int hour,minute,second;
};
int main()
{
int t1,t2,t3;
int second1,second2,totalseconds;
printf("enter the first time in HH:MM:SS");
scanf("%d %d %d",&t1.hour,&t1.minute,&t1.second);
printf("enter the second time in HH:MM:SS");
scanf("%d %d %d",&t2.hour,&t2.minute,&t2.second);
second1=t1.hour*60*60+t1.minute*60+t1.second;
second2=t2.hour*60*60+t2.minute*60+t2.second;
totalseconds=second1-second2;
t3.min=totalseconds/60;
t3.hour=t3.min/60;
t3.min=t3.min%60;
t3.sec=total seconds%60;
printf("time diff is:%02d%02d%02d"t3.hour,t3.min,t3.sec);
}
return 0;
}
