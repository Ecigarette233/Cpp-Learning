#include <iostream>
using namespace std;
#define MAX 1000

//创建联系人结构体
struct contactPerson {
	string name;
	int gender;
	int age;
	string phoneNumber;
	string address;
};

//创建通讯录顺序表结构体
struct contact {
	contactPerson personArray[MAX];
	int contactLength;
};

void showMenu();
void addPerson(contact* p);
void showPerson(contact* p);
int isExist(contact* p, string name);
void findPerson(contact* p);
void modifyPerson(contact* p);
void deletePerson(contact* p);
void cleanPerson(contact* p);


int main()
{
	contact contact1;
	contact1.contactLength = 0;

	showMenu();

	int select=-1;

	cout << "请选择功能：" ;

	while (select != 0)
	{
		cin >> select;

		switch (select)
		{
		case 1:
			addPerson(&contact1);
			break;
		case 2:
			showPerson(&contact1);
			break;
		case 3:
			findPerson(&contact1);
			break;
		case 4:
			modifyPerson(&contact1);
			break;
		case 5:
			deletePerson(&contact1);
			break;
		case 6:
			cleanPerson(&contact1);
			break;
		case 0:
			return 0;
		default:
			break;

		}
		if (select != 0)
		{
			system("pause");
			system("cls");
			showMenu();
		}
	}

	

	return 0;
}

//显示菜单
void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.查找联系人 *****" << endl;
	cout << "***** 4.修改联系人 *****" << endl;
	cout << "***** 5.删除联系人 *****" << endl;
	cout << "***** 6.清空通讯录 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;

}

//添加联系人
void addPerson(contact* p)
{
	if (p->contactLength == MAX)
	{
		cout << "添加失败，通讯录联系人已满！" << endl;
		return;
	}
	else
	{
		string name;
		cout << "请输入新联系人姓名：";
		cin >> name;

		int gender;
		cout << "请输入新联系人性别（男：1 女：2）：";
		cin >> gender;

		int age;
		cout << "请输入新联系人年龄：";
		cin >> age;

		string phoneNumber;
		cout << "请输入新联系人电话号码：";
		cin >> phoneNumber;

		string address;
		cout << "请输入新联系人家庭住址：";
		cin >> address;

		p->personArray[p->contactLength].name = name;
		p->personArray[p->contactLength].gender = gender;
		p->personArray[p->contactLength].age = age;
		p->personArray[p->contactLength].phoneNumber = phoneNumber;
		p->personArray[p->contactLength].address = address;

		cout << "添加成功！" << endl;

		p->contactLength++;

	}
}

//显示联系人
void showPerson(contact* p) 
{
	if (p->contactLength == 0)
	{
		cout << "当前没有联系人" << endl;
		return;
	}

	for (int i = 0;i < p->contactLength;i++)
	{

		cout << p->personArray[i].name ;
		cout << "\t";
			if (p->personArray[i].gender == 1)
			{
				cout << "男" ;
			}
			else if(p->personArray[i].gender==2)
			{
				cout << "女" ;
			}
		cout << "\t";
		cout << p->personArray[i].age ;
		cout << "\t";
		cout << p->personArray[i].phoneNumber ;
		cout << "\t";
		cout << p->personArray[i].address ;
		cout << endl;
	}
	cout << "当前共" << p->contactLength << "位联系人" << endl;
}

//判断联系人是否存在
int isExist(contact* p,string name)
{
	for (int i = 0;i < p->contactLength;i++)
	{
		if (p->personArray[i].name == name)
		{
			return i;
		}
	}

	return -1;

}

//查找联系人
void findPerson(contact* p)
{
	string personName;
	cout << "请输入联系人姓名：";
	cin >> personName;

	int ret = isExist(p, personName);

	if (ret != -1)
	{
		cout << p->personArray[ret].name << "\t";
		if (p->personArray[ret].gender == 1)
		{
			cout << "男"<<"\t";
		}
		else if (p->personArray[ret].gender == 2)
		{
			cout << "女"<<"\t";
		}
		cout << p->personArray[ret].age << "\t";
		cout << p->personArray[ret].phoneNumber<<"\t";
		cout << p->personArray[ret].address<<endl;
	}
	else
	{
		cout << "查无此人" << endl;
		return;
	}
}

//修改联系人
void modifyPerson(contact* p)
{
	cout << "请输入要修改联系人的姓名" << endl;
	string searchName;
	cin >> searchName;
	int ret = isExist(p, searchName);

	if (ret != -1)
	{
		string name;
		cout << "请输入联系人姓名：";
		cin >> name;

		int gender;
		cout << "请输入联系人性别（男：1 女：2）：";
		cin >> gender;

		int age;
		cout << "请输入联系人年龄：";
		cin >> age;

		string phoneNumber;
		cout << "请输入联系人电话号码：";
		cin >> phoneNumber;

		string address;
		cout << "请输入联系人家庭住址：";
		cin >> address;

		p->personArray[ret].name = name;
		p->personArray[ret].gender = gender;
		p->personArray[ret].age = age;
		p->personArray[ret].phoneNumber = phoneNumber;
		p->personArray[ret].address = address;

		cout << "添加成功！" << endl;
	}
	else if(ret==-1)
	{
		cout << "查无此人" << endl;
		return;
	}

}

//删除联系人
void deletePerson(contact* p)
{
	string name;
	cout << "请输入要删除联系人的姓名：";
	cin >> name;

	int ret = isExist(p, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
		return;
	}
	else
	{
		for (int i = ret;i < p->contactLength-1;i++)
		{
			p->personArray[i] = p->personArray[i + 1];
		}
		cout << "删除成功！" << endl;
	}
	
	p->contactLength--;

}

//清空联系人
void cleanPerson(contact* p)
{
	p->contactLength = 0;
	cout << "通讯录已清空" << endl;
}