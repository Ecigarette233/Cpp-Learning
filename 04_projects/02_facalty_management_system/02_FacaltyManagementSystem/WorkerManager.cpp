//函数的具体实现
#include "WorkerManager.h"

#include <iostream>
using namespace std;

#include <fstream>

WorkerManager::WorkerManager()
{
	//初始化成员属性

	ifstream ifs;
	ifs.open("empfile.txt", ios::in);

	//1.文件不存在
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		//职工数量为0
		this->num = 0;

		//职工数组为NULL
		this->empArray = NULL;

		//文件状态改为存在
		this->fileIsExist = true;

		ifs.close();
		return;
	}

	//2.文件为空
	//读取一个字符，如果读取到的字符为文件尾字符，则文件为空
	char ch;
	ifs >> ch;

	//如果读到的是文件尾字符
	if (ifs.eof())
	{
		cout << "文件为空" << endl;

		//职工数量为0
		this->num = 0;

		//职工数组为NULL
		this->empArray = NULL;

		//文件状态改为存在
		this->fileIsExist = true;

		ifs.close();
		return;
	}

	//3.文件存在，且不为空，需要记录数据
	int empNum = this->getEmpNum();
	cout << "职工人数为：" << empNum << endl;

	this->num = empNum;

	this->empArray = new Worker * [this->num];
	this->initEmp();
	
	//测试代码
	for (int i = 0;i < this->num;i++)
	{
		cout << "员工编号为:" << this->empArray[i]->ID << "  "
			<< "员工姓名为:" << this->empArray[i]->Name << "  "
			<< "员工部门编号为:" << this->empArray[i]->departmentID << endl;
	}

}

void WorkerManager::showMenu()
{
	cout << " *************************** " << endl;
	cout << " *****  职工管理系统   ***** " << endl;
	cout << " ***** 0.退出管理程序  ***** " << endl;
	cout << " ***** 1.增加职工信息  ***** " << endl;
	cout << " ***** 2.显示职工信息  ***** " << endl;
	cout << " ***** 3.删除离职职工  ***** " << endl;
	cout << " ***** 4.修改职工信息  ***** " << endl;
	cout << " ***** 5.查找职工信息  ***** " << endl;
	cout << " ***** 6.按照编号排序  ***** " << endl;
	cout << " ***** 7.清空所有文档  ***** " << endl;
	cout << " *************************** " << endl;
}

void WorkerManager::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

void WorkerManager::addEmp()
{
	cout << "请输入要添加的人数" << endl;

	int addnum;
	cin >> addnum;

	if (addnum > 0)
	{
		//添加职工

		//记录职工总人数
		int newSize = this->num + addnum;

		//开辟新空间
		Worker** newSpace = new Worker*[newSize];

		//将原职工复制到新职工数组里
		if (this->empArray != NULL)
		{
			for (int i = 0;i < this->num;i++)
			{
				newSpace[i] = this->empArray[i];
			}
		}
		
		for (int i = 0;i < addnum;i++)
		{
			int ID;
			string Name;
			int DepartmentID;

			cout << "请输入第" << i + 1 << "位新职工" << endl;

			cout << "员工编号为：" << endl;
			cin >> ID;

			cout << "姓名为：" << endl;
			cin >> Name;

			cout << "部门编号为：" << endl;
			cout << "总裁：1" << endl;
			cout << "经理：2" << endl;
			cout << "普通职员：3" << endl;
			cin >> DepartmentID;

			Worker* worker = NULL;

			switch (DepartmentID)
			{
			case 1:	
				worker = new Boss(ID, Name, 1);
				break;
			case 2:
				worker = new Manager(ID, Name, 2);
				break;
			case 3:
				worker = new Employee(ID, Name, 3);
				break;
			default:
				break;
			}

			newSpace[this->num + i] = worker;
		}

		delete[] this->empArray;
		this->empArray = newSpace;
		this->num = newSize;

		cout << "添加成功" << endl;
		this->save();
	}
	else
	{
		//输入了错误数据
		cout << "输入数据有误，请重试" << endl;
		return;
	}

	system("pause");
	system("cls");

}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open("empfile.txt", ios::out);

	for (int i = 0;i < this->num;i++)
	{
		ofs << this->empArray[i]->ID << " "
			<< this->empArray[i]->Name << " "
			<< this->empArray[i]->departmentID;
	}

	ofs.close();
}

//文件再次打开时获取人数
int WorkerManager::getEmpNum()
{
	ifstream ifs;
	ifs.open("empfile.txt", ios::in);

	int ID;
	string Name;
	int DepartmentID;

	int num = 0;
	while (ifs >> ID && ifs >> Name && ifs >> DepartmentID)
	{
		num++;
	}
	ifs.close();
	return num;
}

//文件再次打开时重新初始化数组
void WorkerManager::initEmp()
{
	ifstream ifs;
	ifs.open("empFile.txt", ios::in);

	int ID;
	string Name;
	int DepartmentID;

	int index = 0;
	while (ifs >> ID >> Name >> DepartmentID)
	{
		Worker* worker = NULL;
		if (DepartmentID == 1)
		{
			worker = new Boss(ID, Name, DepartmentID);
		}
		else if(DepartmentID ==2)
		{
			worker = new Manager(ID, Name, DepartmentID);
		}
		else
		{
			worker = new Employee(ID, Name, DepartmentID);
		}

		this->empArray[index] = worker;
		index++;
	}

	ifs.close();
}

WorkerManager::~WorkerManager()
{

}


