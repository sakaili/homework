#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<Windows.h>
double rand_normal(double r_me, double sd);//返回一个方差为r_me,标准差为sd的随机数
int main() {
	double ans;
	double r_mean, r_sd;
	int n;
	printf("请依次输入所需要正态分布随机数的均值和标准差") ;
	scanf_s("%lf", &r_mean);
	scanf_s("%lf", &r_sd);
	printf("请输入需要的随机数个数");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		ans = rand_normal(r_mean, r_sd);
		printf("%lf \n", ans);
	}
	system("pause");
	return 0;
}
double rand_normal(double r_me, double sd) {
	int  i;
	const int normal_count = 1000;//样本数目采用1000个
	double ccl_num, ccl_s;
	double ccl_ar[normal_count];
	ccl_num = 0;
	for (i = 0; i < normal_count; i++) 
	{
		ccl_ar[i] = rand() % 1000 / (double)999;//生成一个[0,1]的均匀分布
		ccl_num += ccl_ar[i];
	}
	ccl_num -= ((double)normal_count*0.5);//减去0-1均匀分布的均值
	ccl_s = 1.0*(double)normal_count / 12.0;//0-1分布的方差为1/12
	ccl_s = sqrt(ccl_s);
	ccl_num /= ccl_s;//此时ccl_num接近标准正态分布的一个子集
	ccl_num *= sd;
	ccl_num += r_me;
	return ccl_num;
}
