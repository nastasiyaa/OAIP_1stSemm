//laba 7
//������������� �����, ��������� ������ �� ��������� ����, � �����, ��������� �� ��������� � �������� ����. ������ ����� ����� ����� � ���������, ��������� � ��������.
//V#6
#include <stdio.h>

char make_capital_letter(char c);
char* remake_text(char* text, int text_size);

int main() {
	//const int SIZE = 20;
	char simple_str[20];
	printf("Enter your simple string @_@: ");
	gets(simple_str);
	puts(remake_text(simple_str, 20));

	return 0;
}

char make_capital_letter(char c) {
	char character = c;
	if ((int)c > 96 && (int)c < 123)
		character = (char)((int)c - 32);

	return character;
}

char* remake_text(char* text, int text_size) {
	/*
	1. ������ ����� ������ �������.
	2. ���� �����
	3. ����� ������ ������������ ������.
	4. ������������ ������ ����� ���������.
	5. ��������� 2-4 �� ����� ������.
	*/
	text[0] = make_capital_letter(text[0]);
	const char point = '.', space = ' ';
	for (int i = 1; i < text_size; i++) {
		if (text[i] == point) {
			i++;
			while (text[i] == space && (i + 1 < text_size)) {
				i++;
			}
			text[i] = make_capital_letter(text[i]);
		}
	}
	return text;
}