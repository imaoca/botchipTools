#include <stdio.h>

int main(int argc, char* argv[]) {
//	printf("%s\n", argv[1]);
	char c;
	printf("void %s(void){\n", argv[1]);
	printf("asm volatile(\n");
	printf("\"ldi r16,0xaa\"  \"\\n\\t\"\n");						// "ldi r16,0xaa"
	printf("\"ldi r17,0x55\"  \"\\n\\t\"\n");						// "ldi r17,0x55"
	while (EOF != (c = getchar())) {
		if (c == '0') {
			printf("\"out 0x05, r17\"  \"\\n\\t\"\n");
			printf("\"out 0x05, r16\"  \"\\n\\t\"\n");
		}
		if (c == '1') {
			printf("\"out 0x05, r16\"  \"\\n\\t\"\n");
			printf("\"out 0x05, r17\"  \"\\n\\t\"\n");
		}
	}
	//	printf("\"ret\"  \"\\n\\t\"\n");	//write(1, ret, 2);
	printf(");\n}");
}