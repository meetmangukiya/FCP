// Copy contents of one string to another

#include <stdio.h>

int main(void) {
		int i;
		char str_1[80], str_2[80];
		printf("Enter a string: ");
		gets(str_1);
						    
		for(i = 0; str_1[i] != '\0'; i++) {
				str_2[i] = str_1[i];
		}
							    
		printf("\nstr_2: %s", str_2);
		return 0;
}


