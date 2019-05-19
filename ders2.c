#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"");
	char ch;
	printf("Bir tusa basiniz : ");
	ch = getchar();
	printf("\nGirdiginiz karakter %c dir.\n",ch);
}
