#include<stdio.h>
int main(){
    int array[8] = {0,0,0,1,2,1,1,1};
    // Frequency array to store the frequency of the ovservations. freq[2] = 100 means 2 appears 100 times
    int freq[3];
    
    for(int i =0 ; i< 3; i++)
        freq[i] = 0;
    for(int i =0; i< 8; i++){
        freq[array[i]]++;
    }
    int max_number = 0;
    int max_value = freq[0];
    for(int i = 0; i< 3; i++){
        if(freq[i] > max_value){
            max_value = freq[i];
            max_number = i;
        }
    }
    printf("Mode of of array is %d  and frequency is %d\n",max_number, max_value);
}