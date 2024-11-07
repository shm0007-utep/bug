/*
	2-a> avg.c code calculates average of the array x

*/
#include<stdio.h>
#include<math.h>
//This program calculates the average,mode, and SD of the scores of 5 students.
double get_avg(int arr[5], int n){
	double avg= 0.0;
	double sum = 0.0;
	for (int i = 0 ;i < n; ++i)
	{
		sum +=arr[i];
	
		//more for checking if the right sum is being 
		//computed.
	} // for-loop
	avg = sum/n;
	return avg;
}
int get_mode(int arr[5], int n){
	//Need to adjut the size accoding to the obersvations 
	int freq[11];
    
    for(int i =0 ; i< 11; i++)
        freq[i] = 0;
    for(int i =0; i< n; i++){
        freq[arr[i]]++;
    }
    int max_number = 0;
    int max_value = freq[0];
    for(int i = 0; i< 11; i++){
        if(freq[i] > max_value){
            max_value = freq[i];
            max_number = i;
        }
    }
	return max_number;
}
double get_sd(int arr[5], int n, double avg){
	double sd  = 0.0;
	for(int i =0; i< n; i++){
		sd += ((avg -  arr[i]) *(avg -  arr[i]) ); 
	}
	sd = sqrt(sd/n);
	return sd;
}
int main(){
	//int n = 5;
	//int max_student_size = 1000;
	int x[5];//array of variable length. 
	//x[1]= x[2]= wrong because 
	// indexing begins at 0. x[0] and x[1].

	x[0]= 10;
	x[1]= 7;
	x[2]= 5;
	x[3]= 9;
	x[4]= 10;
	double average = get_avg(x,5);
	
	int mode = get_mode(x,5);
	double std_deviation  = get_sd(x,5,average);


	printf("the average score is: %lf\n", average);
	printf("the mode is: %d\n", mode);
	printf("the standerd deviation is: %lf\n", std_deviation);
	
	

}
