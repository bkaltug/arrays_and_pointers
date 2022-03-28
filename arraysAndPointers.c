#include<stdio.h>


int  max(int *p,int size){
	
	int temp;
	for(int i=0;i<size-1;i++){
		
		if(p[i]>p[i+1]){
			temp = p[i]; 
			p[i]=p[i+1];
			p[i+1]=temp;
		}
		
	}
	return p[size-1];
}

int main(void){
	
	int size;
	printf("Please enter the size of your array: ");
	scanf("%d",&size);
	
	int array[size];
	int *p = array;
	printf("\nPlease enter your array: ");
	for(int i=0;i<size;i++){
		scanf("%d",&array[i]);
	}

	printf("\nThe maximum of your array is %d.",max(array,size));
	
	return 0;
}
