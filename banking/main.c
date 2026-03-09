#include "header.h"

bool sessionActive = false;

int banner() {

	printf("                                                                                                                        \n                                                                                                                        \nBBBBBBBBBBBBBBBBB                                      kkkkkkkk             iiii                                        \nB::::::::::::::::B                                     k::::::k            i::::i                                       \nB::::::BBBBBB:::::B                                    k::::::k             iiii                                        \nBB:::::B     B:::::B                                   k::::::k                                                         \n B::::B     B:::::B  aaaaaaaaaaaaa  nnnn  nnnnnnnn     k:::::k    kkkkkkkiiiiiiinnnn  nnnnnnnn       ggggggggg   ggggg \n B::::B     B:::::B  a::::::::::::a n:::nn::::::::nn   k:::::k   k:::::k i:::::in:::nn::::::::nn    g:::::::::ggg::::g \n B::::BBBBBB:::::B   aaaaaaaaa:::::an::::::::::::::nn  k:::::k  k:::::k   i::::in::::::::::::::nn  g:::::::::::::::::g \n B:::::::::::::BB             a::::ann:::::::::::::::n k:::::k k:::::k    i::::inn:::::::::::::::ng::::::ggggg::::::gg \n B::::BBBBBB:::::B     aaaaaaa:::::a  n:::::nnnn:::::n k::::::k:::::k     i::::i  n:::::nnnn:::::ng:::::g     g:::::g  \n B::::B     B:::::B  aa::::::::::::a  n::::n    n::::n k:::::::::::k      i::::i  n::::n    n::::ng:::::g     g:::::g  \n B::::B     B:::::B a::::aaaa::::::a  n::::n    n::::n k:::::::::::k      i::::i  n::::n    n::::ng:::::g     g:::::g  \n B::::B     B:::::Ba::::a    a:::::a  n::::n    n::::n k::::::k:::::k     i::::i  n::::n    n::::ng::::::g    g:::::g  \nBB:::::BBBBBB::::::Ba::::a    a:::::a  n::::n    n::::nk::::::k k:::::k   i::::::i n::::n    n::::ng:::::::ggggg:::::g  \nB:::::::::::::::::B a:::::aaaa::::::a  n::::n    n::::nk::::::k  k:::::k  i::::::i n::::n    n::::n g::::::::::::::::g  \nB::::::::::::::::B   a::::::::::aa:::a n::::n    n::::nk::::::k   k:::::k i::::::i n::::n    n::::n  gg::::::::::::::g  \nBBBBBBBBBBBBBBBBB     aaaaaaaaaa  aaaa nnnnnn    nnnnnnkkkkkkkk    kkkkkkkiiiiiiii nnnnnn    nnnnnn    gggggggg::::::g  \n                                                                                                               g:::::g  \n                                                                                                   gggggg      g:::::g  \n                                                                                                   g:::::gg   gg:::::g  \n                                                                                                    g::::::ggg:::::::g  \n                                                                                                     gg:::::::::::::g   \n                                                                                                       ggg::::::ggg     \n                                                                                                          gggggg        \n");

	return 0;
}

int menu(char option[], int size) {

	if (sessionActive) {
		printf("...\n");
	}
	else {
		printf("Please Select an Option from Below:\n1. Register\n2.Log In\n3.Quit\n");
	}

	fgets(option, size, stdin);

	return 0;

}

int updateSessionState() {

	if (sessionActive) {
		sessionActive = false;
	}
	else {
		sessionActive = true;
	}
	
	return 0;
}

int createUser() {
	
	char username[32];
	char pwd[128];
	bool invalid = true;

	while(invalid) {
		
		try {
			printf("Please enter your desired username:\n");
			fgets(username, sizeof(username), stdin);
			strcat(username, "\n");
			invalid = false;
		}
		catch {
			invalid = true;	
		}	
		

	}
	
	invalid = true;
	
	while (invalid) {

		try {
			printf("Please enter your password:\n");
			fgets(pwd, size(pwd), stdin);
			strcat(pwd, "\n");
			invalid = false;
		}
		catch {
			invalid = true;
		}



	return 0;
}

int recordData(char fileName[], int nameSize, char data[], int dataSize) {

	FILE *fileptr;

	char file[nameSize + 10];
	file = strcat("users/", fileName);

	fileptr = fopen(file, "w");

	if (fileptr == NULL)	{
		printf("Unable to create the file.\n");
		exit(1);
	}

	fwrite(data, 1, dataSize, fileptr);

	fclose(fileptr);

 	return 0;

}

int main() {

	banner();

	return 0;
}
