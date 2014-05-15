#include <stdio.h>
#include <stdlib.h>
#define MAX 50;
int dtoi(char);
main()
{
  FILE *fp;
  int i, j, a, b, c, d;
  char non[MAX], grade[MAX][MAX];

  fp = fopen("grade.csv", "r");
  if(fp == NULL)
    {
      printf("file open error.\n");
      exit(0);
    }

  for(i=0; i<MAX; i++)
    {
      a = fscanf(fp, "%c", &non[i]);
      if(a == '\n') break;
    }

  while(1)
    {
      b = fgetc(fp);
      for(i=0; i<MAX; i++)
	{
	  for(j=0; j<MAX; j++)
	    {
	      c = fscanf(fp, "%c", &grade[i][j]);
	      if(c == '\n')break;
	    }
    }
    }
  for(i=0; i<5; i++)
    {
      for(j=0; j<MAX; j++)
	{
	  printf("%d", grade[i][j]);
	}
    }
  fclose(fp);
}


int dtoi(char c)
{
  switch(c)
    {
    case '0':return 0;
    case '1':return 1;
    case '2':return 2;
    case '3':return 3;
    case '4':return 4;
    case '5':return 5;
    case '6':return 6;
    case '7':return 7;
    case '8':return 8;
    case '9':return 9;
    }
}
