#include <stdio.h>
#include <math.h>

float sum(float, float, float);
int is_armstrong_num(int);

int main() {
	// 1
//	printf("Hello, World!\n");
	
	
	// 2
//	int a;
//	printf("Enter the number: ");
//	scanf("%d", &a);
//	printf("The last digit of the number is %d\n", a % 10);
//	
//	a /= 10;
//	printf("The number after removing the last digit is %d", a);
	
	
	// 3
//	int a, b, c;
//	printf("Enter the number: ");
//	scanf("%d", &a);
//	b = a;
//	a /= 10;
//	c = b - 10 * a;
//	printf("The last digit of the number is %d\n", c);
	

	// 4
//	int a;
//	printf("Enter the number: ");
//	scanf("%d", &a);
//	a /= 100;
//	
//	printf("The number after removing the last digit is %d", a);

	
	// 5
//	int a;
//	printf("Enter the number: ");
//	scanf("%d", &a);
//	a = 2 * (a % 10);
//
//	printf("The double of the last digit is %d", a);
	
	
	// 6
//	int a, l;
//	printf("Enter the number: ");
//	scanf("%d", &a);
//	
//	l = a / 100;
//	
//	int i;
//	for (i = 0; i < 2; i++) {
//		l = l * 10 + a % 10;
//		a /= 10;
//	}
//
//	printf("The number after swapping the last two digits is %d", l);


	// 7
//	float a, b, c, s, area;
//	printf("Enter the sides separated by spaces: ");
//	scanf("%f %f %f", &a, &b, &c);
//	
//	s = (a + b + c) / 2;
//	area = sqrt(s*(s-a)*(s-b)*(s-c));
//	
//	printf("The area of the triangle is %.2f", area);


	// 8
//	int a, b = 0;
//	printf("Enter the number: ");
//	scanf("%d", &a);
//	
//	while (a) {
//		b *= 10;
//		b += a % 10;
//		a /= 10;
//	}
//	
//	printf("The value after reversing the integer is %d", b);


	// 9
//	float x_1, y_1, x_2, y_2;
//	float dist;
//	
//	printf("Enter the value of x_1, y_1 (space-separated): ");
//	scanf("%f %f", &x_1, &y_1);
//	printf("Enter the value of x_2, y_2 (space-separated): ");
//	scanf("%f %f", &x_2, &y_2);
//	
//	dist = sqrt(pow((x_1 - x_2), 2) + pow(y_1 - y_2, 2));
//
//	printf("The distance between (%.2f, %.2f) and (%.2f, %.2f) is %.2f", x_1, y_1, x_2, y_2, dist);
	
	
	// 10
//	int a, b, c;
//	
//	printf("Enter the sides of the triangle (space-separated): ");
//	scanf("%d %d %d", &a, &b, &c);
//	
//	if ((a * a == b * b + c * c) ||
//		(b * b == c * c + a * a) ||
//		(c * c == a * a + b * b)) {
//		printf("Triangle with side %d, %d and %d is right-angled.", a, b, c);
//	}


	// 11
//	int n;
//	printf("Enter the number of lines to print: ");
//	scanf("%d", &n);
//	
//	int i, j;
//	int t = 1;
//	while (t <= n) {
//		for (i = 1; i < n - t; i++) {
//			printf(" ");
//		}
//		for (j = 1; j <= t; j++) {
//			printf("* ");
//		}
//		printf("\n");
//		t++;
//	}


	// 12
	
//	int arr[2][3];
//	
//	int i, j;
//	for (i = 0;  i < 2; i++){
//		for (j = 0; j < 3; j++) {
//			printf("Enter the value of arr[%d][%d]: ", i, j);
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	
//	for (i = 0;  i < 2; i++){
//		for (j = 0; j < 3; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
	
	
	// 13
//	float a, b, c, result;
//	printf("Enter the value of a, b, c (space-separated): ");
//	scanf("%f %f %f", &a, &b, &c);
//	
//	result = sum(a, b, c);
//	
//	printf("The sum of the numbers %.2f, %.2f and %.2f is %.2f",a, b, c, result);


	// 14
//	int a;
//	printf("Enter the number: ");
//	scanf("%d", &a);
//	
//	if (is_armstrong_num(a)) {
//		printf("%d is an armstrong number.", a);
//	}
//	else {
//		printf("%d is not an armstrong number.", a);
//	}
	
	
	// 15
//	FILE *file;
//	
//	char filename[50], ch;
//	
//	printf("Enter the filename: ");
//	scanf("%s", filename);
//	
//	file = fopen(filename, "r");
//	
//	if (file == NULL) { 
//		printf("The file can't be opened.");
//		return 1;
//	}
//	
//	while ((ch = fgetc(file)) != EOF) {
//		putchar(ch);
//	}
//	
//	fclose(file);
	
	
	
	return 0;
}

float sum(float a, float b, float c) {
	return a + b + c;
}

int is_armstrong_num(int a) {
	int n = a, t = a, d = 0;
	while (a) {
		a /= 10;
		d++;
	}
	
	int s = 0, i;
	for (i = 0; i < d; i++) {
		s += pow(n % 10, d);
		n /= 10;
	}
	
	return (t == s);
}
