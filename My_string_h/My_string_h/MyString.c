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

//ģ��ʵ�� strcpy() ����
char *MyStrcpy(char* dest, const char* src)
{
	assert(dest != NULL && src != NULL);
	char *p = dest;
	while (*src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = '\0';
	return p;
}

//char *MyStrcpy(char* dest, const char* src)
//{
//	assert(dest != NULL && src != NULL);
//	char *p = dest;
//	while (*dest++ = *src++);
//	return p;
//}

//ģ��ʵ�� strcat ����
char *MyStrcat(char *dest, const char *src)
{
	assert(dest != NULL && src != NULL);
	char *p = dest;
	while (*dest != '\0')
	{
		++dest;
	}
	while (*dest++ = *src++);
	return p;
}
