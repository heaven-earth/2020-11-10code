#include "contact.h"

//添加联系人信息
//删除指定联系人信息
//查找指定联系人信息
//修改指定联系人信息
//显示所有联系人信息
//清空所有联系人
//以名字排序所有联系人
void Menu()
{
	printf("##############################\n");
	printf("# 1. Add  2. Del   3. Search #\n");
	printf("# 4. Mod  5. Show  6. Clear  #\n");
	printf("# 7. Sort          0. Exit   #\n");
	printf("##############################\n");
	printf("Please Select: ");
}


contact_t *InitContact()
{
	contact_t *ct = NULL;
	FILE*fp = fopen(SAVE_FILE, "rb");
	if (NULL == fp){
		printf("use default: init Contact ... ing\n");
		int size = sizeof(contact_t)+sizeof(person_t)*NUM;
		ct = (contact_t *)malloc(size);
		if (NULL == ct){
			printf("malloc error");
			exit(1);
		}

		ct->cap = NUM;
		ct->size = 0;
		printf("init Contact ... done\n");
	}
	else{
		printf("use file: init Contact ... ing\n");

		contact_t tmp;
		fread(&tmp, sizeof(contact_t), 1, fp);
		int size = sizeof(contact_t)+sizeof(person_t)* tmp.cap;
		ct = (contact_t *)malloc(size);
		if (NULL == ct){
			printf("malloc error");
			exit(1);
		}
		ct->cap = tmp.cap;
		ct->size = tmp.size;

		fread(ct->persons, sizeof(person_t), tmp.size, fp);
		fclose(fp);
		printf("init Contact ... done\n");

	}
	return ct;
}
static int FindPerson(contact_t *ct, const char *telphone)
{
	assert(ct);
	assert(telphone);

	for (int i = 0; i < ct->size; i++){
		if (strcmp(ct->persons[i].telphone, telphone) == 0){
			return i;
		}
	}
	return -1;
}
static int IsFull(contact_t *ct)
{
	return ct->cap == ct->size;
}
static int Inc(contact_t **ct)
{
	printf("contact is Full, inc ing ...\n");
	contact_t *p = (contact_t *)realloc(*ct, (*ct)->cap + INC_SIZE*sizeof(person_t));
	if (NULL == p){
		return 0;
	}
	*ct = p;
	(*ct)->cap += INC_SIZE;
	printf("contact is Full, inc done ...\n");

	return 1;
}
void AddPerson(contact_t **ct)
{
	if (!IsFull(*ct) || Inc(ct)){
		//正常的添加
		person_t *p = &((*ct)->persons[(*ct)->size]);

		//姓名、性别、年龄、电话、住址
		printf("姓名# ");
		scanf(" %s", p->name);
		printf("性别# ");
		scanf(" %c", &(p->sex));
		printf("年龄# ");
		scanf(" %d", &(p->age));
		printf("电话#");
		scanf(" %s", p->telphone);
		printf("住址# ");
		scanf(" %s", p->address);

		(*ct)->size += 1;
	}
	else{
		printf("inc error!\n");
	}
}
void ShowContact(contact_t *ct)
{
	assert(ct);
	printf("| %10s|%10s\n |\n", "姓名", "电话");
	for (int i = 0; i < ct->size; i++){
		printf("| %10s | %10s\n |\n", ct->persons[i].name, ct->persons[i].telphone);
	}
}

static int IsEmpty(contact_t  *ct)
{
	return ct->size == 0;
}

void DelPerson(contact_t *ct)
{
	assert(ct);
	if (!IsEmpty(ct)){
		printf("输入你要查找人的电话# ");
		char telphone[SIZE / 4] = {0};
		scanf(" %s", telphone);
		int pos = FindPerson(ct, telphone);
		if (pos >= 0){
			ct->persons[pos] = ct->persons[ct->size - 1];
			ct->size -= 1;
		}
		else{
			printf("你要查找的人，不存在!\n");
		}
	}
}

//typedef struct contact{
//	int cap;
//	int size;
//	person_t persons[0];
//}contact_t;
void SaveContact(contact_t *ct)
{
	assert(ct);
	FILE *fp = fopen(SAVE_FILE, "wb");
	if (NULL == fp){
		printf("fopen error, save failed \n");
		return;
	}
	fwrite(ct, sizeof(contact_t),1, fp);
	fwrite(ct->persons, sizeof(person_t), ct->size, fp);
	printf("save done...\n");
	fclose(fp);
}