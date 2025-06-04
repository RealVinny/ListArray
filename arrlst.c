#include <ctype.h>
#include <stdio.h>
#include <strings.h>

char buffer[500];
char * pBuffer = &buffer[sizeof(buffer)];

void listItem(const char list[][25]) {
	for (int i = 0; i < 25; i ++) {
		if (list[i][0] != '\0') {
			printf("%s\n", list[i]);
		}
	}
}

void addItem(char * list[][], int * quant, int quantMax) {
	while (1 == 1) {
		if ( quantMax > *quant) {

			printf("Insert the name of the new item\n->");
			scanf("%150s", buffer);

			for (int i = 0; i < sizeof(list); ++i) {
				if (list[i][0] != '\0') {
					for (int j = 0; j < sizeof(list); ++i) {

						if (buffer[j] != '\0') {

							*list[i][j] = buffer[j];

						}

					}
					break;
				}
			}

	}else{
		printf("List is full");
		break;
	}

	}
}

void removeItem(char * buff, char * list[][25]) {

	while (1 == 1) {

		printf("Do you wish to see the current list itens ?[Y/N]\n->");
		scanf("%150s", buff);

		if (*buff == 'Y') {
			listItem(list);
		}

		printf("Informe o item para ser removido\n -> ");
		scanf("%150s", buff);

		for (char c : buffer) {
			buffer[c] = tolower(buffer[c]);
		}

		if (buffer[0] == 'y') {
			break;
		}

		for (int i = 0; i < sizeof(*list); i++) {
			if (strcasecmp(list[i], buff) == 0) {
				for (int j = 0; j < sizeof(*list); j++) {
					list[i][j] = '\0';
				}
				break;
			}
			printf("Item não encontrado !")	;
		}
	}
}
