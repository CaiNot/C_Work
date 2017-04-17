#include <stdio.h>

#define CHANGE 0

void change(char *str) {
	int i = 0;
	while(str[i]) {
		++i;
	}

	for(int j = 0; j < i; ++j) {
		if(str[j] >= 'A'&&str[j] <= 'Z')
			str[j] = str[j] - 'A' + 'a';
		else if(str[j] >= 'a'&&str[j] < 'z')
			str[j] = str[j] - 'a' + 'A';
	}

}
void main() {
	char str[100];

	scanf("%s", str);
	
	if(CHANGE)
		change(str);
	printf("%s\n",str);
}