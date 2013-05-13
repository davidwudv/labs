/*
 * =====================================================================================
 *
 *       Filename:  head.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年05月12日 22时23分42秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  dvwei (吴德伟), davidwudv@gmail.com | dvwei@outlook.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fp;
	int lineNo, i, temp;
	switch(argc)
	{
		case 2:
			if((fp = fopen(argv[1], "r")) == NULL)
			{
				printf("open fail!\n");
				return 1;
			}
			lineNo = 10;
			break;
		case 4:
			for(i = 1; i < argc; ++i)
			{
				if(strcmp(argv[i], "-n") == 0)
				{
				  lineNo = atoi(argv[i+1]);
				  break;
				}
			}
			if((fp = fopen(argv[argc-1], "r")) == NULL)
			{
				printf("open fail!\n");
				return 1;
			}
			break;
		default:
			printf("error args!\n");
			return 1;
	}

	for(i = 0; i < lineNo; i++)
	{
		fscanf(fp, "%d", &temp);
		printf("%d\n", temp);
	}

	fclose(fp);
	return 0;
}
