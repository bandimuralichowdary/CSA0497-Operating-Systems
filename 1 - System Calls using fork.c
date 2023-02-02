#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
	pid_t p;
	printf("before fork\n");
	p=fork();
	if(p==0)
	{
		printf("I am child having ID %d\n",getpid());
		printf("My parent's ID is %d\n",getppid());
	}
	
	else
	{
		printf("My child's ID is %d\n",p);
		printf("I am parent having ID %d\n",getpid());
	}
	
	printf("Common\n");
}
