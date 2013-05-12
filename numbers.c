/*
 * =====================================================================================
 *
 *       Filename:  numbers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年05月12日 22时20分41秒
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
	int headNumber, endNumber, i;
	if(argc < 4)
	{
		printf("please enter 4 args!");
		return 0;
	}

	headNumber = atoi(argv[1]);
	endNumber = atoi(argv[2]);

	if((fp = fopen(argv[3], "w")) == NULL)
	{
		printf("open fail!");
		return 1;
	}

	for(i = headNumber; i <= endNumber; i++)
	  fprintf(fp, "%d\n", i);

	fclose(fp);
	return 0;
}
