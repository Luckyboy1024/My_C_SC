#define _CRT_SECURE_NO_WARNINGS 1

#include "MyString.h"

//ģ��ʵ�� strlen() ����
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

