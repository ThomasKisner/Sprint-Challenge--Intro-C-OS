#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
    int i; 
    printf("There are %d command line argument(s):\n", argc);
    for (i = 0; i < argc; i++) {
        printf("   %s\n", argv[i]);
    }

  // Open directory
  DIR * dir;
  struct dirent *sd;
  
  if(argv[1] != NULL){
    
    char *path = argv[1];
    printf("arg 2%s \n", argv[1]);
     dir = opendir(path) ;
  } else {
    dir = opendir(".");
  } 
  if(dir == NULL){
    printf("error, can not open that directory \n");
    exit(1);
  }

while( (sd=readdir(dir)) != NULL)
{
  printf(">> %s \n", sd->d_name);
}
closedir(dir);
      return 0;
    }




 

  