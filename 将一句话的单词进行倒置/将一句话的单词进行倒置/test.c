#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

void reverse_(char* left, char*right)
{
	assert(left&&right);
	while (left < right)
	{
		char ret = *left;
		*left = *right;
		*right = ret;

		left++;
		right--;
	}
}

void reverse(char* arr,int len )
{
	reverse_(arr, arr+len-1);
		
		while (*arr)
		{
             char* begin = arr;
			while (*arr && (*arr != ' '))
				arr++;
			reverse_(begin, arr-1);

			if (* begin == ' ')
			{
				arr++;
			}
		}
}

int main()
{
	char a[100];
	gets(a);
	int len = strlen(a);
	reverse(a, len);
	printf("%s\n", a);
	system("pause");
	return 0;
}