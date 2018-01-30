#include <stdio.h>
#include "UserInfoStruct.h"

void main() {
	struct UserInfo newUser;
	int numUsers;
	FILE * fPointer;
	fPointer = fopen(&fPointer, "UserInformation.txt", "w");


	printf("How many Users are being added: ");
	scanf_s(" %d ", &numUsers);

	for (int i = 0; i < numUsers; i++) {

		printf("Enter in values for the new User:\n");
		puts("\tUsername: ");
		gets(newUser.username);
		puts("\tEmail: ");
		gets(newUser.email);
		puts("\tPassword: ");
		gets(newUser.password);

		fprintf(fPointer, "%s %s %s \n",newUser.username, newUser.username, newUser.username);
	}

	fclose(fPointer);
	printf("%s \n",newUser.username);
	return 0;
}