﻿// 3_함수객체4 -  137 page 제일 윗부분내용
       int Add1(int a, int b) { return a + b; }
inline int Add2(int a, int b) { return a + b; }

int main()
{
	int n1 = Add1(1, 2); 
	int n2 = Add2(1, 2); 

	int(*f)(int, int) = &Add2;

	f(1, 2); // ?
}

