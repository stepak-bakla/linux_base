#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	./shc -f level_8.sh 
#endif

static  char data [] = 
#define      chk1_z	22
#define      chk1	((&data[5]))
	"\145\035\011\034\363\157\275\131\317\253\341\046\302\362\221\071"
	"\233\071\123\047\070\026\133\111\117\216\023\302"
#define      text_z	274
#define      text	((&data[78]))
	"\344\074\304\306\227\305\145\013\304\254\175\035\010\131\172\176"
	"\315\117\132\126\063\237\273\121\250\327\105\153\246\001\147\212"
	"\075\054\120\325\361\265\341\265\142\136\322\153\267\114\351\204"
	"\234\104\314\300\231\230\116\170\360\073\007\040\273\011\317\174"
	"\357\030\307\132\325\107\216\017\365\334\164\373\134\055\070\222"
	"\107\152\137\206\143\355\245\312\152\237\322\222\165\275\215\013"
	"\330\132\075\170\171\246\137\216\164\242\371\120\066\011\003\304"
	"\170\220\242\136\134\362\220\136\111\066\315\160\332\156\116\143"
	"\117\105\271\041\174\105\327\113\232\350\100\061\074\120\142\160"
	"\377\030\277\102\063\243\135\321\343\056\042\073\321\161\277\136"
	"\271\067\074\217\337\372\367\061\315\062\342\231\211\062\101\110"
	"\014\303\335\062\232\255\240\357\260\273\201\155\005\377\271\323"
	"\366\133\245\233\157\365\230\003\150\003\333\067\241\220\266\231"
	"\307\205\271\167\151\301\323\177\371\212\023\341\135\011\313\360"
	"\167\302\205\146\052\110\006\242\337\207\116\370\251\261\262\373"
	"\373\305\064\017\137\026\352\212\021\254\030\177\271\135\204\024"
	"\277\373\031\304\074\257\166\316\135\233\360\022\354\127\047\342"
	"\360\263\126\066\010\130\217\344\134\114\221\102\176\215\300\355"
	"\261\373\127\177\153\074\121\302\307\103\371\373\027\161\025\324"
	"\346\361\242\265\337\174\033\327\166\262\217\217\037\320\334\353"
	"\132\230\011\065\332\320\343\226\041\213\156\146\366\024\150\136"
	"\236\245\212\357\172\174\245\133\061\007\272\004\162\161\121\133"
	"\366\356\240\321\277\203\147\340\017\326\107\006\352\260\144\211"
	"\125\357\170\320\153\035\054\235\045\346\241\227\130\363\363\117"
	"\341\223\040\241\027\210\202\046"
#define      xecc_z	15
#define      xecc	((&data[423]))
	"\112\172\222\113\333\105\327\165\361\326\117\032\175\111\273\110"
	"\310\145"
#define      tst2_z	19
#define      tst2	((&data[442]))
	"\113\240\355\151\215\114\074\052\316\202\314\000\256\010\302\257"
	"\174\174\111\327\235\241\074\315\212"
#define      msg2_z	19
#define      msg2	((&data[466]))
	"\046\015\040\300\010\105\362\156\063\001\350\135\375\056\260\371"
	"\045\141\170\261\141\127"
#define      msg1_z	42
#define      msg1	((&data[488]))
	"\255\175\243\331\336\105\021\074\231\316\057\314\037\272\270\021"
	"\110\011\004\140\027\355\204\011\050\113\004\102\365\217\336\115"
	"\304\227\365\000\256\143\123\015\231\004\055\012\046"
#define      opts_z	1
#define      opts	((&data[530]))
	"\244"
#define      chk2_z	19
#define      chk2	((&data[532]))
	"\031\241\163\017\035\010\111\342\057\302\116\306\161\143\254\070"
	"\263\325\216\211\257\151\254\203"
#define      shll_z	10
#define      shll	((&data[555]))
	"\363\311\352\020\330\143\233\151\021\227\331\033"
#define      inlo_z	3
#define      inlo	((&data[567]))
	"\000\265\120"
#define      pswd_z	256
#define      pswd	((&data[593]))
	"\356\150\363\010\305\366\266\102\231\173\111\276\150\257\256\201"
	"\137\027\056\342\120\134\261\244\070\046\042\125\274\115\060\271"
	"\176\172\364\232\161\072\267\100\336\171\057\106\164\253\050\371"
	"\065\271\241\013\316\172\260\007\241\322\134\135\037\215\027\235"
	"\007\013\067\171\106\357\271\045\151\351\154\335\225\224\327\312"
	"\116\170\326\034\363\206\043\224\130\200\362\170\015\011\026\025"
	"\025\115\217\133\075\111\200\247\063\354\205\310\201\134\222\317"
	"\325\151\354\310\357\020\135\110\220\117\300\236\130\326\263\156"
	"\044\103\311\142\214\112\011\277\066\216\210\270\352\032\210\277"
	"\204\164\210\163\204\346\274\025\065\174\263\216\123\147\374\167"
	"\253\306\332\070\020\343\370\107\161\200\377\134\232\207\034\037"
	"\374\244\222\201\212\117\226\300\313\112\116\037\262\113\227\135"
	"\021\161\225\041\124\215\150\306\015\150\042\250\357\076\307\354"
	"\343\132\155\155\251\003\055\165\116\174\224\000\310\053\135\331"
	"\234\363\373\361\201\144\270\216\314\332\067\274\031\377\250\374"
	"\131\025\152\003\031\230\171\147\024\015\147\334\071\305\266\326"
	"\270\261\310\071\026\200\310\342\133\000\236\164\377\107\161\131"
	"\134\333\134\165\164\325\334\052\170\352\321\036\262\055\362\240"
	"\226\346\250\133\334\137\236\166\333\350\064\103\227\342\304\366"
	"\372\362\330\112\117\212\165\307\164\107\346\046\164\330\307\013"
	"\277\160\146\234\317\005\022\252\355\107\355\205"
#define      date_z	1
#define      date	((&data[902]))
	"\150"
#define      lsto_z	1
#define      lsto	((&data[903]))
	"\272"
#define      tst1_z	22
#define      tst1	((&data[909]))
	"\344\274\122\054\242\376\220\046\372\020\150\247\377\363\220\166"
	"\172\301\156\374\371\020\260\251\362\201\313\171\241\173\100\254"
#define      rlax_z	1
#define      rlax	((&data[936]))
	"\322"/* End of data[] */;
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
