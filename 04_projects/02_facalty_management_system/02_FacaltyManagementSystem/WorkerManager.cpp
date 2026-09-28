//函数的具体实现
#include "WorkerManager.h"

#include <iostream>
using namespace std;

WorkerManager::WorkerManager()
{
	//初始化成员属性

	this->num = 0;
	this->empArray = NULL;
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
			cout << "普通职员：1" << endl;
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
				worker = new Boss(ID, Name, 3);
				break;
			default:
				break;
			}

			newSpace[this->num + i] = worker;
		}
	}
	else
	{
		//输入了错误数据
		cout << "输入数据有误，请重试" << endl;
	}


}

WorkerManager::~WorkerManager()
{

}


