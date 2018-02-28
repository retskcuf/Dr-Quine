#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i = 5;
char str[5000];
char str2[5000];
int main(int ac, char **av)
{
	ac = (int)ac;
	if (i == 0)
		return (0);
	if (strchr(av[0], '_'))
		i--;
	char *quine = "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%cint i = %d;%cchar str[5000];%cchar str2[5000];%cint main(int ac, char **av)%c{%cac = (int)ac;%cif (i == 0)%creturn (0);%cif (strchr(av[0], '_'))%ci--;%cchar *quine = %c%s%c;%csprintf(str, %cSully_%%d.c%c, i);%csprintf(str2, %cSully_%%d%c, i);%cFILE *file = fopen(str, %cw%c);%cfprintf(file, quine, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, quine, 34, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 10, 10, 10, 34, 34, 10, 10, 10, 34, 34, 10, 10, 10);%cfclose(file);%cchar str3[5000];%csprintf(str3, %cgcc -o %%s %%s%c, str2, str);%csystem(str3);%cchar str4[5000];%csprintf(str4, %c./%%s%c, str2);%csystem(str4);%c}%c";
	sprintf(str, "Sully_%d.c", i);
	sprintf(str2, "Sully_%d", i);
	FILE *file = fopen(str, "w");
	fprintf(file, quine, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, quine, 34, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 10, 10, 10, 34, 34, 10, 10, 10, 34, 34, 10, 10, 10);
	fclose(file);
	char str3[5000];
	sprintf(str3, "gcc -o %s %s", str2, str);
	system(str3);
	char str4[5000];
	sprintf(str4, "./%s", str2);
	system(str4);
}
