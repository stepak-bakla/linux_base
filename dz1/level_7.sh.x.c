#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	./shc -f level_7.sh 
#endif

static  char data [] = 
#define      msg2_z	19
#define      msg2	((&data[2]))
	"\040\201\266\342\055\100\345\240\121\265\004\022\344\323\133\172"
	"\303\145\137\245\001\004\362\127\217"
#define      tst1_z	22
#define      tst1	((&data[26]))
	"\233\171\101\260\024\115\364\142\376\320\360\331\015\304\362\264"
	"\366\260\351\047\153\254\244\147"
#define      pswd_z	256
#define      pswd	((&data[111]))
	"\216\007\322\247\073\176\267\070\135\215\042\202\107\254\034\340"
	"\231\074\141\235\057\271\055\257\362\151\112\131\170\100\115\006"
	"\110\037\256\204\236\145\274\373\363\337\176\073\214\232\033\045"
	"\327\175\303\006\066\360\266\050\131\000\202\322\101\317\013\250"
	"\253\370\246\043\161\067\164\115\275\240\237\155\047\165\164\210"
	"\131\353\001\041\173\327\206\150\113\125\160\212\174\174\062\047"
	"\164\330\113\346\020\277\064\316\137\323\073\207\111\260\020\243"
	"\233\021\304\026\351\112\177\064\240\357\277\034\153\361\104\340"
	"\312\220\307\332\117\373\250\257\316\344\067\027\224\107\272\060"
	"\131\176\107\103\311\306\167\151\266\067\205\042\050\312\002\362"
	"\132\311\315\252\304\166\132\223\132\221\253\357\331\145\037\063"
	"\344\147\166\256\055\356\027\343\045\235\006\115\147\011\100\302"
	"\323\016\154\227\204\307\053\337\131\326\316\062\074\356\145\041"
	"\125\333\317\203\312\346\147\357\203\155\075\353\166\176\256\111"
	"\214\033\341\021\342\014\360\073\343\277\156\037\256\323\100\003"
	"\257\017\206\171\366\356\151\171\133\246\145\321\045\023\033\261"
	"\056\374\303\021\011\264\114\354\163\272\014\041\216\115\045\076"
	"\134\254\270\123\232\041\315\365\310\062\307\355\106\342\237\165"
	"\337\143\206\350\027\322\325\213\215\341\255\033\056\322\132\213"
	"\177\022\336\031\064\254\017\374\336\326\352\045\271\211\331\211"
	"\357\210\015\216\356\312\211\341\252\010\034\066\242\070\133\172"
	"\265\037\201\354\017\067\025\151\070\227\073\171\147\025\002\126"
	"\235\020\345\213\333\156\155\205\167\212\273\032\302\027\224\170"
	"\066\025\145\106\114\172\257\205\021\353\376"
#define      chk1_z	22
#define      chk1	((&data[428]))
	"\264\127\026\063\257\352\065\266\103\071\244\350\371\273\023\263"
	"\001\235\274\223\140\224"
