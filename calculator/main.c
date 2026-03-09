#include "header.h"

// need functions to get the operation, the numbers... and to perform the operation

int getOperation(char response[], int size) {

	char *ptr = response;

	printf("Please select your operation:\n1. Add\n2.Subract\n3.Multiply\n4.Divide\nType only the number to the corresponding option.\n");

	fgets(ptr, size, stdin);
	
	return 0;

}

int getNums(double nums[]) {

	printf("Enter the first number...\n");

	scanf("%lf", &nums[0]);
	
	printf("Enter the second number...\n");

	scanf("%lf", &nums[1]);

	return 0;

}

int main() {

	char response[128];

	getOperation(response, sizeof(response));

	double nums[2];

	getNums(nums);

	switch (response[0]) {
	
		case '1':
			printf("%f", (nums[0] + nums[1]));
			return 0;
		case '2':
			printf("%lf\n", (nums[0] - nums[1]));
			return 0;
		case '3':
			printf("%lf\n", (nums[0] * nums[1]));
			return 0;
		case '4':
			printf("%lf\n", (nums[0] / nums[1]));
			return 0;
		default:
			printf("It seems like you picked an invalid option.\nPlease try again.\n");
			return 1;
	}
}
