int str_len(char s[]) {
	int i;

	i = 0;
	while (s[i] != '\0') {
		++i;
	}
	return i;
}

int atoi(char s[]) {
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
		n = 10 * n + (s[i] - '0');
	}
	return n;
}

int lower(int c) {
	if (c >= 'A' && c <= 'Z') {
		return c + 'a' - 'A';
	} else {
		return c;
	}
}

void lowcase(char s[]) {
	int i = 0;
	while (s[i] != '\0') {
		s[i] = lower(s[i]);
	}
}

unsigned long int next = 1;

/* rand: return pseudo-random integer on 0..32767 */
int rand(void) {
	next = next * 1103515245 + 12345;
	return (unsigned int)(next/65536) % 32768;
}

/* srand: set seed for rand() */
void srand(unsigned int seed) {
	next = seed;
}

/* squeeze: delete all c from s */
void squeeze(char s[], int c) {
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++) {
		if (s[i] != c) {
			s[j++] = s[i];
		}
	}
	s[j] = '\0';
}
