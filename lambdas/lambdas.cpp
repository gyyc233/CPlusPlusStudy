// lambdas.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <algorithm>

void forFach(const std::vector<double>& vect,void(*func)(double))
{
	for (double it : vect)
		func(it);
}

int main()
{
    //lambdas使用的小例子
	std::vector<double> vect = { 3,1,2,4,5 };
	//[] 是捕获 （）是参数列表
	forFach(vect, [](double value)
	{
			std::cout << "value: " << value << std::endl;
	});

	//在vector中依次选择元素与3进行比较，当第一次出现比3大的数时，返回该数
	//在  [](double v) {return v > 3; }  中，v是形式参数，实参是vect的迭代器。
	auto it=std::find_if(vect.begin(), vect.end(), [](double v) {return v > 3; });
	std::cout << *it << std::endl;
	std::cin.get();
}


