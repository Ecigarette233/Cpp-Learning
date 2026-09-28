//类的实现、函数的声明

#pragma once
#include <iostream>

#include "worker.h"
#include "manager.h"
#include "employee.h"
#include "boss.h"

class WorkerManager
{
public:
	WorkerManager();

	void showMenu();

	void exitSystem();

	void addEmp();

	//成员属性

	//1.职工人数
	int num;

	//2.职工数组指针
	Worker** empArray;

	~WorkerManager();

};

