#define MAXFNAME 13
#define CHNULL ((char *) 0)

#if defined(MSDOS) || defined(__MSDOS__) || defined(_MSDOS) || defined(__DOS__) \
  || defined(_WIN16) || defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) \
  || defined(__TOS_WIN__) || defined(__WINDOWS__)
#define SEP '\\'
#else
#define SEP '/'
#endif

char program [MAXFNAME];

void get_prog_name (char *path)
{
	char *p, *q;

	p = (char *) strrchr (path, SEP);
	if (p != CHNULL) p ++;
	else p = path;
	strncpy (program, p, MAXFNAME - 1);
	q = (char *) strchr (program, '.');
	if (q != CHNULL) *q = '\0';
	return;
}
