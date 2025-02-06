#include <stdio.h>
#include <math.h>

int sum (int, int, int);

int main() {
	// 1
//	printf("Hello, World!\n");
	
	// 2
//	int a;
//	printf("Enter the number: ");
//	scanf("%d", &a);
//	
//	int l = a % 10;
//	a /= 10;
//	
//	printf("The last digit of the number: %d\n", l);
//	printf("The number after removing the last digit: %d", a);

	// 3
//	int a;
//	printf("Enter the number: ");
//	scanf("%d", &a);
//	
//	int l = a / 100;
//	a -= (l * 100);
//	printf("The last two digits: %d", a);
	
	// 4
//	int a;
//	printf("Enter the number: ");
//	scanf("%d", &a);
//	
//	a /=  100;
//	
//	printf("The number after removing the last two digits: %d", a);


	// 5
//	int a;
//	printf("Enter the number: ");
//	scanf("%d", &a);
//	
//	int l = 2 * (a % 10);
//	
//	printf("The double of the last digit of the number: %d", l);

	// 6
//	int a;
//	printf("Enter the number: ");
//	scanf("%d", &a);	
//
//	int l = a / 100;
//	
//	int i;
//	for (i = 0; i < 2; i++) {
//		l = l * 10 + a % 10;
//		a /= 10;
//	}
//
//	printf("The number after swapping the last two digits: %d", l);

	// 7
//	int a, b, c;
//	printf("Enter the sides (space-separated): ");
//	scanf("%d %d %d", &a, &b, &c);
//	
//	float s = (a + b + c) / 2;
//	
//	float area = sqrt(s * (s - a) * (s - b) * (s - c));
//	
//	printf("The area of the triangle is %.2f", area);

	// 8
//	int a;
//	printf("Enter the number: ");
//	scanf("%d", &a);
//	
//	int l = 0;
//	while (a) {
//		l = l * 10 + a % 10;
//		a /= 10;
//	}
//	
//	printf("The number reversed is %d", l);

	// 9
//	int x1, y1, x2, y2;
//	printf("Enter the coordinates x1, y1, x2, y2 respectively (space-separated): ");
//	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//	
//	float d = sqrt((x1 - x2 ) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//	
//	printf("The distance between (%d, %d) and (%d, %d) is %.2f", x1, y1, x2, y2, d);
	
	// 10
//	int s[3];
//	printf("Enter the sides (space-separated): ");
//	scanf("%d %d %d", &s[0], &s[1], &s[2]);
//	
//	int i, j, temp;
//	for (i = 0; i < 3; i++) {
//		for (j = i; j < 3; j++) {
//			if (s[j] < s[i]) {
//				temp = s[i];
//				s[i] = s[j];
//				s[j] = temp;
//			}
//		}
//	}
//	
//	if (s[2] * s[2] == s[1] * s[1] + s[0] * s[0]) {
//		printf("The triangle is right-angled.");
//	}
	
	// 11
//	int n;
//	printf("Enter the number of lines: ");
//	scanf("%d", &n);
//	
//	int i, j, k;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j <= n - i; j++) {
//			printf(" ");
//		}
//		for (k = 0; k <= i; k++) {
//			printf("* ");
//		}
//		printf("\n");
//	}

	// 12
	
//	int arr[3][3] = {
//						{1, 2, 3}, 
//						{4, 5, 6}, 
//						{7, 8, 9}
//					};
//	
//	int i, j;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}

	// 13
	int a, b, c;
	printf("Enter the sides (space-separated): ");
	scanf("%d %d %d", &a, &b, &c);
	
	int r = sum(a, b, c);
	
	printf("The sum of %d, %d, %d is %d", a, b, c, r);

	
	return 0;
}

int sum(a, b, c) {
	return a + b + c;
}
