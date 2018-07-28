void strcat(char *s, char *t)
{
  while ((*s++) != '\0')
    ;
  while (((*s++) = (*t++)) != '\0')
    ;
}
