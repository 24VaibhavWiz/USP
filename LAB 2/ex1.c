#include"stdio.h"
#include"stdlib.h"

void sort(int[],int);
void swap(int*,int*);

int main(int argc ,char *argv[])
{
	int data[argc];
	int i,count=0;
    	for(i=1;i<argc;i++)
    	{
    		data[i-1]=atoi(argv[i]);
    		count++;
    	}
    	printf("\nTotal number of elements : %d\n",count);
    	printf("\nOrginal order : ");
    	
    	for(i=0;i<argc-1;i++)
         	printf("%d ",data[i]);
         	
    	sort(data,argc-1);
    	
    	printf("\n\nIn ascending order: ");
    
    	for(i=0;i<argc-1;i++)
         	printf("%d ",data[i]);
         
    	printf("\n\n");
}

void sort(int data[],int n)
{
	int temp,step,i;
    	for(step=0;step<n-1;++step)
    		for(i=0;i<n-step-1;++i)
  	 	{
   	   		if(data[i]>data[i+1]) 
   	   			swap(&data[i],&data[i+1]);
  	  	}
}
    
void swap(int *x,int *y)
{
	int temp=*x;
            *x=*y;
            *y=temp;
}
