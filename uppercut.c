#include <stdio.h>
void print_string(char s []);
void print_string2(char s[]);

int main() {
	char s[] = {'c', 'i', 'a', 'o', '\0'};
	print_string1(s);
	printf("\n");
	print_string2(s);
	printf("\n%s\n", s);
	return 0;
}

void print_string(char s[]) {
	int i = 0;

	while (s[i] != '\0') {
		printf("%c", s[i++]);

	}
}

void print_string2(char s[]) {
	for (int i = 0; s[i] !='\0'; i++) {
		printf("%c", s[i]);
	}
}
