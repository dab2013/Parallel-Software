#include <stdio.h>
#include "UserInfoStruct.h"

void main() {
	int numUsers;
	FILE * fPointer;
	struct UserInfo *newUser;

	printf("How many Users are being added: ");
	scanf_s(" %d ", &numUsers);
	newUser = malloc(sizeof(struct UserInfo)*numUsers);

	for (int i = 0; i < numUsers; i++) {
		printf("Enter in values for the new User:\n");
		printf("\tUsername: ");
		fgets(newUser[i].username, 20, stdin);
		printf("\tEmail: ");
		fgets(newUser[i].email, 20, stdin);
		printf("\tPassword: ");
		fgets(newUser[i].password, 20, stdin);

		//printf("%s \n", newUser[i].username);
	}

	//fPointer = fopen_s(&fPointer, "UserInformation.txt", "w");
	//fprintf(fPointer, "Users");//"%s %s %s \n",newUser.username, newUser.username, newUser.username);
	//fclose(fPointer);

	free(newUser);
	return 0;
}