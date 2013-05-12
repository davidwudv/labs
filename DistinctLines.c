/*
 * =====================================================================================
 *
 *       Filename:  DistinctLines.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年05月12日 17时48分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  dvwei (吴德伟), davidwudv@gmail.com | dvwei@outlook.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	int n = atoi(argv[1]);
	int count = 0;
	int i, j, len = 128, Line = 1024;//most 128 characters
	char string[Line][len];
	for(i = 0; i < Line; i++)
	{
		gets(string[i]);
		++count;
		j = 0;
		for(; j <= i && i != j ; j++)
		{
			if(strcmp(string[i], string[j]) == 0)
			  --count;
		}
		if(n == count)
		  break;
	}

	//for(i = 0; i < n; i++)
	//{
	//	printf("n=%d:%s\n",i ,string[i]);
	//}

	printf("%d distinct lines seen after %d lines read.", n, i + 1);
	return 0;
}
