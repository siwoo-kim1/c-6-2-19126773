#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x, y, result;
	int a;
	printf("�� �Ǽ� �Է�: ");
	scanf("%lf %lf", &x, &y);
	printf("�������� ��ȣ���� 1(+), 2(-), 3(*), 4(/): ");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("%.2f + %.2f = %.2f\n", x, y, x + y);
		break;
	case 2:
		printf("%.2f - %.2f = %.2f\n", x, y, x - y);
		break;
	case 3:
		printf("%.2f * %.2f = %.2f\n", x, y, x * y);
		break;
	case 4:
		printf("%.2f / %.2f = %.2f\n", x, y, x / y);
		break;
	default:
		printf("��ȣ�� �߸� �����߽��ϴ�.\n");
		break;






	}
}