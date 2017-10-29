#include<stdio.h>
int main(){
int i,j,count=0,n;
printf("\nEnter Number: ");
scanf("%d",&n);
i=1;
while(i<=n){
	if(n%i==0){
		count++;
	}

	i++;
}
if (count==2)
{
	printf("%d is a prime number\n",n);
}
else{
	printf("%d is not a prime number\n",n);
}

return 0;
}
