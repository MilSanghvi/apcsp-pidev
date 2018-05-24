
#include<stdio.h>

int main()
{
  int a = 545;
  float b = 4.2;
  double c = 500;
  char d = 'A';
  unsigned int e = 52;
  short int f = 432;

  // print value and size of an int variable
  printf("int a value %d (oct %o, hex %x) and size %d bytes.\n", a, a, a, sizeof(a));
  printf("float b balue %d (oct %o, hex %x) and size %d bytes.\n", b, b, b, sizeof(b));
  printf("double c value %d (oct %o, hex %x) and size %d bytes.\n", c, c ,c, sizeof(c));
  printf("char d value %c and size %d bytes.\n", d, d, d, sizeof(d));
  printf("unsigned int e value %d (oct %o, hex %x) ans size of %d bytes.\n", e, e, e, sizeof(e));
  printf("short int f value %d (oct %o, hex %x) ans size of %d bytes.\n", f, f, f, sizeof(f));
}


