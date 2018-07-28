#include <stdio.h>
#include <stdbool.h>

#define MAXLINE 1000 /* 最大行的大小 */

int cgetline(char line[], int maxline);
void copy(char to[], char from[]);

/**
 * 将所有长度大于80的输入行都打印出来，不考虑长度大于最大行长度的情况
 * 下同
 */
main()
{
  int len;
  char line[MAXLINE];

  while ((len = cgetline(line, MAXLINE)) > 0) {
    if (len > 0) {
      printf("%s\n", line);
    }
  }
}