#define      text_z	883
#define      text	((&data[586]))
	"\264\052\354\043\227\161\232\042\055\264\345\104\111\135\173\137"
	"\303\301\254\075\161\061\117\134\057\307\135\061\227\374\102\114"
	"\046\057\160\276\241\013\341\317\300\306\024\011\044\217\150\347"
	"\121\024\044\303\105\164\040\165\073\176\246\323\172\351\040\241"
	"\031\220\140\273\233\101\212\133\007\237\145\053\057\316\023\200"
	"\342\070\104\050\254\144\236\350\342\105\273\134\057\333\376\110"
	"\154\136\004\010\237\217\144\247\056\311\322\135\227\346\336\172"
	"\036\042\243\312\206\102\262\150\207\156\305\266\112\303\377\266"
	"\042\003\276\301\222\042\150\301\257\233\263\300\373\153\132\241"
	"\133\332\264\131\120\011\220\044\055\052\331\372\371\375\166\343"
	"\373\134\133\026\173\203\300\323\376\101\275\353\274\247\324\011"
	"\140\100\361\122\247\044\223\011\012\320\313\106\150\146\025\006"
	"\143\207\364\363\357\210\221\024\336\175\062\363\141\135\377\011"
	"\033\125\017\000\061\347\266\321\021\167\236\223\264\322\270\163"
	"\271\304\167\144\207\363\015\023\065\076\045\121\143\135\045\152"
	"\203\322\152\127\027\055\104\353\164\364\074\352\243\061\263\165"
	"\255\246\342\316\172\304\034\164\131\001\366\112\343\203\275\310"
	"\123\045\240\330\125\130\033\056\243\356\102\255\327\317\031\251"
	"\345\225\240\076\252\025\116\222\070\273\322\233\062\334\044\245"
	"\225\311\041\135\125\376\126\370\162\357\133\327\337\176\026\267"
	"\067\061\305\253\150\335\050\172\250\135\017\374\023\222\155\115"
	"\213\205\361\016\207\010\375\073\344\241\106\202\331\112\313\357"
	"\026\116\357\040\347\216\230\161\344\261\120\075\316\121\116\074"
	"\333\340\266\217\361\200\357\356\027\131\117\225\175\015\251\157"
	"\062\114\167\340\132\210\336\302\271\172\360\041\050\154\332\271"
	"\050\167\351\047\210\040\040\312\373\146\217\273\377\014\237\304"
	"\173\145\024\126\335\030\374\224\131\243\250\260\224\113\036\116"
	"\271\012\030\333\167\245\012\015\272\375\364\011\141\160\340\147"
	"\013\061\166\106\161\007\304\044\117\171\060\114\341\107\220\144"
	"\345\325\160\103\154\326\145\316\074\334\032\237\073\162\065\230"
	"\024\135\024\053\106\301\013\121\072\030\340\170\011\110\166\054"
	"\041\320\366\245\326\160\372\275\040\356\221\137\367\205\064\035"
	"\056\345\140\167\316\041\172\125\271\131\146\347\334\043\152\256"
	"\070\056\144\146\346\063\154\324\002\357\146\316\200\111\263\371"
	"\300\032\123\075\204\344\255\253\030\274\031\053\122\246\037\321"
	"\123\162\054\305\274\021\122\256\130\311\354\047\353\367\221\206"
	"\370\375\373\153\345\262\031\024\040\005\024\274\166\071\050\173"
	"\021\054\131\164\324\107\064\262\222\170\226\231\324\215\055\001"
	"\141\056\143\136\303\220\323\317\043\125\305\260\073\113\161\174"
	"\305\373\304\244\355\312\051\152\012\115\152\350\037\312\150\313"
	"\363\120\357\075\326\241\300\204\346\365\036\247\146\367\257\043"
	"\057\124\221\377\354\376\354\140\032\237\123\033\201\263\002\116"
	"\026\043\024\362\236\263\173\043\051\133\200\120\216\055\156\104"
	"\334\236\237\036\344\106\274\310\054\336\127\111\137\300\306\201"
	"\040\241\164\306\253\002\017\055\270\306\273\261\330\013\323\027"
	"\042\247\200\213\301\043\344\054\360\165\367\246\123\271\206\364"
	"\123\361\151\145\225\201\174\342\025\134\010\352\116\016\053\212"
	"\002\312\004\314\370\273\103\377\107\217\353\354\000\141\336\121"
	"\136\121\043\230\062\361\014\222\012\271\271\077\376\050\005\257"
	"\167\273\026\367\205\142\041\225\136\030\275\363\173\335\266\004"
	"\262\145\136\324\361\237\322\015\116\210\003\356\073\055\021\000"
	"\350\355\205\126\317\241\212\264\316\267\317\045\321\311\337\056"
	"\070\335\212\207\041\345\103\164\136\161\173\245\324\076\257\253"
	"\261\331\103\353\054\346\204\172\351\037\210\170\215\002\033\157"
	"\222\126\061\172\332\305\237\263\045\332\307\353\237\166\046\156"
	"\106\254\167\163\116\136\120\373\210\115\257\357\012\376\145\042"
	"\165\055\172\302\347\060\221\245\340\066\035\222\365\032\201\254"
	"\301\054\104\346\141\073\334\141\252\103\035\372\131\364\304\056"
	"\344\243\167\233\211\372\162\336\051\140\242\335\337\160\100\325"
	"\167\026\013\245\204\252\017\014\105\136\076\155\054\232\003\361"
	"\171\352\272\242\104\360\011\300\336\050\304\045\311\061\257\354"
	"\270\201\056\046\213\320\342\073\241\065\032\123\327\232\315\102"
	"\312\325\371\215\261\026\156\015\144\054\350\234\003\232\166\107"
	"\050\054\200\340\373\045\272\233\047\205\170\354\073\036\204\041"
	"\374\376\077\036\242\012\244\344\274\015"
#define      lsto_z	1
#define      lsto	((&data[1484]))
	"\052"
#define      date_z	1
#define      date	((&data[1485]))
	"\031"
#define      msg1_z	42
#define      msg1	((&data[1487]))
	"\045\003\133\062\142\304\032\136\033\123\307\100\157\224\357\241"
	"\072\037\352\351\123\150\124\107\150\136\332\267\257\142\004\242"
	"\327\267\203\142\337\362\176\106\122\231\064\352\173\270\015\343"
	"\171\372"
#define      shll_z	10
#define      shll	((&data[1537]))
	"\100\007\046\031\220\323\002\243\360\152\320\224"
#define      rlax_z	1
#define      rlax	((&data[1548]))
	"\075"
#define      inlo_z	3
#define      inlo	((&data[1549]))
	"\356\303\153"
#define      xecc_z	15
#define      xecc	((&data[1553]))
	"\157\174\307\233\154\301\043\107\260\375\211\307\233\055\230\240"
	"\161"
#define      opts_z	1
#define      opts	((&data[1569]))
	"\133"
#define      tst2_z	19
#define      tst2	((&data[1573]))
	"\210\331\375\257\342\257\152\065\077\302\373\150\170\334\133\243"
	"\033\033\023\044\160\300"
#define      chk2_z	19
#define      chk2	((&data[1594]))
	"\347\013\165\314\052\245\007\145\253\241\066\360\321\231\175\242"
	"\162\360\266\136\104"/* End of data[] */;
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
