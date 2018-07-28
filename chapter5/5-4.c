int strend(char *s, char *t)
{
  char *send = s;
  char *tend = t;
  while((*send++) != '\0')
    ;
  while((*tend++) != '\0')
    ;
  while(send == s || tend == s|| (*send--) == (*tend--)) {
  }

  return tend == s && send <= s;
}
