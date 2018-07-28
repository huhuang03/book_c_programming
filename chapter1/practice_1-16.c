#include <stdio.h>
#include <stdbool.h>

#define MAXLINE 1000 /* 最大行的大小 */

int cgetline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
  int len;
  int max;
  int lineLen;// 一行的长度，包括折行
  char line[MAXLINE];
  char longest[MAXLINE];
  bool continueLine = false;

  max = 0;
  lineLen = 0;
  while ((len = cgetline(line, MAXLINE)) > 0) {
    bool lineIsNotEnd = line[len - 1] != '\n';

    if (continueLine) {
      lineLen += len;
      if (lineLen > max) {
        max = lineLen;
      }
    } else {
      lineLen = len;
      if (lineLen > max) {
        max = lineLen;
        copy(longest, line);
      }
    }


    continueLine = lineIsNotEnd;
  }
}
