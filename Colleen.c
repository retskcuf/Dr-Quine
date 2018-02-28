#include <stdio.h>
#define Q "char *s = "
void t(){;}
/*
1
*/
int main(void){
/*
a
*/
char *s = "#include <stdio.h>%c#define Q %cchar *s = %c%cvoid t(){;}%c/*%c1%c*/%cint main(void){%c/*%ca%c*/%c%s%c%s%c; printf(s, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, Q, 34, s, 34, 10); t(); return 0;}%c"; printf(s, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, Q, 34, s, 34, 10); t(); return 0;}
