#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	./shc -f level_3.sh 
#endif

static  char data [] = 
#define      tst2_z	19
#define      tst2	((&data[3]))
	"\030\065\143\275\340\042\003\264\032\000\234\317\047\360\375\120"
	"\217\112\143\346\145\157\173\370"
#define      rlax_z	1
#define      rlax	((&data[24]))
	"\313"
#define      pswd_z	256
#define      pswd	((&data[71]))
	"\136\005\137\047\024\255\336\042\116\102\227\223\356\031\223\010"
	"\372\176\252\212\226\340\356\022\331\243\255\004\250\142\315\007"
	"\150\054\057\174\332\015\237\051\120\067\274\077\120\117\277\334"
	"\102\371\350\364\307\030\030\177\062\161\110\304\152\133\322\252"
	"\211\024\073\302\014\334\223\320\146\016\000\005\251\300\342\354"
	"\272\313\340\202\343\371\002\025\152\112\332\325\246\255\177\057"
	"\301\273\362\315\230\205\235\376\223\236\004\074\137\347\050\032"
	"\262\011\234\226\002\237\254\154\351\206\101\220\064\301\277\365"
	"\175\261\302\025\067\140\023\312\376\030\007\136\377\060\170\261"
	"\071\024\110\074\263\364\251\235\172\352\055\256\254\355\244\052"
	"\236\146\077\325\307\123\240\305\153\250\043\153\331\234\035\023"
	"\260\145\117\144\131\370\002\324\343\057\203\220\034\047\272\273"
	"\216\372\221\125\115\062\033\271\333\077\044\264\333\102\310\214"
	"\247\030\361\000\021\363\324\364\043\130\205\100\177\100\373\016"
	"\072\215\143\210\277\177\101\233\276\146\117\232\250\030\047\117"
	"\060\030\120\101\014\045\066\057\175\273\157\375\373\153\013\066"
	"\370\156\276\270\356\377\123\254\145\243\107\016\273\156\136\353"
	"\207\256\055\223\324\143\303\121\036\062\116\032\235\132\120\226"
	"\310\016\116\267\016\241\144\164\104\253\202\377\032\340\110\113"
	"\316\362\325\145\323\304\167\254\150\044\260\020\207\176\030\357"
	"\252\107\154\205\125\014\256\245\103\152\345\224\272\055\337\210"
	"\037\265\355\363\171\145\237\341\212\120\362\021\316\012\001\171"
	"\122"
#define      lsto_z	1
#define      lsto	((&data[378]))
	"\362"
#define      tst1_z	22
#define      tst1	((&data[383]))
	"\275\027\062\122\221\027\051\342\020\026\075\330\326\332\150\106"
	"\372\331\320\337\275\264\245\073\357\205\321"
#define      xecc_z	15
#define      xecc	((&data[406]))
	"\156\364\263\107\262\201\065\120\314\347\013\031\053\147\124\177"
#define      chk2_z	19
#define      chk2	((&data[423]))
	"\141\217\335\242\111\121\261\265\207\137\020\020\007\114\225\231"
	"\273\142\142\131\255\022"
#define      shll_z	10
#define      shll	((&data[444]))
	"\124\202\032\320\123\131\362\353\021\275\066"
#define      inlo_z	3
#define      inlo	((&data[455]))
	"\067\177\232"
#define      chk1_z	22
#define      chk1	((&data[462]))
	"\270\251\072\062\146\226\163\007\216\201\154\270\165\330\034\136"
	"\054\144\161\176\047\104\256\201\360\312\125\210\360"
#define      msg2_z	19
#define      msg2	((&data[490]))
	"\077\032\164\200\032\005\121\077\356\277\235\131\267\353\047\236"
	"\320\371\152\267\333\247\231"
#define      opts_z	1
#define      opts	((&data[510]))
	"\365"
#define      msg1_z	42
#define      msg1	((&data[519]))
	"\036\001\307\201\067\021\262\171\155\377\133\111\350\174\266\317"
	"\317\007\146\102\251\125\233\274\321\032\214\236\121\342\210\157"
	"\320\113\147\141\334\043\106\240\010\304\117\365\310\245\076\321"
	"\375\133\134\135\014\024\006\107"
#define      text_z	307
#define      text	((&data[594]))
	"\070\312\212\173\011\244\357\243\076\114\205\112\012\025\151\014"
	"\335\352\103\356\235\275\113\373\311\140\002\131\207\315\222\374"
	"\321\236\355\021\056\116\162\310\133\355\040\061\017\243\110\154"
	"\340\173\324\010\220\243\342\060\130\277\063\120\215\057\323\035"
	"\054\022\306\336\352\135\076\023\271\364\263\104\055\037\151\141"
	"\040\144\164\362\337\147\231\135\031\343\075\342\144\371\070\201"
	"\060\254\113\271\276\205\031\045\101\216\015\235\305\337\174\333"
	"\315\027\344\305\041\246\247\347\341\170\354\370\124\124\000\347"
	"\310\074\367\365\031\103\261\177\323\126\313\332\030\007\147\342"
	"\352\104\153\324\353\106\124\203\232\035\303\026\355\143\114\327"
	"\160\107\224\024\046\142\272\367\302\363\240\063\273\033\307\363"
	"\075\171\174\177\013\340\005\067\160\173\055\171\360\125\135\237"
	"\024\036\315\006\377\200\246\221\123\207\065\115\051\042\262\270"
	"\012\366\143\207\375\017\006\044\330\060\076\026\127\320\276\135"
	"\000\311\275\332\265\061\042\327\273\006\177\156\305\356\271\346"
	"\252\257\051\043\144\324\121\242\101\334\343\167\020\077\357\375"
	"\363\204\266\026\104\313\254\272\104\254\264\330\156\210\346\267"
	"\101\234\310\250\127\145\031\336\065\143\345\305\111\207\352\273"
	"\013\311\037\173\040\320\137\373\026\272\217\055\252\341\100\352"
	"\106\110\016\276\350\226\345\150\013\251\316\101\172\215\111\154"
	"\377\316\120\301\020\170\201\261\373\144\335\216\060\276\020\247"
	"\137\340\340\051\153\133\062\017\113\326\115\227\133\230\242\160"
	"\001\256\115\354\362\074\212\257\207\205\170\347\207\211\217\346"
	"\152\157\017\325\313\102\344\026\030\062\255\164\313\120\344\314"
	"\376\062\271\360\156\103\237\366\310\030\336\120"
#define      date_z	1
#define      date	((&data[963]))
	"\215"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		if (text_z < hide_z) {
			/* Prepend spaces til a hide_z script size. */
			scrpt = malloc(hide_z);
			if (!scrpt)
				return 0;
			memset(scrpt, (int) ' ', hide_z);
			memcpy(&scrpt[hide_z - text_z], text, text_z);
		} else {
			scrpt = text;	/* Script text */
		}
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, argv[0]);
		} else {
			scrpt = argv[0];
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
