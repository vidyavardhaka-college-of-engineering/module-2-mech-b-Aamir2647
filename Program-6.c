//INPUT -3 1 2 3
//OUTPUT- Total number of even numbers and odd numbers in the array are 1 and 2

//INSERT THE MISSING CODE 
#include<stdio.h>
int main()
{
    int arr[10];
    int i, n, num, evennum, oddnum;

    // Reads size and elements in array
    printf("Enter the number of elemens:");
    scanf("%d",&num);
    printf("Enter %d elements in array:", num);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[num]);//missing code
    }

    evennum = 0; // Assuming 0 even numbers
    oddnum  = 0; // Assuming 0 odd numbers

    for(i=0; i<n; i++)
    {
        /* If the current element of array is evennumber then increment evennumber count */
        if(arr[i]%2 == 0) //missing code
        {
            evennum++;
        }
        else
        {
            oddnum++; // increment oddnumber count
        }
    }

printf("Total number of even numbers and odd numbers in the array are %d and %d",evennum,oddnum );//missing code
printf("Total number of odd numbers in the array : %d\n", oddnum);//missing code

return(0);    
}
