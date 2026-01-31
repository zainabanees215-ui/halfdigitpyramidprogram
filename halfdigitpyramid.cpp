#include<stdio.h>
int main(){    //code for printing half digit pyramid
	int row=1;  
	int num=1;  
	int count=0;
	int n=4;
	while(row<=n){
		printf("%d",num);
		num++;
		count++;
		if(count==row){
			printf("\n");
			row++;
			count=0;
			
		}
	}
		return 0;
	}
	/*
  first we have made two variables named row and num and set it to 1 because we we will start from row 1 and digit1
  and used the condition of while if row is less than n which in first iteration is true print 1 then increment
  num to 2 for second iteration and increment count to 1 now set an if condition
  that if rows and columns are equal move cursor to new line row is 1 count is 1 condition true cursor move
  to new line we now will increment the row and set count to 0 again
*/
/* and second iteration 2 is less than 4 true print 2 increment number to 3 for next iteration
count value is increment from 0 to 1 now row is 2 and count is 1 condition not true cursor will not
move to new line for 3rd iteration we have row=2 row less than 4 true print 3 increment num for next 
iteration count value was 1 now incremented to 2 count is equal to row cursor will move to
new line /*
