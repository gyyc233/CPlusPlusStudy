// templateTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
//宏定义的使用
#define WAIT std::cin.get();
//用法1、函数模板
template<typename T>
void print(T info)
{
	std::cout << info << std::endl;
}

//用法2、类模板 在类中使用
//2.1、
template<int N>
class Array
{
private:
	int my_array[N];
public:
	int get_size() const
	{
		return N;
	}
};
//2.2
template<typename T,int N>
class Array2
{
private:
	T my_array[N];
public:
	int get_size() const
	{
		return N;
	}
};
int main()
{
	print(5);
	print("hello");
	print<float>(3.1f);

	Array<8> a;
	std::cout << a.get_size() << std::endl;
	Array2<double, 6> a2;
	std::cout << a2.get_size() << std::endl;
	WAIT
	return 0;
	
}


