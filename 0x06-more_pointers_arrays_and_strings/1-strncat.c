nclude "holberton.h"
#include "_strlen.c"
/**
 *  * _strcat - appends src to the dest string
 *   * @dest: string to append by src
 *    * @src: string to append to dest
 *     *
 *      * Return: dest
 *       */
char *_strcat(char *dest, char *src)
{
	/*
	 *  * use _strlen function to get length ofidest string
	 *   *
	 *    *
	 *     */
	int i = _strlen(dest), j = 0;
	/*
	 *  * concatenate strings
	 *   *
	 *    */

		while (dest[j] != '\0')
				while (src[j] != '\0')
						{
									dest[i] = src[j];
											i++;
