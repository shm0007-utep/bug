#include<stdio.h>
#include<stdlib.h>
#define SIZE 20

#include<math.h>
//This program calculates the average, mode and SD of the scores of 20 students from file.
double get_avg(int arr[SIZE]){
	double avg= 0.0;
	double sum = 0.0;
	for (int i = 0 ;i < SIZE; ++i)
	{
		sum +=arr[i];
	}
	avg = sum/SIZE;
	return avg;
}
int get_mode(int arr[SIZE]){
	//Student can have maximum 100 points
	int freq[100];
    
    for(int i =0 ; i< 100; i++)
        freq[i] = 0;
    for(int i =0; i< SIZE; i++){
        freq[arr[i]]++;
    }
    int max_number = 0;
    int max_value = freq[0];
    for(int i = 0; i< 100; i++){
        if(freq[i] > max_value){
            max_value = freq[i];
            max_number = i;
        }
    }
	return max_number;
}
double get_sd(int arr[SIZE],double avg){
	double sd  = 0.0;
	for(int i =0; i< SIZE; i++){
		sd += ((avg -  arr[i]) *(avg -  arr[i]) ); 
	}
	sd = sqrt(sd/SIZE);
	return sd;
}
int main()
    {
          int number[SIZE]; 
          int i=0;
          FILE* in_file = fopen("scores-data.txt", "r"); //only open a pre-exisiting file in read mode. 
         
          if (! in_file ) // equivalent to saying if ( in_file == NULL ) 
             {  
                printf("oops, file can't be read\n"); 
                exit(-1); 
             } 
          // attempt to read the next line and store 
          // the value in the "number" variable 
          while ( fscanf(in_file, "%d", & number[i] ) == 1 )  
             { 
               printf("We just read %d\n", number[i]);
               i++; 
             }
         double average = get_avg(number);
         int mode  = get_mode(number);
         double sd = get_sd(number,average);
         printf("avg %lf\n",average);
         printf("mode %d\n",get_mode(number));
         printf("sd %lf\n",get_sd(number,average));
         
         
      return 0;
    }
