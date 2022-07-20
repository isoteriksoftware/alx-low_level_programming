#include "main.h"

char *test(char *, char *, char *, char *);
char *wildcard(char *, char *);

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string, may contain wildcard *
 *
 * Return: 1 if match, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	char *p;

	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);
	else if (*s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));
	else if (*s2 == '*')
	{
		p = wildcard(s1, s2 + 1);
		if (p == 0)
			return (0);
		return (wildcmp(p + 1, s2 + 2));
	}
	else if (*s1 != *s2)
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	return (wildcmp(s1 + 1, s2 + 1));
}

/**
 * wildcard - checks for the wildcards
 * @cmp: string to compare to
 * @check: string to check
 *
 * Return: pointer to spot in cmp that matches check
 */
char *wildcard(char *cmp, char *check)
{
	if (*cmp != *check)
	{
		if (*cmp == '\0')
			return (0);
		return (wildcard(cmp + 1, check));
	}

	return (test(cmp + 1, check + 1, cmp, check));
}


/**
 * test - tests if wildcard is a proper match
 * @s: string to compare
 * @match: wildcard match to compare
 * @first_spot_checked: first spot that was checked
 * @first_wildcard_spot: first spot in wildcard comparison
 *
 * Return: spot that matches or NULL
 */
char *test(char *s, char *match, char *first_spot_checked,
		char *first_wildcard_spot)
{
	if (*match == '*' || (*s == '\0' && *match == '\0'))
		return (first_spot_checked);
	else if (*s != *match)
		return (wildcard(s, first_wildcard_spot));
	else
		return (test(s + 1, match + 1, first_spot_checked,
					first_wildcard_spot));
}
