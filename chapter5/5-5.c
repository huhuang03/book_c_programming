void strncpy(char *s, char *t, int n)
{
  for (int i = 0; i < n && ((*s++) = (*t++) != '\0'); i++)
    ;
}

void strncat(char *s, char *t, int n)
{
  while ((*s++) != '\0')
    ;
  for (int i = 0; i < n && ((*s++) = (*t++) != '\0'); i++)
    ;
}

int strncmp(char *s, char *t, int n)
{
  int i;
  for (i = 0; i < n && *s == *t; s++, t++)
    if (*s == '\0')
      return 0;
  return i == n || *s == *t;
}
