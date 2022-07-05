#include<stdio.h>


void Insertion_sort1(int arr[],unsigned int num){     // increase order 
	
	unsigned int count,hole;
	int value ;
	
	for(count = 1 ;count < num ;count++){
		 
		 value = arr[count];
		 hole = count;
		 
		 while(hole>0 && value < arr[hole-1]){
		 	
		 	arr[hole] = arr[hole-1] ;
		 	hole--;
		 	
		 }
		 arr[hole] = value ;
	}
	
}

void Insertion_sort2(int arr[],unsigned int num){     // decrease order 
	
	unsigned int count,hole;
	int value ;
	
	for(count = 1 ;count < num ;count++){
		 
		 value = arr[count];
		 hole = count;
		 
		 while(hole>0 && value > arr[hole-1]){
		 	
		 	arr[hole] = arr[hole-1] ;
		 	hole--;
		 	
		 }
		 arr[hole] = value ;
	}
	
}

void print(int arr[],unsigned int num){
	int i = 0 ;
	for(;i<num;i++){
		printf("%d  ", arr[i]);
	}
	
	printf("\n");
}

int main(){
	int arr[] = {11,12,122,9,8,7,6,5,4,3,2,1} ;              /// unsorted array 
	
	print(arr,sizeof(arr)/sizeof(arr[0])) ;
	Insertion_sort2(arr,sizeof(arr)/sizeof(arr[0])) ;
	print(arr,sizeof(arr)/sizeof(arr[0])) ;
	
}
