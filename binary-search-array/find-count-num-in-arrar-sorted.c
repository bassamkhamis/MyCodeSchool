#include<stdio.h>
typedef enum un{ false,true
}boolen;



int binary_serch_last_occurrence(int a[],int num, int data);
int binary_serch_frist_occurrence(int a[],int num, int data);
int find_dublicated_number1(int arr[],int num,int data);
int find_dublicated_number2(int arr[],int num,int data);

int binary_serch_(int a[],int num, int data,boolen stuts){
	
		int start = 0 , end = num - 1 , mid,resurt = -1  ;
	while (start <= end ){
		 mid = (start + end ) / 2;           /*  start + (end - start)/2   */
		 
		 if(data == a[mid]){
		   resurt = mid ;
		   if(stuts)
           start = mid + 1 ;
           
           else end = mid - 1 ;
		  } 
		 else if (data < a[mid]) 
		   end = mid - 1 ;
		   
		else start = mid + 1 ; 		
	}
	
	return resurt;
	
}



int main(){
	
	int arr[]={1,1,2,2,2,2,2,2,2,2,3,3,3,3,3,7,8,9,11,13,15};

   int check = find_dublicated_number2(arr,sizeof(arr)/sizeof(int),2);
   
   if(check != -1)
    printf("is found %d times", check);
    
   else printf(" not found ") ;
   
   return 00 ;
	
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

int find_dublicated_number1(int arr[],int num,int data){
        
          int frist = binary_serch_frist_occurrence( arr, num, data);
          if( -1 == frist ) return frist ;
          int count = 0 ;
          while(arr[frist] == data){
          	count++;
          	frist++;
		  }
		  
		  return count;
}

int find_dublicated_number2(int arr[],int num,int data){
	
	int frist = binary_serch_( arr, num, data,false);
	int last = binary_serch_( arr, num, data,true);
	
	if(-1 == frist || -1 == last )return -1 ;
	else {
		return last - frist + 1 ;
	}
}

