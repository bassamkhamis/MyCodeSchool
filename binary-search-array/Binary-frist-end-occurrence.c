#include<stdio.h>

int binary_serch_frist_occurrence(int a[],int num, int data){
	
	int start = 0 , end = num - 1 , mid,resurt = -1  ;
	while (start <= end ){
		 mid = (start + end ) / 2;           /*  start + (end - start)/2   */
		 
		 if(data == a[mid]){
		   resurt = mid ;
           end = mid - 1 ;
		  } 
		 else if (data < a[mid]) 
		   end = mid - 1 ;
		   
		else start = mid + 1 ; 		
	}
	
	return resurt;
}

int binary_serch_last_occurrence(int a[],int num, int data){
	
	int start = 0 , end = num - 1 , mid,resurt = -1  ;
	while (start <= end ){
		 mid = (start + end ) / 2;           /*  start + (end - start)/2   */
		 
		 if(data == a[mid]){
		   resurt = mid ;
		   
           start = mid + 1 ;
		  } 
		 else if (data < a[mid]) 
		   end = mid - 1 ;
		   
		else start = mid + 1 ; 		
	}
	
	return resurt;
}

int main(){
	
	int arr[]={1,1,2,2,2,2,2,2,2,2,3,3,3,3,3,7,8,9,11,13,15};

   int check = binary_serch_last_occurrence(arr,sizeof(arr)/sizeof(int),2);
   
   if(check != -1)
    printf("is found at index [%d]", check);
    
   else printf(" not found ") ;
   
   return 00 ;
	
}

