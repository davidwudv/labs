/*
 * =====================================================================================
 *
 *       Filename:  thousand.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年05月12日 22时16分47秒
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
	if((fp = fopen("1000.txt", "w")) == NULL)
	{
		printf("open fail!");
		return 1;
	}

	int i;
	for(i = 1; i <= 1000; i++)
	  fprintf(fp, "%d\n", i);

	fclose(fp);
	return 0;
}
