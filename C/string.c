#include <stdio.h>

typedef char * string;

int main(void)
{
  string strs[5];  // Make 5 strings
  int i;

  strs[0] = "first string";
  strs[1] = "second string";
  strs[2] = "third string";
  strs[3] = "this is the fourth string";
  strs[4] = "and finally this is the fifth string";

  for(i = 0; i < 5; ++i)
    puts(strs[i]);

  return 0;
}
