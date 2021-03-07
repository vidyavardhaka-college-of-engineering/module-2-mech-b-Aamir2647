//INPUT - 3 1 2 3
//OUTPUT- 3 2 1

//INSERT THE MISSING CODE 
#include<stdio.h>
	int main()
	{
	  int a[10],i,n;
	  printf("Enter size of the array and the array elements");
	  scanf("%d",&n);
	  
	  for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	  printf("Array elements in reverse order : ");
      for(i=n-1;i<=n-1;i--) 
      {
        if(a[i]<=0)
        {break;}
        else
	  {printf("%d ",a[i]);
    }}
	  return(0);
	}
