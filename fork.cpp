#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
  pid_t pid;
  int rv;
  int status;
  switch(pid=fork()) {
  case -1:
          perror("fork");
          exit(1);
  case 0:
          printf(" CHILD: This proccess is a child!\n");
          printf(" CHILD: My PID -- %d\n", getpid());
          printf(" CHILD: PID of my parent -- %d\n", getppid());
          printf(" CHILD: Enter my return code:");
          scanf(" %d", &rv);
          printf(" CHILD: Exit!\n");
          exit(rv);
  default:
          printf("PARENT: This proccess is a parent!\n");
          printf("PARENT: My PID -- %d\n", getpid());
          printf("PARENT: Child PID %d\n",pid);
          printf("PARENT: I'm waiting for my child to exit()...\n");
          wait(&status);
          printf("PARENT: Child return code:%d\n", WEXITSTATUS(status));
          printf("PARENT: Exit!\n");
  }
  return 0;
}