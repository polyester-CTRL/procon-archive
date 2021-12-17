#include <stdio.h>
#include <string.h>

int main() {
  char s[100];
  char t[] = "Hello,World!";
  int i;
  scanf("%s", s);

  if(strcmp(s, t) == 0) {
    printf("AC\n");
  } else {
    printf("WA\n");
  }
}