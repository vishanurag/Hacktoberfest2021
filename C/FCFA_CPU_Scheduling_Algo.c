// This code is made my Anurag Vishwakarma
// GitHub Link: https://github.com/vishanurag/
// My Portfolio: https://vcma.rf.gd/Portfolio/

# include <stdio.h>
int main()
{
	int no_of_process,i=1;
	float avg_waiting_time = 0 ,avg_turnaround_time = 0 , wait_arr [no_of_process] , time [no_of_process] , avg_wait = 0,avg_turnaround = 0 , turntaround_arr [no_of_process];
	
	printf("Enter total number of processes : ");
	scanf("%d",&no_of_process);
	time [0] = 0;
	while ( i<=no_of_process )
	{
		printf("Enter CPU Burst Time of process %d :  ",i);
		scanf("%f",&time [i]);
		avg_wait += time [i-1];
		wait_arr [i-1] = avg_wait;
		avg_turnaround += time [i];
		turntaround_arr [i-1] += avg_turnaround;
		avg_waiting_time += wait_arr [i-1];
		avg_turnaround_time += turntaround_arr [i-1];
		if ( time [i]<0 ){ break; }
		i++;	
	}
	avg_waiting_time = avg_waiting_time/no_of_process;
	avg_turnaround_time = avg_turnaround_time/no_of_process;
	if ( time [i] < 0 ){ printf(" : Invalid Input :"); }
	else
	{
		printf("\nAverage Waiting Time is : %f", avg_waiting_time);
		printf("\nAverage Turn Around Time is : %f", avg_turnaround_time);
	}
	return 0;
}
