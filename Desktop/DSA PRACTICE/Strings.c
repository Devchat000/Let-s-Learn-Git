#include<stdio.h>
#include<string.h>
int encrypt(char *s,char c)
{
	char *ptr = s;
	int count = 0;
	while(*ptr != '\0')
	{
		if(*ptr == c)
		{
			count++;
		}
		ptr++;
	}
	return count;
}
	
	

int main()
	{
		char s[] = "DebobataChattejee111";
		int c = encrypt(s,'1');
		printf("%d",c);
		return 0;
	}

