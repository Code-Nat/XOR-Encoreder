#include <stdio.h>
#include <stdlib.h>

char* encrypet()
{
	char plaintext[51] = { '\0' };
	char key[51] = { '\0' };
	int i = -1, j;
	char *secret = NULL;
	printf("\nEnter plaintext:");
	scanf_s("%s", plaintext,51);
	printf("\nPlease Enter key:");
	scanf_s("%s", key,51);

	while (plaintext[++i] != '\0');
	j=i++;
	secret = (int*)malloc(sizeof(int) * i);
	secret[--i] = '\0';
	i--;
	for (; i > -1; i--)
	{
		secret[i] = (((key[i] > '9') ? ((key[i] >= 'a') ? key[i] - 'a' + 10 : key[i] - 'A' + 10) : key[i] - '0') ^ plaintext[i]);
		printf("\nDebug plaintext=%c", plaintext[i]);
	}
	return secret;



}

char* deencrypet()
{

	printf("Not working at this time, Sorry");
	
	return "\0";
}

int main()
{
	int i;
	char c[20] = {'\0'};
	char* temp = NULL;
	printf("Enter E to encrypet or D for decripting: ");
	*c = getchar();
	if (c[0] == 'e' || c[0] == 'E')
	{
		temp = encrypet();
		printf("\nThe encripted text: ");
		while (*temp != '\0')
			printf("%x ", *(temp++));
	}
	else
	{
		temp = deencrypet();
		printf("\nThe plaintext text: ");
		while (*temp != '\0')
			printf("%c ", *(temp++));
	}

	return 0;
}