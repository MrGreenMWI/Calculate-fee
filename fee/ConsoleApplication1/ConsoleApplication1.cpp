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
	cout << "Please enter base money:" << endl;
	double baseMoney = 0 , finalMoney = 0;//baseMoney保存基数，finalMoney保存处理总和，都是双精度浮点数
	int repeatTimes = 0;//保存月数，是整数型
	double increRate = 0;//增长率，双精度浮点数
	cin >> baseMoney;
	finalMoney = baseMoney;
	cout << "Please enter increase rate:" << endl;
	cin >> increRate;
	cout << "Enter how many months that you want to last:" << endl;
	cin >> repeatTimes;
	int currTimes = 0;//当前月数
	while (currTimes < repeatTimes)
	{
		baseMoney = baseMoney + (baseMoney*increRate);//计算
		++currTimes;
		cout << "The current month is " << currTimes << "\n" << "The base money is " << baseMoney << endl;
		cout << "\n" << endl;
	}		
	cout << "Base money is "<<finalMoney<<"\n"<<"Final money is " << baseMoney << endl;//看起来似乎匹配错了，实际上没有，是我的个人失误>_<
	cout << "\n" << endl;
	std::string rsp;//用户输入
	cout << "Change it to dollar? Enter y for accept or n to exit" << endl;
		cin >> rsp;
	std::string y = "y";
	std::string n = "n";
	if (rsp==y)
	{
		cout << "It is " << baseMoney / 6 << "$\n" << endl;
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

