#define _CRT_SECURE_NO_WARNINGS 1

#include "MyString.h"

//模拟实现 strlen() 函数
unsigned int MyStrlen(const char *str)
{
	assert(str != NULL);
	unsigned int count = 0;
	while (*str != '\0')
	{
		++count;
		++str;
	}
	return count;
}

