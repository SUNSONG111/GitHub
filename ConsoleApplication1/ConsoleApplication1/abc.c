#include <stdio.h>
#include <time.h>
#include <string.h>
#define N 20  //����ȷ��ͬһ���������ݵľ���
/////////���º������õ��ļ��򿪵Ȳ���������׼�����ļ��򿪵ȹ��ܽ��з�װ

//����ȫ�ֱ���
FILE *fp;
char *name, *sex, *address, *number;
double unitPrice;
int subNum;
time_t deadline;

//�����������ļ� reader.txt�������û���Ϣ result.txt������ͳ��

//1.�����ṹ��reader������Ϣ
//������name
//�Ա�sex
//��ַ��address
//�绰���룺number
//��־���ۣ�unitPrice
//������:subNum
//�������ޣ�deadline

struct reader
{
	char *name;
	char *sex;
	char *address;
	char *number;
	double unitPrice;
	int subNum;
	time_t deadline;   //����
};

//2.���������¶�������,��Ҫע�⼸����Ϣ����Ҫ�� �������п��� ע���ļ����������⣬���������
int addNew()
{
	//reader r1;
	fp = fopen("C:\Users\sunso\Desktop\c�ϻ�\file\reader.txt", "a");//���ж�������д�����
																  //����Ƿ�ɹ����ļ�
	if (fp != NULL)
	{
		//1.����ȷ����������С��10��


		//2.������Ϣ¼��
		printf("��������ߵĸ�����Ϣ");
		printf("��������ߵ�������");
		fscanf(fp, "%s", name);
		printf("��������ߵ��Ա�");
		fscanf(fp, "%s", sex);
		printf("��������ߵĵ�ַ��");
		fscanf(fp, "%s", address);
		printf("��������ߵĵ绰���룺");
		fscanf(fp, "%s", number);
		printf("��������߶��ĵ���־���ۣ�");
		fscanf(fp, "%d", unitPrice);
		printf("��������ߵĶ�������");
		fscanf(fp, "%d", subNum);
		//������Ϊ�Զ���ȡ���߶���ʱ�䣬�Ӷ����Ӧ��ʱ�䲢¼��ϵͳ
		//fscanf();//////////////////////����///////////////////////////�洢����Ӧ��ʱ��
		//��Ϣ¼�����

		//2.���µ��ļ����ݽ��а���������

	}
	else
	{
		printf("���ļ�����");
	}

	return 0;
}




//3.���ݵ������ڽ��в�ѯ,ɾ���ѵ��ڶ�������
int delReader()
{
	//1.��ѭ�����ҳ���ͼ��
	for (fp = fopen("C:\Users\sunso\Desktop\c�ϻ�\file\reader.txt", "r+"); fp != NULL; fp += N)
	{
		time_t a;
		//�жϵ�ǰʱ���Ӧ�����ڵĴ�С��ϵ
		if (time(&(deadline)) <= time(&a))
		{//ɾ����Ӧ����

		}
	}
	//���½�����������



}

//4.ͳ�Ʊ�����־����������ӡ������



int main(void)
{

}


