#include <stdio.h>
#include <stdbool.h>
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
  char lineTrim[MAXLINE];
  int i;
  bool inTrim = false;

  while ((len = cgetline(line, MAXLINE)) > 0) {
    if (len == 1) {
      continue;
    }

    inTrim = true;
    for (i = len - 1; i >= 0; i--) {
      if (i == '\t' || i == ' ') {
        if (inTrim) {
          continue;
        }
      } else {
        inTrim = false;
      }
    }
  }
}
