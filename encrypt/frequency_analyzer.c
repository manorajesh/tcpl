#include <stdio.h>

#define MAXLINE 1000
#define STARTVAL 0

void frecounter(char s, int i);


int a = STARTVAL, b = STARTVAL, c = STARTVAL, d = STARTVAL,
e = STARTVAL, f = STARTVAL, g = STARTVAL, h = STARTVAL,
i = STARTVAL, j = STARTVAL, k = STARTVAL, l = STARTVAL,
m = STARTVAL, n = STARTVAL, o = STARTVAL, p = STARTVAL,
q = STARTVAL, r = STARTVAL, s = STARTVAL, t = STARTVAL,
u = STARTVAL, v = STARTVAL, w = STARTVAL, x = STARTVAL,
y = STARTVAL, z = STARTVAL, nonalpha = STARTVAL;

char where[MAXLINE];

int main()
{
	int c;
	char string[MAXLINE];

	fgets(string, MAXLINE, stdin);

	for (c = 0; c != '\n'; ++c) {
		frecounter(string[c], c);
	}
}

void frecounter(char s, int i)
{	
	switch (s) {
	case 'a':
		++a;
		where[c] = 'a';
		break;
	case 'b':
		++b;
		where[c] = 'b';
		break;
	case 'c':
		++c;
		where[c] = 'c';
		break;
	case 'd':
		++d;
		where[c] = 'd';
		break;
	case 'e':
		++e;
		where[c] = 'e';
		break;
	case 'f':
		++f;
		where[c] = 'f';
		break;
	case 'g':
		++g;
		where[c] = 'g';
		break;
	case 'h':
		++h;
		where[c] = 'h';
		break;
	case 'i':
		++i;
		where[c] = 'i';
		break;
	case 'j':
		++j;
		where[c] = 'j';
		break;
	case 'k':
		++k;
		where[c] = 'k';
		break;
	case 'l':
		++l;
		where[c] = 'l';
		break;
	case 'm':
		++m;
		where[c] = 'm';
		break;
	case 'n':
		++n;
		where[c] = 'n';
		break;
	case 'o':
		++o;
		where[c] = 'o';
		break;
	case 'p':
		++p;
		where[c] = 'p';
		break;
	case 'q':
		++q;
		where[c] = 'q';
		break;
	case 'r':
		++r;
		where[c] = 'r';
		break;
	case 's':
		++s;
		where[c] = 's';
		break;
	case 't':
		++t;
		where[c] = 't';
		break;
	case 'u':
		++u;
		where[c] = 'u';
		break;
	case 'v':
		++v;
		where[c] = 'v';
		break;
	case 'w':
		++w;
		where[c] = 'w';
		break;
	case 'x':
		++x;
		where[c] = 'x';
		break;
	case 'y':
		++y;
		where[c] = 'y';
		break;
	case 'z':
		++z;
		where[c] = 'z';
		break;
	default:
		++nonalpha;
		where[c] = '1';
		break;

	}

}