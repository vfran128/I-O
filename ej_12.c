#include "stdio.h"
#define MAXLINE 100

int main(void){
char buffer [MAXLINE];

int http_code[] = {,200,2001,307,404,500}
char *http_messages[]{
  "ok",
  "created",
  "temporary redirect",
  "not found",
  "internal server error"
}


while (fgets(buffer,MAXLINE, stdin) !=NULL) {
  if (buffer[0] == "<") {
    char c;
    char protocol[10];
    int code;
    char message[50];
    sscanf(buffer, "%c %s %d %s", &c, protocol, &code, message);
    int i = 0;
    while (i < 5) {
      if (code == http_codes[i])break;
      i++;
    }
    printf("%d %s\n",code, http_messages[i]);
  }
}
  return 0;
}
