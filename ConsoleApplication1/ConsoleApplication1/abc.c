#include <stdio.h>
#include <time.h>
#include <string.h>
#define N 20  //用来确定同一行两个数据的距离
/////////以下函数都用到文件打开等操作，所以准备对文件打开等功能进行封装

//定义全局变量
FILE *fp;
char *name, *sex, *address, *number;
double unitPrice;
int subNum;
time_t deadline;

//建立了两个文件 reader.txt用来存用户信息 result.txt用来做统计

//1.构建结构体reader读者信息
//姓名：name
//性别：sex
//地址：address
//电话号码：number
//杂志单价：unitPrice
//订阅数:subNum
//订阅期限：deadline

struct reader
{
	char *name;
	char *sex;
	char *address;
	char *number;
	double unitPrice;
	int subNum;
	time_t deadline;   //存疑
};

//2.定义增加新订户函数,需要注意几个信息必须要有 几个可有可无 注意文件的美观问题，包括距离等
int addNew()
{
	//reader r1;
	fp = fopen("C:\Users\sunso\Desktop\c上机\file\reader.txt", "a");//进行读操作和写在最后
																  //检查是否成功打开文件
	if (fp != NULL)
	{
		//1.首先确定订阅人数小于10人


		//2.进行信息录入
		printf("请输入读者的各项信息");
		printf("请输入读者的姓名：");
		fscanf(fp, "%s", name);
		printf("请输入读者的性别：");
		fscanf(fp, "%s", sex);
		printf("请输入读者的地址：");
		fscanf(fp, "%s", address);
		printf("请输入读者的电话号码：");
		fscanf(fp, "%s", number);
		printf("请输入读者订阅的杂志单价：");
		fscanf(fp, "%d", unitPrice);
		printf("请输入读者的订阅数：");
		fscanf(fp, "%d", subNum);
		//这里意为自动获取读者订阅时间，从而算出应还时间并录入系统
		//fscanf();//////////////////////存疑///////////////////////////存储的是应还时间
		//信息录入结束

		//2.对新的文件内容进行按姓名排序

	}
	else
	{
		printf("打开文件错误！");
	}

	return 0;
}




//3.根据当天日期进行查询,删除已到期订户函数
int delReader()
{
	//1.用循环查找超期图书
	for (fp = fopen("C:\Users\sunso\Desktop\c上机\file\reader.txt", "r+"); fp != NULL; fp += N)
	{
		time_t a;
		//判断当前时间和应还日期的大小关系
		if (time(&(deadline)) <= time(&a))
		{//删除相应数据

		}
	}
	//重新进行姓名排序



}

//4.统计本期杂志订阅数，打印运算结果



int main(void)
{

}


