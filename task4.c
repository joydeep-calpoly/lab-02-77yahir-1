#include<stdio.h>

int main(int argc, char *argv[]) {
	
	if (argc < 1) {
		printf("Not enough arguments");
		return 1;
	}
	for (int i = 0; i < argc; i++) {
		if (argv[i][0] == '-') {
			printf("%s\n", argv[i]); 
		}
	}
	return 0;

}
