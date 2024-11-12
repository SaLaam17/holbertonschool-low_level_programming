#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 * Description: function that concatenates two strings.
 * @s1: the first string to be concatenated.
 * @s2: the second string to be concatenated.
 * Return: a pointer to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	int i = 0;
	int j = 0;
	char *dest;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

/* Calcul de la longueur de s1*/
	while (s1[len_s1] != '\0')
		len_s1++;

/* Calcul de la longueur de s2*/
	while (s2[len_s2] != '\0')
		len_s2++;

	dest = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
/* le 1 pour le '\0' à la fin de dest.*/

/* gestion de l'erreur si l'allocation échoue.*/
	if (dest == NULL)
		return (NULL);

/* Copie de s1 dans dest */
	for (i = 0; s1[i] != '\0'; i++)
		dest[i] = s1[i];

/* Copie de s2 dans dest à partir de la fin de s1 */
	for (j = 0; s2[j] != '\0'; j++)
		dest[i + j] = s2[j];

/* Terminer la chaîne avec '\0'*/
	dest[i + j] = '\0';

	return (dest);
}
