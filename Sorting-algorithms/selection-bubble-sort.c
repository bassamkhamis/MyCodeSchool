#include<stdio.h>

void bubble_sort(int arr[],int num){
	
	int count_1 , count_2  ,temp,flag;
	for(count_1 = 1 ;count_1 < num  ;count_1++){
		  flag = 0 ;
			for(count_2 = 0 ;count_2 < num  - count_1 ; count_2++){
				if(arr[count_2]>arr[count_2+1]){
						temp = arr[count_2];
	                  	arr[count_2] = arr[count_2+1];
	                 	arr[count_2+1] = temp ;
		
				flag = 1 ;	
				}
			}
			
		if( flag == 0 ) break ;	
		
	}
	
	
}
void selection_Sort(int arr[], int num){
	int count_1 , count_2 , min ,temp;
	
	for(count_1 = 0 ;count_1 < num -1 ;count_1++){
		
		min = count_1 ;
		for(count_2 = count_1 + 1;count_2 < num ; count_2++){
			if(arr[count_2] < arr[min])
			   min = count_2 ;
		}
		
		
		temp = arr[count_1];
		arr[count_1] = arr[min];
		arr[min] = temp ;
		
	}
	
}


int main(){
  int arr[] = {11,12,10,13,11,3,4,5,6,7};	
  bubble_sort(arr,sizeof(arr)/sizeof(arr[0]));
  printf("array is : \n");
  int count ;
  for(count = 0 ; count < sizeof(arr)/sizeof(arr[0]); count++)
     printf("[%d] = %d  ",count,arr[count]);
	
return 0 ;	
}
