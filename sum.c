#include <stdio.h>
#include <unistd.h>

int main(void)
{
	  int a = 3;
	  int b = 14;
	  int sum = a + b;

	  pid_t pid;
	  pid = getpid();
	  
	  printf("sum is %d\n", sum);
	  printf("current pid is %d\n", pid);

	  return (0);
}
