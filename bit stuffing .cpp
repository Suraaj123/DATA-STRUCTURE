//BIT STUFFING 
#include<stdio.h>
int main()
{
	char data[20],stuffdata[30];
	int i=0,j=0,count=0;
	printf("enter the data");
	scanf("%s",data);
	while(data[i]!=0)
	{
		stuffdata[j]=data[i];
		if(data[i]==1)
		{
			count=count+1;
		}
		else
		{
			count=0;
		}
		if(count=5)
		{
			stuffdata[j++]=0;
			count=0;
		}
		i++;
		j++;
	}
	stuffdata[j]=0;
	printf("orignal data %s",data);
	printf("%s",stuffdata);
	return 0;
}
