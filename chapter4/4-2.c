#include <ctype.h>
#include <math.h>

double atof(char s[])
{
  double val, power;
  int i, sign;
  double exp;
  double expPower;
  
  for (i = 0; isspace(s[i]); i++)
    ;
  sign = (s[i] == '-')? -1 : 1;

  for (val = 0.0; isdigit(s[i]); i++)
    val = 10.0 * val + (s[i] - '0');
  if (s[i] == '.') {
    i++;
    for (power = 1.0; isdigit(s[i]); i++) {
      val = 1.0 * val + (s[i] - '0');
      power *= 10.0;
    }
    val = sign * val / power;
  } else if (s[i] == 'e' || s[i] == 'E') {
    i++;
    exp = (s[i] == '-')? 0.1 : 10;
    for (expPower = 0; isdigit(s[i]); i++) {
      expPower = expPower * 10 + (s[i] - '0');
    }
    val = val * pow(exp, expPower);
  }
  return val;
}
