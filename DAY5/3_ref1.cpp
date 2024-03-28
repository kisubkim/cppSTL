﻿#include <iostream>
#include <functional>

int main()
{
	int n1 = 10;
	int n2 = 20;

	int& r1 = n1;  
	int& r2 = n2;

	r1 = r2;	// 이순간의 동작 방식을 생각해 보세요

	// 결과 예측해 보세요
	std::cout << n1 << std::endl; 
	std::cout << n2 << std::endl; 
	std::cout << r1 << std::endl; 
	std::cout << r2 << std::endl; 
}
