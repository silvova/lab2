﻿/*#include <stdio.h>
#define diaps(e) ( ( ((e) >= 'a') && ((e) <= 'z')  ) || ( ((e) >= 'A') && ((e) <= 'Z') ) )

int checkWord(char* s, char* getword) {

	while (*s != '\0' && *getword == *s) {
		getword++;
		s++;
	}
	return *s - *getword;
}
void copyWord(char* dst, char* src) {
	while (*src != '\0' && (*dst++ = *src++)) {}
	*dst = '\0';
}
void swap(char* o, char* p) {
	char tmp[100] = { 0 };
	copyWord(tmp, p);
	copyWord(p, o);
	copyWord(o, tmp);
}

int main() {
	char m1[1000] = { 0 };
	char m2[10][100] = { {0},{0} };
	int i = 0, n = 0, count = 0;
	printf("Entered string:\n");
	fgets(m1, 1000, stdin);
	while (m1[i] != '\n') {
		if (diaps(m1[i])) {
			m2[count][n] = m1[i];
			i++;
			n++;
			if (m1[i] == '\n') {
				break;
			}
			else {
				while (diaps(m1[i])) {
					m2[count][n] = m1[i];
					n++;
					i++;
					}
				count++;
				}
			if (m1[i] == '\n') {
				count--;
				break;
			}
			i++;
		}
		else { 
			while (!diaps(m1[i])) {
				i++;
				if (m1[i] == '\n') {
					count--;
					break;
				}
			}
		}
		if (m1[i] == '\n') {
			count--;
			break;
		}
		n = 0;
	}

	for (int x = 0; x <= count; x++) {
		for (int y = 0; y <= count; y++) {
			if (checkWord(m2[x], m2[y]) < 0) {
				swap(m2[y], m2[x]);
			}
		}
	}
	for (int a = 0; a <= count; a++) {
		printf("%s ", m2[a]);
	}
	return 0;
}*/