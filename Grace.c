#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/*
1
*/
#define FT(x)int main(){int fd = open("./Grace_kid.c", O_WRONLY|O_CREAT|O_TRUNC, S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);dprintf(fd, TEXT, 10, 10, 10, 10, 10, 10, 34, 34, 10, 34, TEXT, 34, 10, 10);close(fd);}
#define TEXT "#include <fcntl.h>%c#include <unistd.h>%c#include <stdio.h>%c/*%c1%c*/%c#define FT(x)int main(){int fd = open(%c./Grace_kid.c%c, O_WRONLY|O_CREAT|O_TRUNC, S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);dprintf(fd, TEXT, 10, 10, 10, 10, 10, 10, 34, 34, 10, 34, TEXT, 34, 10, 10);close(fd);}%c#define TEXT %c%s%c%cFT(x)%c"
FT(x)
