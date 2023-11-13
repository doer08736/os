# include <stdio.h>
# include <unistd.h>

void main(){
	int pid = fork();
	if(pid==0){
		printf("child process\n");
		printf("child process id is %d\n", getpid());
		printf("it's parent process id is %d\n", getppid());
		sleep(5);

		printf("child process after sleep=5\n");
		printf("child process id is %d\n", getpid());
		printf("it's parent process id is %d\n", getppid());
	}
	else{
		printf("parent process\n");
		sleep(10);
		printf("child process after sleep=10\n");
		printf("child process id is %d\n", getpid());
		printf("it's parent process id is %d\n", getppid());
		printf("parent terminates\n");
	}
}
