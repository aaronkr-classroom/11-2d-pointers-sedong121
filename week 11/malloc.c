#include <stdio.h>
#include <malloc.h>

int main(void) {
	char* p_name;
	p_name = (char*)malloc(20);
	if (p_name != NULL) {
		while(1) {
		printf("Enter your name: >>> ");
		gets(p_name);
		if (p_name == "Quit" || p_name == "Q") break;
		printf("Hi~~ %s~\n", p_name);
	}
		free(p_name);
	}
	else {
		printf("Error: Memory allocation error!");
	}
	return 0;
}