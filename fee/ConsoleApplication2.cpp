// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;


int main()
{
	/*
	*
	*简单的主函数整数型main
	*这是一个利息（或滞纳金）计算程序
	*接受输入本金，增长率和持续月份
	*还可以换算成美元
	*
	*/
	cout << "请输入本金：" << endl;
	double baseMoney = 0 , finalMoney = 0;//baseMoney保存基数，finalMoney保存处理总和，都是双精度浮点数
	int repeatTimes = 0;//保存月数，是整数型
	double increRate = 0;//增长率，双精度浮点数
	cin >> baseMoney;
	finalMoney = baseMoney;
	cout << "请输入增长率：" << endl;
	cin >> increRate;
	cout << "请输入持续月份：" << endl;
	cin >> repeatTimes;
	int currTimes = 0;//当前月数
	while (currTimes < repeatTimes)
	{
		baseMoney = baseMoney + (baseMoney*increRate);//计算
		++currTimes;
		cout << "当前月份是 " << currTimes << " 月\n" << "当前金额是 " << baseMoney << " 元" << endl;
		cout << "\n" << endl;
	}		
	cout << "本金是 " << finalMoney << " 元\n" << "最终金额是 " << baseMoney << " 元" << endl;//看起来似乎匹配错了，实际上没有，是我的个人失误>_<
	cout << "\n" << endl;
	cout << "产生的利息（或滞纳金）为 " << baseMoney - finalMoney << " 元" << endl;
	std::string rsp;//用户输入
	cout << "换算成美元吗？（1$=>6RMB） 输入y为同意，或者输入n退出。" << endl;
		cin >> rsp;
	std::string y = "y";
	std::string n = "n";
	if (rsp==y)
	{
		cout << "换算为 " << baseMoney / 6 << " 美元\n" << endl;
		system("cmd");
		return 0;
	}
	else
	{
		return -1;
	}
	system("cmd");
    return 0;
}

