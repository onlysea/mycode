#include <stdio.h>

float maxNum(float num1, float num2) {
	return num1 > num2 ? num1 : num2;
}

int main(void) {
	float num1, num2,max;
//	float maxNum(float num1, float num2);
	printf("请输入num1：");
	scanf("%f", &num1);
	printf("请输入num2：");
	scanf("%f", &num2);
	max = maxNum(num1, num2);
	printf("最大值为：%f\n", max);
	printf("what`s github?\n");
	return 0;

}
