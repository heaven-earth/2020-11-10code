#include "contact.h"

//��Ŀ���� :
//ͨѶ¼1
//��Ŀ���� :
//ʵ��һ��ͨѶ¼��
//
//ͨѶ¼���������洢1000���˵���
//ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
//
//�ṩ������
//
//�����ϵ����Ϣ
//ɾ��ָ����ϵ����Ϣ
//����ָ����ϵ����Ϣ
//�޸�ָ����ϵ����Ϣ
//��ʾ������ϵ����Ϣ
//���������ϵ��
//����������������ϵ��


int main()
{
	contact_t *ct = InitContact();
	int quit = 0;
	int select = 0;
	while (!quit){
		Menu();
		scanf("%d", &select);
		switch (select){
		case 1:
			AddPerson(&ct);
			break;
		case 2:
			DelPerson(ct);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowContact(ct);
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			quit = 1;
			SaveContact(ct);
			break;
		}
	}
	printf("ByeBye!\n");
	system("pause");
	return 0;
}