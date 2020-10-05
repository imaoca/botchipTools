#include <stdio.h>

void main(void) {
	int n[2],i;
	char c[2];

	 i = 0;
	while ((c[i] = getchar()) != EOF) {
		if ((c[i] >= '0') && (c[i] <= '9')) n[i] =c [i++] - '0';
		if ((c[i] >= 'A') && (c[i] <= 'F')) n[i] =c [i++] - 'A' + 10;
		if ((c[i] >= 'a') && (c[i] <= 'f')) n[i] = c[i++] - 'a' + 10;
		if (i == 2) {
			for (i = 0; i < 4; i++)putchar((n[1] >> i & 0x01)+'0');
			for (i = 0; i < 4; i++)putchar((n[0] >> i & 0x01)+'0');
			i = 0;
		}
	}
}