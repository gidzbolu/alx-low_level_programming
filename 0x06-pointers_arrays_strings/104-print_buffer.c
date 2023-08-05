#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: vold
 */
if (size <= 0)
{
	printf("\n");
	return;
}

for (int i = 0; i < size; i += 10) {
	printf("%08x: ", i);

	for (int j = 0; j < 10; j++) 
	{
		if (i + j < size)
		printf("%02x ", (unsigned char)b[i + j]);
	else
		printf("   "); 
	}
	printf(" ");

	for (int j = 0; j < 10; j++)
	{
		if (i + j < size)
		{
			char c = b[i + j];
		       if (isprint(c))
		    //                                                                                                                                                                                 printf("%c", c);
		    //                                                                                                                                                                                                 else
		    //                                                                                                                                                                                                                     printf(".");
		    //                                                                                                                                                                                                                                 } else {
		    //                                                                                                                                                                                                                                                 printf(" "); // Print spaces for incomplete lines
		    //                                                                                                                                                                                                                                                             }
		    //                                                                                                                                                                                                                                                                     }
		    //
		    //                                                                                                                                                                                                                                                                             printf("\n");
		    //                                                                                                                                                                                                                                                                                 }
		    //                                                                                                                                                                                                                                                                                 }
