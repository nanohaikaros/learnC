#include <stdio.h>

int main()
{
	// 初始化
	int price = 0;
	int bill = 0;
	// 读入金额和票面
	printf("请输入金额：");
	scanf("%d", &price);
	printf("请输入票面：");
	scanf("%d", &bill);
	// 找零计算
	printf("应该找您：%d\n", bill-price);
	
	return 0; 
}
