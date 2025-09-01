/* str_len: return length of s */
/* pp. 39 */
int str_len(char s[]) {
	int i;

	i = 0;
	while (s[i] != '\0') {
		++i;
	}
	return i;
}

/* atoi: convert s to integer */
/* pp. 41 */
int atoi(char s[]) {
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
		n = 10 * n + (s[i] - '0');
	}
	return n;
}

/* lower: convert c to lower case: ASCII only */
/* pp. 41 */
int lower(int c) {
	if (c >= 'A' && c <= 'Z') {
		return c + 'a' - 'A';
	} else {
		return c;
	}
}

/* str_lower convert all char in s to lower case. */
void str_lower(char s[]) {
	int i = 0;
	while (s[i] != '\0') {
		s[i] = lower(s[i]);
	}
}

unsigned long int next = 1;

/* rand: return pseudo-random integer on 0..32767 */
/* pp. 46 */
int rand(void) {
	next = next * 1103515245 + 12345;
	return (unsigned int)(next/65536) % 32768;
}

/* srand: set seed for rand() */
/* pp. 46 */
void srand(unsigned int seed) {
	next = seed;
}

/* squeeze: delete all c from s */
/* pp. 47 */
void squeeze(char s[], int c) {
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++) {
		if (s[i] != c) {
			s[j++] = s[i];
		}
	}
	s[j] = '\0';
}

/* str_cat: concatenate t to end of s; s must be big enough */
/* pp. 48 */
void str_cat(char s[], char t[]) {
	int i, j;

	i = j = 0;
	while (s[i] != '\0') {
		i++;
	}

	while ((s[i++] = t[j++]) != '\0') {
		;
	}
}
