// assuse the s is long enough to hold t
// and ignore \ case
void escape(char s[], char t[]) {
  int i, j;
  i = j = 0;
  while (t[i] != '\0') {
    if (t[i] == '\t') {
      s[j++] = '\\';
      s[j++] = 't';
      i++;
    } else if (t[i] == '\n') {
      s[j++] = '\\';
      s[j++] = 'n';
      i++;
    } else {
      s[j++] = t[i++];
    }
  }
  s[j++] = t[i++];
}

void encape(char s[], char t[]) {
  int i, j;
  i = j = 0;
  int escape = 0;

  while (t[i] != '\0') {
    if (escape) {
      if (t[i] == 't') {
        s[j++] = '\t';
        i++;
      } else if (t[i] == '\n') {
        s[j++] = '\n';
        i++;
      } else {
        s[j++] = '\\';
        s[j++] = t[i++];
      }
    } else {
      if (t[i] == '\\') {
        escape = 1;
      } else {
        s[j++] = t[i++];
      }
    }
  }
}
