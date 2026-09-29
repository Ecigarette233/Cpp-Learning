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
	//构造函数
	WorkerManager();

	//显示菜单
	void showMenu();

	//退出系统
	void exitSystem();

	//添加职工
	void addEmp();

	//保存文件
	void save();
	
	//获取人数
	int getEmpNum();

	//初始化数组
	void initEmp();

	
	//成员属性

	//1.职工人数
	int num;

	//2.职工数组指针
	Worker** empArray;

	//3.判断文件是否存在
	bool fileIsExist;


	~WorkerManager();

};

