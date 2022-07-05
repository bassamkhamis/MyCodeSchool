#include<stdio.h>
#include<string.h>


int binary_serch(int a[],int num, int data){
	
	int start = 0 , end = num - 1 , mid ;
	while (start <= end ){
		 mid = (start + end ) / 2;
		 
		 if(data == a[mid])
           return mid ;
		   
		 else if (data < a[mid]) 
		   end = mid - 1 ;
		   
		else start = mid + 1 ; 		
	}
	
	return -1 ;
}	
int binary_serch_recurse(int a[],int start,int end , int data)	{
     if(start > end) return -1 ;
	int mid = start + (end-start ) / 2 ;
          
		 if(data == a[mid])
           return mid ;	
		 else if (data < a[mid]) 
		return binary_serch_recurse(a,start,mid-1,data );
		   
		   else 
		   return binary_serch_recurse(a,mid + 1, end, data ); 	
}
int main(){
	
	int arr[]={1,1,2,2,3,3,3,7,8,9,11,13,15};

   int check = binary_serch_recurse(arr, 0,sizeof(arr)/sizeof(int) -1 ,3);
   
   if(check != -1)
    printf("is found at index [%d]", check);
    
   else printf(" not found ") ;
	
}
