#include<stdio.h>
//This program calculates the average of the scores of 5 students.
double avg(int arr[] , int n){
	double avg= 0.0;
	
	double sum = 0.0;
	for (int i = 0 ;i < n; ++i)
	{
		sum +=x[i];
		printf("for i = %d, sum = %lf \n ", i, sum );
		//more for checking if the right sum is being 
		//computed.
	} // for-loop
	avg = sum/n;
	return avg;
}
int mode(int arr[], int n){
	//Need to adjut the size accoding to the obersvations 
	int freq[10];
    
    for(int i =0 ; i< 10; i++)
        freq[i] = 0;
    for(int i =0; i< n; i++){
        freq[arr[i]]++;
    }
    int max_number = 0;
    int max_value = freq[0];
    for(int i = 0; i< 3; i++){
        if(freq[i] > max_value){
            max_value = freq[i];
            max_number = i;
        }
    }
	return max_number;
}
double sd(int arr[], int n, double avg){
	return 0;
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
	double average = avg(x,5);
	double mode = mode(x,5);
	double std_deviation  = sd(x,5,average);


	printf("the average score is: %lf \n", avg);

}
