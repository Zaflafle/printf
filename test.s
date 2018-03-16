maintest_printf.c:221:58: warning: invalid conversion specifier 'R' [-Wformat-invalid-specifier]
        printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%10RR|"));
                                                             ~~~^
maintest_printf.c:223:59: warning: invalid conversion specifier 'R' [-Wformat-invalid-specifier]
        printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%#10RR|"));
                                                             ~~~~^
maintest_printf.c:225:59: warning: invalid conversion specifier 'R' [-Wformat-invalid-specifier]
        printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%010RR|"));
                                                             ~~~~^
maintest_printf.c:227:59: warning: invalid conversion specifier 'R' [-Wformat-invalid-specifier]
        printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%+10RR|"));
                                                             ~~~~^
maintest_printf.c:229:59: warning: invalid conversion specifier 'R' [-Wformat-invalid-specifier]
        printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%-10RR|"));
                                                             ~~~~^
maintest_printf.c:231:61: warning: invalid conversion specifier 'R' [-Wformat-invalid-specifier]
        printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%#10.5RR|"));
                                                             ~~~~~~^
maintest_printf.c:233:61: warning: invalid conversion specifier 'R' [-Wformat-invalid-specifier]
        printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%010.5RR|"));
                                                             ~~~~~~^
maintest_printf.c:235:61: warning: invalid conversion specifier 'R' [-Wformat-invalid-specifier]
        printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|%+10.5RR|"));
                                                             ~~~~~~^
maintest_printf.c:237:62: warning: invalid conversion specifier 'R' [-Wformat-invalid-specifier]
        printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%-10.5RR|"));
                                                              ~~~~~~^
maintest_printf.c:256:56: warning: flag '0' results in undefined behavior with 'c' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%05.c|", 0));
                                                             ~^~~~
maintest_printf.c:258:56: warning: flag '0' results in undefined behavior with 'c' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%05.c|", 'a'));
                                                             ~^~~~
maintest_printf.c:262:56: warning: length modifier 'hh' results in undefined behavior or no effect with 'c' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%hhc|", '4'));
                                                             ~^~~
maintest_printf.c:264:56: warning: length modifier 'h' results in undefined behavior or no effect with 'c' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%hc|", '4'));
                                                             ~^~
maintest_printf.c:266:56: warning: length modifier 'll' results in undefined behavior or no effect with 'c' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%llc|", '4'));
                                                             ~^~~
maintest_printf.c:268:56: warning: length modifier 'j' results in undefined behavior or no effect with 'c' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%jc|", '4'));
                                                             ~^~
maintest_printf.c:270:56: warning: length modifier 'z' results in undefined behavior or no effect with 'c' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%zc|", '4'));
                                                             ~^~
maintest_printf.c:272:56: warning: flag '+' results in undefined behavior with 'c' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|%+c|", 'a'));
                                                             ~^~
maintest_printf.c:274:57: warning: flag '#' results in undefined behavior with 'c' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%#c|", 'a'));
                                                              ~^~
maintest_printf.c:284:57: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%.2c|", NULL));
                                                              ~^~~
maintest_printf.c:284:64: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%.2c|", NULL));
                                                              ~~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:286:57: warning: flag ' ' results in undefined behavior with 'c' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|% c|", 0));
                                                              ~^~
maintest_printf.c:288:62: warning: format specifies type 'int' but the argument has type 'char *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%c|", "coucou"));
                                                              ~~    ^~~~~~~~
                                                              %s
maintest_printf.c:290:57: warning: flag '0' results in undefined behavior with 'c' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%05.c|", 'a'));
                                                              ~^~~~
maintest_printf.c:292:57: warning: flag '0' results in undefined behavior with 'c' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%015c|", '4'));
                                                              ~^~~~
maintest_printf.c:294:58: warning: flag '0' results in undefined behavior with 'c' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%-015c|", '4'));
                                                              ~~^~~~
maintest_printf.c:294:58: warning: flag '0' is ignored when flag '-' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%-015c|", '4'));
                                                              ~~^~~~
maintest_printf.c:296:58: warning: flag '0' results in undefined behavior with 'c' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%-0c|", '4'));
                                                              ~~^~
maintest_printf.c:296:58: warning: flag '0' is ignored when flag '-' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%-0c|", '4'));
                                                              ~~^~
maintest_printf.c:298:57: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%.12c|", '4'));
                                                              ~^~~~
maintest_printf.c:300:57: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%.0c|", '4'));
                                                              ~^~~
maintest_printf.c:302:60: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%-12.3c|", '4'));
                                                              ~~~~^~~
maintest_printf.c:304:59: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%-3.1c|", 'a'));
                                                              ~~~^~~
maintest_printf.c:306:59: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%12.1c|", 'a'));
                                                              ~~~^~~
maintest_printf.c:308:58: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%3.1c|", '4'));
                                                              ~~^~~
maintest_printf.c:310:63: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%-c|", NULL));
                                                              ~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:312:63: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%3c|", NULL));
                                                              ~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:314:64: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|%-3c|", NULL));
                                                              ~~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:316:57: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 31 => \033[0m|%.2c|", 'a'));
                                                              ~^~~
maintest_printf.c:318:58: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%5.5c|", "N"));
                                                              ~~^~~
maintest_printf.c:318:65: warning: format specifies type 'int' but the argument has type 'char *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%5.5c|", "N"));
                                                              ~~~~~    ^~~
                                                              %5.5s
maintest_printf.c:320:58: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%7.5c|", "Number 42"));
                                                              ~~^~~
maintest_printf.c:320:65: warning: format specifies type 'int' but the argument has type 'char *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%7.5c|", "Number 42"));
                                                              ~~~~~    ^~~~~~~~~~~
                                                              %7.5s
maintest_printf.c:322:57: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|%.5c|", "Number 42"));
                                                              ~^~~
maintest_printf.c:322:64: warning: format specifies type 'int' but the argument has type 'char *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|%.5c|", "Number 42"));
                                                              ~~~~    ^~~~~~~~~~~
                                                              %.5s
maintest_printf.c:324:57: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 35 => \033[0m|%.15c|", "Number 42"));
                                                              ~^~~~
maintest_printf.c:324:65: warning: format specifies type 'int' but the argument has type 'char *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 35 => \033[0m|%.15c|", "Number 42"));
                                                              ~~~~~    ^~~~~~~~~~~
                                                              %.15s
maintest_printf.c:326:64: warning: format specifies type 'int' but the argument has type 'char *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 36 => \033[0m|%15c|", "Number 42"));
                                                              ~~~~    ^~~~~~~~~~~
                                                              %15s
maintest_printf.c:328:63: warning: format specifies type 'int' but the argument has type 'char *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 37 => \033[0m|%5c|", "Number 42"));
                                                              ~~~    ^~~~~~~~~~~
                                                              %5s
maintest_printf.c:330:59: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 38 => \033[0m|%-5.5c|", "Number 42"));
                                                              ~~~^~~
maintest_printf.c:330:66: warning: format specifies type 'int' but the argument has type 'char *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 38 => \033[0m|%-5.5c|", "Number 42"));
                                                              ~~~~~~    ^~~~~~~~~~~
                                                              %-5.5s
maintest_printf.c:332:60: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 39 => \033[0m|%-15.5c|", "Number 42"));
                                                              ~~~~^~~
maintest_printf.c:332:67: warning: format specifies type 'int' but the argument has type 'char *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 39 => \033[0m|%-15.5c|", "Number 42"));
                                                              ~~~~~~~    ^~~~~~~~~~~
                                                              %-15.5s
maintest_printf.c:334:58: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 40 => \033[0m|%-.5c|", "Number 42"));
                                                              ~~^~~
maintest_printf.c:334:65: warning: format specifies type 'int' but the argument has type 'char *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 40 => \033[0m|%-.5c|", "Number 42"));
                                                              ~~~~~    ^~~~~~~~~~~
                                                              %-.5s
maintest_printf.c:336:65: warning: format specifies type 'int' but the argument has type 'char *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 41 => \033[0m|%-15c|", "Number 42"));
                                                              ~~~~~    ^~~~~~~~~~~
                                                              %-15s
maintest_printf.c:338:62: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 42 => \033[0m|%c|", NULL));
                                                              ~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:340:63: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 43 => \033[0m|%-c|", NULL));
                                                              ~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:342:58: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 44 => \033[0m|%5.5c|", NULL));
                                                              ~~^~~
maintest_printf.c:342:65: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 44 => \033[0m|%5.5c|", NULL));
                                                              ~~~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:344:59: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 45 => \033[0m|%15.5c|", NULL));
                                                              ~~~^~~
maintest_printf.c:344:66: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 45 => \033[0m|%15.5c|", NULL));
                                                              ~~~~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:346:57: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 46 => \033[0m|%.5c|", NULL));
                                                              ~^~~
maintest_printf.c:346:64: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 46 => \033[0m|%.5c|", NULL));
                                                              ~~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:348:64: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 47 => \033[0m|%15c|", NULL));
                                                              ~~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:350:59: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 48 => \033[0m|%-5.5c|", NULL));
                                                              ~~~^~~
maintest_printf.c:350:66: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 48 => \033[0m|%-5.5c|", NULL));
                                                              ~~~~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:352:60: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 49 => \033[0m|%-15.5c|", NULL));
                                                              ~~~~^~~
maintest_printf.c:352:67: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 49 => \033[0m|%-15.5c|", NULL));
                                                              ~~~~~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:354:58: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 50 => \033[0m|%-.5c|", NULL));
                                                              ~~^~~
maintest_printf.c:354:65: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 50 => \033[0m|%-.5c|", NULL));
                                                              ~~~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:356:65: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 51 => \033[0m|%-15c|", NULL));
                                                              ~~~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:358:64: warning: format specifies type 'int' but the argument has type 'char *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 52 => \033[0m|%15c|", "bonjour"));
                                                              ~~~~    ^~~~~~~~~
                                                              %15s
maintest_printf.c:367:56: warning: flag '0' results in undefined behavior with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%05.s|", 0));
                                                             ~^~~~
maintest_printf.c:367:64: warning: format specifies type 'char *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%05.s|", 0));
                                                             ~~~~~    ^
                                                             %05d
maintest_printf.c:369:56: warning: flag '0' results in undefined behavior with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%05.s|", "42"));
                                                             ~^~~~
maintest_printf.c:371:57: warning: flag '0' results in undefined behavior with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 2b => \033[0m|%05.2s|", "42"));
                                                              ~^~~~~
maintest_printf.c:375:56: warning: length modifier 'hh' results in undefined behavior or no effect with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%hhs|", "salut"));
                                                             ~^~~
maintest_printf.c:377:56: warning: length modifier 'h' results in undefined behavior or no effect with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%hs|", "salut"));
                                                             ~^~
maintest_printf.c:379:56: warning: length modifier 'll' results in undefined behavior or no effect with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%lls|", "salut"));
                                                             ~^~~
maintest_printf.c:381:56: warning: length modifier 'j' results in undefined behavior or no effect with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%js|", "salut"));
                                                             ~^~
maintest_printf.c:383:56: warning: length modifier 'z' results in undefined behavior or no effect with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%zs|", "salut"));
                                                             ~^~
maintest_printf.c:385:56: warning: flag ' ' results in undefined behavior with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|% s|", NULL));
                                                             ~^~
maintest_printf.c:387:57: warning: flag '+' results in undefined behavior with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%+s|", 0));
                                                              ~^~
maintest_printf.c:387:63: warning: format specifies type 'char *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%+s|", 0));
                                                              ~~~    ^
                                                              %+d
maintest_printf.c:389:57: warning: flag '#' results in undefined behavior with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%#s|", 0));
                                                              ~^~
maintest_printf.c:389:63: warning: format specifies type 'char *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%#s|", 0));
                                                              ~~~    ^
                                                              %d
maintest_printf.c:391:57: warning: flag '#' results in undefined behavior with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%#s|", "hola"));
                                                              ~^~
maintest_printf.c:439:57: warning: flag '0' results in undefined behavior with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|%05.s|", "salut"));
                                                              ~^~~~
maintest_printf.c:443:57: warning: flag '0' results in undefined behavior with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 35 => \033[0m|%015s|", "salut"));
                                                              ~^~~~
maintest_printf.c:445:58: warning: flag '0' results in undefined behavior with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 36 => \033[0m|%-015s|", "salut"));
                                                              ~~^~~~
maintest_printf.c:445:58: warning: flag '0' is ignored when flag '-' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 36 => \033[0m|%-015s|", "salut"));
                                                              ~~^~~~
maintest_printf.c:447:58: warning: flag '0' results in undefined behavior with 's' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 37 => \033[0m|%-0s|", "salut"));
                                                              ~~^~
maintest_printf.c:447:58: warning: flag '0' is ignored when flag '-' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 37 => \033[0m|%-0s|", "salut"));
                                                              ~~^~
maintest_printf.c:478:62: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 0 => \033[0m|%5p|", 0));
                                                             ~~~    ^
                                                             %5d
maintest_printf.c:480:56: warning: flag '0' results in undefined behavior with 'p' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%05p|", 0));
                                                             ~^~~
maintest_printf.c:480:63: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%05p|", 0));
                                                             ~~~~    ^
                                                             %05d
maintest_printf.c:482:57: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%9.2p|", 1234));
                                                             ~~^~~
maintest_printf.c:482:64: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%9.2p|", 1234));
                                                             ~~~~~    ^~~~
                                                             %9.2d
maintest_printf.c:484:58: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%#9.2p|", 1234));
                                                             ~~~^~~
maintest_printf.c:484:56: warning: flag '#' results in undefined behavior with 'p' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%#9.2p|", 1234));
                                                             ~^~~~~
maintest_printf.c:484:65: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%#9.2p|", 1234));
                                                             ~~~~~~    ^~~~
                                                             %9.2d
maintest_printf.c:486:56: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%.0p|, |%.p|", 0, 0));
                                                             ~^~~
maintest_printf.c:486:70: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%.0p|, |%.p|", 0, 0));
                                                             ~~~~           ^
                                                             %.0d
maintest_printf.c:486:73: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%.0p|, |%.p|", 0, 0));
                                                                     ~~~       ^
                                                                     %d
maintest_printf.c:488:56: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%.1p|, |%.2p|", 0, 0));
                                                             ~^~~
maintest_printf.c:488:71: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%.1p|, |%.2p|", 0, 0));
                                                             ~~~~            ^
                                                             %.1d
maintest_printf.c:488:64: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%.1p|, |%.2p|", 0, 0));
                                                                     ~^~~
maintest_printf.c:488:74: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%.1p|, |%.2p|", 0, 0));
                                                                     ~~~~       ^
                                                                     %.2d
maintest_printf.c:490:56: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%.3p|, |%.5p|", 0, 0));
                                                             ~^~~
maintest_printf.c:490:71: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%.3p|, |%.5p|", 0, 0));
                                                             ~~~~            ^
                                                             %.3d
maintest_printf.c:490:64: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%.3p|, |%.5p|", 0, 0));
                                                                     ~^~~
maintest_printf.c:490:74: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%.3p|, |%.5p|", 0, 0));
                                                                     ~~~~       ^
                                                                     %.5d
maintest_printf.c:492:58: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%10.5p|, |%5.10p|", 0, 0));
                                                             ~~~^~~
maintest_printf.c:492:75: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%10.5p|, |%5.10p|", 0, 0));
                                                             ~~~~~~              ^
                                                             %10.5d
maintest_printf.c:492:67: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%10.5p|, |%5.10p|", 0, 0));
                                                                       ~~^~~~
maintest_printf.c:492:78: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%10.5p|, |%5.10p|", 0, 0));
                                                                       ~~~~~~       ^
                                                                       %5.10d
maintest_printf.c:494:59: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%-10.5p|, |%-5.10p|", 0, 0));
                                                             ~~~~^~~
maintest_printf.c:494:77: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%-10.5p|, |%-5.10p|", 0, 0));
                                                             ~~~~~~~               ^
                                                             %-10.5d
maintest_printf.c:494:69: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%-10.5p|, |%-5.10p|", 0, 0));
                                                                        ~~~^~~~
maintest_printf.c:494:80: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%-10.5p|, |%-5.10p|", 0, 0));
                                                                        ~~~~~~~       ^
                                                                        %-5.10d
maintest_printf.c:496:59: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 7b => \033[0m|%10.5p|, |%5.10p|", 42, 42));
                                                              ~~~^~~
maintest_printf.c:496:76: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 7b => \033[0m|%10.5p|, |%5.10p|", 42, 42));
                                                              ~~~~~~              ^~
                                                              %10.5d
maintest_printf.c:496:68: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 7b => \033[0m|%10.5p|, |%5.10p|", 42, 42));
                                                                        ~~^~~~
maintest_printf.c:496:80: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 7b => \033[0m|%10.5p|, |%5.10p|", 42, 42));
                                                                        ~~~~~~        ^~
                                                                        %5.10d
maintest_printf.c:498:60: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 8b => \033[0m|%-10.5p|, |%-5.10p|", 42, 42));
                                                              ~~~~^~~
maintest_printf.c:498:78: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 8b => \033[0m|%-10.5p|, |%-5.10p|", 42, 42));
                                                              ~~~~~~~               ^~
                                                              %-10.5d
maintest_printf.c:498:70: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 8b => \033[0m|%-10.5p|, |%-5.10p|", 42, 42));
                                                                         ~~~^~~~
maintest_printf.c:498:82: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 8b => \033[0m|%-10.5p|, |%-5.10p|", 42, 42));
                                                                         ~~~~~~~        ^~
                                                                         %-5.10d
maintest_printf.c:504:62: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%p|", 0));
                                                              ~~    ^
                                                              %d
maintest_printf.c:506:57: warning: length modifier 'l' results in undefined behavior or no effect with 'p' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%lp|", 42));
                                                              ~^~
maintest_printf.c:506:63: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%lp|", 42));
                                                              ~~~    ^~
                                                              %d
maintest_printf.c:508:63: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%5p|", 0));
                                                              ~~~    ^
                                                              %5d
maintest_printf.c:510:57: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%.0p|, |%.p|", 0, 0));
                                                              ~^~~
maintest_printf.c:510:71: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%.0p|, |%.p|", 0, 0));
                                                              ~~~~           ^
                                                              %.0d
maintest_printf.c:510:74: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%.0p|, |%.p|", 0, 0));
                                                                      ~~~       ^
                                                                      %d
maintest_printf.c:512:57: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%.1p|, |%.2p|", 0, 0));
                                                              ~^~~
maintest_printf.c:512:72: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%.1p|, |%.2p|", 0, 0));
                                                              ~~~~            ^
                                                              %.1d
maintest_printf.c:512:65: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%.1p|, |%.2p|", 0, 0));
                                                                      ~^~~
maintest_printf.c:512:75: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%.1p|, |%.2p|", 0, 0));
                                                                      ~~~~       ^
                                                                      %.2d
maintest_printf.c:514:57: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%.3p|, |%.5p|", 0, 0));
                                                              ~^~~
maintest_printf.c:514:72: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%.3p|, |%.5p|", 0, 0));
                                                              ~~~~            ^
                                                              %.3d
maintest_printf.c:514:65: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%.3p|, |%.5p|", 0, 0));
                                                                      ~^~~
maintest_printf.c:514:75: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%.3p|, |%.5p|", 0, 0));
                                                                      ~~~~       ^
                                                                      %.5d
maintest_printf.c:516:59: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%10.5p|, |%10.5p|", 0, 0));
                                                              ~~~^~~
maintest_printf.c:516:76: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%10.5p|, |%10.5p|", 0, 0));
                                                              ~~~~~~              ^
                                                              %10.5d
maintest_printf.c:516:69: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%10.5p|, |%10.5p|", 0, 0));
                                                                        ~~~^~~
maintest_printf.c:516:79: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%10.5p|, |%10.5p|", 0, 0));
                                                                        ~~~~~~       ^
                                                                        %10.5d
maintest_printf.c:518:60: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%-10.5p|, |%-10.5p|", 0, 0));
                                                              ~~~~^~~
maintest_printf.c:518:78: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%-10.5p|, |%-10.5p|", 0, 0));
                                                              ~~~~~~~               ^
                                                              %-10.5d
maintest_printf.c:518:71: warning: precision used with 'p' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%-10.5p|, |%-10.5p|", 0, 0));
                                                                         ~~~~^~~
maintest_printf.c:518:81: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%-10.5p|, |%-10.5p|", 0, 0));
                                                                         ~~~~~~~       ^
                                                                         %-10.5d
maintest_printf.c:520:62: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%p|", 42));
                                                              ~~    ^~
                                                              %d
maintest_printf.c:522:64: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%-5p|", 42));
                                                              ~~~~    ^~
                                                              %-5d
maintest_printf.c:524:62: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%p|", 0));
                                                              ~~    ^
                                                              %d
maintest_printf.c:526:63: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%5p|", 0));
                                                              ~~~    ^
                                                              %5d
maintest_printf.c:528:58: warning: flag '0' results in undefined behavior with 'p' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#05p|", 42));
                                                              ~~^~~
maintest_printf.c:528:57: warning: flag '#' results in undefined behavior with 'p' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#05p|", 42));
                                                              ~^~~~
maintest_printf.c:528:65: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#05p|", 42));
                                                              ~~~~~    ^~
                                                              %05d
maintest_printf.c:530:58: warning: flag '0' results in undefined behavior with 'p' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#05p|", 0));
                                                              ~~^~~
maintest_printf.c:530:57: warning: flag '#' results in undefined behavior with 'p' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#05p|", 0));
                                                              ~^~~~
maintest_printf.c:530:65: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#05p|", 0));
                                                              ~~~~~    ^
                                                              %05d
maintest_printf.c:532:57: warning: flag '#' results in undefined behavior with 'p' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#5p|", 0));
                                                              ~^~~
maintest_printf.c:532:64: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#5p|", 0));
                                                              ~~~~    ^
                                                              %5d
maintest_printf.c:534:57: warning: flag '#' results in undefined behavior with 'p' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%#-5p|", 0));
                                                              ~^~~~
maintest_printf.c:534:65: warning: format specifies type 'void *' but the argument has type 'int' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%#-5p|", 0));
                                                              ~~~~~    ^
                                                              %-5d
maintest_printf.c:543:56: warning: flag '+' results in undefined behavior with 'x' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%+x|", (unsigned int)42));
                                                             ~^~
maintest_printf.c:545:56: warning: flag ' ' results in undefined behavior with 'x' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|% x|", (unsigned int)42));
                                                             ~^~
maintest_printf.c:662:56: warning: flag ' ' results in undefined behavior with 'o' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|% o|", 42));
                                                             ~^~
maintest_printf.c:664:56: warning: flag '+' results in undefined behavior with 'o' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%+o|", 42));
                                                             ~^~
maintest_printf.c:787:56: warning: flag '#' results in undefined behavior with 'u' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%#u|", (unsigned int)42));
                                                             ~^~
maintest_printf.c:835:58: warning: flag '0' is ignored when flag '-' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%-0u|", (unsigned int)42));
                                                              ~~^~
maintest_printf.c:837:58: warning: flag '0' is ignored when flag '-' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%-0.u|", (unsigned int)42));
                                                              ~~^~~
maintest_printf.c:839:58: warning: flag '0' is ignored when flag '-' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%-0.5u|", (unsigned int)42));
                                                              ~~^~~~
maintest_printf.c:867:57: warning: flag '#' results in undefined behavior with 'u' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 43 => \033[0m|%#9.2u|", 1234));
                                                              ~^~~~~
maintest_printf.c:887:57: warning: flag '#' results in undefined behavior with 'u' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 53 => \033[0m|%#05u|", 42));
                                                              ~^~~~
maintest_printf.c:889:57: warning: flag '#' results in undefined behavior with 'u' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 54 => \033[0m|%#05u|", 0));
                                                              ~^~~~
maintest_printf.c:891:57: warning: flag '#' results in undefined behavior with 'u' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 55 => \033[0m|%#5u|", 0));
                                                              ~^~~
maintest_printf.c:893:58: warning: flag '#' results in undefined behavior with 'u' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 56 => \033[0m|%-#5u|", 0));
                                                              ~~^~~
maintest_printf.c:1125:56: warning: flag '0' results in undefined behavior with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%05.S|", L"42 c est cool"));
                                                             ~^~~~
maintest_printf.c:1127:56: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%.4S|", L"我¼是一只猫。"));
                                                             ~^~~
maintest_printf.c:1129:58: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%15.6S|", L"我¼是一只猫。"));
                                                             ~~~^~~
maintest_printf.c:1131:60: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3b => \033[0m|%-15.5S|", L"我是一只猫。"));
                                                              ~~~~^~~
maintest_printf.c:1133:59: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3c => \033[0m|%15.5S|", L"᳄᳄᳄᳄᳄᳄"));
                                                              ~~~^~~
maintest_printf.c:1135:60: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3d => \033[0m|%-15.5S|", L"᳄᳄᳄᳄᳄᳄"));
                                                              ~~~~^~~
maintest_printf.c:1137:60: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3e => \033[0m|%-45.25S|", L"᳄ ᳄ ᳄ ᳄ ᳄ ᳄ "));
                                                              ~~~~^~~~
maintest_printf.c:1139:60: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3f => \033[0m|%-45.25S|", L"᳄ ᳄ ᳄ ᳄ ᳄ ᳄ "));
                                                              ~~~~^~~~
maintest_printf.c:1141:57: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%4.15S|", L"我是一只猫。"));
                                                             ~~^~~~
maintest_printf.c:1145:57: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%4.1S|", L"Jambon"));
                                                             ~~^~~
maintest_printf.c:1165:59: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%22.4S|", L"<U+1F9C0> <U+1F9C0> <U+1F9C0> <U+1F9C0> <U+1F9C0> "));
                                                              ~~~^~~
maintest_printf.c:1167:62: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 16b => \033[0m|%-022.4S|", L"<U+1F9C0> <U+1F9C0> <U+1F9C0> <U+1F9C0> <U+1F9C0> "));
                                                               ~~~~~^~~
maintest_printf.c:1167:59: warning: flag '0' results in undefined behavior with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 16b => \033[0m|%-022.4S|", L"<U+1F9C0> <U+1F9C0> <U+1F9C0> <U+1F9C0> <U+1F9C0> "));
                                                               ~~^~~~~~
maintest_printf.c:1167:59: warning: flag '0' is ignored when flag '-' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 16b => \033[0m|%-022.4S|", L"<U+1F9C0> <U+1F9C0> <U+1F9C0> <U+1F9C0> <U+1F9C0> "));
                                                               ~~^~~~~~
maintest_printf.c:1169:58: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%4.22S|", L"😐  😐 "));
                                                              ~~^~~~
maintest_printf.c:1173:57: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%.22S|", L"😐  😐 "));
                                                              ~^~~~
maintest_printf.c:1177:58: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%0.0S|", L"᳄ "));
                                                              ~~^~~
maintest_printf.c:1177:57: warning: flag '0' results in undefined behavior with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%0.0S|", L"᳄ "));
                                                              ~^~~~
maintest_printf.c:1179:58: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%0.5S|", L"᳄ ᳄ "));
                                                              ~~^~~
maintest_printf.c:1179:57: warning: flag '0' results in undefined behavior with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%0.5S|", L"᳄ ᳄ "));
                                                              ~^~~~
maintest_printf.c:1181:62: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~~~~^~~
maintest_printf.c:1181:61: warning: flag '0' results in undefined behavior with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~~~^~~~
maintest_printf.c:1181:59: warning: flag '+' results in undefined behavior with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~^~~~~~
maintest_printf.c:1181:60: warning: flag ' ' results in undefined behavior with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~~^~~~~
maintest_printf.c:1181:57: warning: flag '#' results in undefined behavior with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~^~~~~~~~
maintest_printf.c:1181:60: warning: flag ' ' is ignored when flag '+' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~~^~~~~
maintest_printf.c:1181:61: warning: flag '0' is ignored when flag '-' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~~~^~~~
maintest_printf.c:1183:62: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~~~~^~~~
maintest_printf.c:1183:61: warning: flag '0' results in undefined behavior with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~~~^~~~~
maintest_printf.c:1183:59: warning: flag '+' results in undefined behavior with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~^~~~~~~
maintest_printf.c:1183:60: warning: flag ' ' results in undefined behavior with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~~^~~~~~
maintest_printf.c:1183:57: warning: flag '#' results in undefined behavior with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~^~~~~~~~~
maintest_printf.c:1183:60: warning: flag ' ' is ignored when flag '+' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~~^~~~~~
maintest_printf.c:1183:61: warning: flag '0' is ignored when flag '-' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~~~^~~~~
maintest_printf.c:1185:62: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#-+ 5.12S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~~~~^~~~
maintest_printf.c:1185:59: warning: flag '+' results in undefined behavior with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#-+ 5.12S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~^~~~~~~
maintest_printf.c:1185:60: warning: flag ' ' results in undefined behavior with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#-+ 5.12S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~~^~~~~~
maintest_printf.c:1185:57: warning: flag '#' results in undefined behavior with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#-+ 5.12S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~^~~~~~~~~
maintest_printf.c:1185:60: warning: flag ' ' is ignored when flag '+' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#-+ 5.12S|", L"<U+1F9C0> <U+1F9C0> "));
                                                              ~~~~^~~~~~
maintest_printf.c:1187:57: warning: length modifier 'hh' results in undefined behavior or no effect with 'S' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%hhS|", L"<U+1F9C0> "));
                                                              ~^~~
maintest_printf.c:1189:58: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%5.12S|", L""));
                                                              ~~^~~~
maintest_printf.c:1193:58: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%5.12S|", NULL));
                                                              ~~^~~~
maintest_printf.c:1193:66: warning: format specifies type 'wchar_t *' (aka 'int *') but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%5.12S|", NULL));
                                                              ~~~~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:1195:63: warning: format specifies type 'wchar_t *' (aka 'int *') but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|%5S|", NULL));
                                                              ~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:1197:63: warning: format specifies type 'wchar_t *' (aka 'int *') but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 31 => \033[0m|%8S|", NULL));
                                                              ~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:1199:57: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%.2S|", NULL));
                                                              ~^~~
maintest_printf.c:1199:64: warning: format specifies type 'wchar_t *' (aka 'int *') but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%.2S|", NULL));
                                                              ~~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:1201:58: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%8.2S|", NULL));
                                                              ~~^~~
maintest_printf.c:1201:65: warning: format specifies type 'wchar_t *' (aka 'int *') but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%8.2S|", NULL));
                                                              ~~~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:1203:59: warning: precision used with 'S' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|%-8.2S|", NULL));
                                                              ~~~^~~
maintest_printf.c:1203:66: warning: format specifies type 'wchar_t *' (aka 'int *') but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|%-8.2S|", NULL));
                                                              ~~~~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:1214:56: warning: flag '0' results in undefined behavior with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%05.C|", L'l'));
                                                             ~^~~~
maintest_printf.c:1216:56: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%.4C|", L'我'));
                                                             ~^~~
maintest_printf.c:1218:58: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%15.5C|", L'我'));
                                                             ~~~^~~
maintest_printf.c:1220:60: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3b => \033[0m|%-15.5C|", L'我'));
                                                              ~~~~^~~
maintest_printf.c:1222:59: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3c => \033[0m|%15.5C|", L'᳄'));
                                                              ~~~^~~
maintest_printf.c:1224:60: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3d => \033[0m|%-15.5C|", L'᳄'));
                                                              ~~~~^~~
maintest_printf.c:1226:60: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3e => \033[0m|%-45.25C|", L'᳄'));
                                                              ~~~~^~~~
maintest_printf.c:1228:60: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 3f => \033[0m|%-45.25C|", L'᳄'));
                                                              ~~~~^~~~
maintest_printf.c:1230:57: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%4.15C|", L'我'));
                                                             ~~^~~~
maintest_printf.c:1234:64: warning: extraneous characters in character constant ignored
        printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%4.1C|", L'Jambon'));
                                                                      ^
maintest_printf.c:1234:57: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%4.1C|", L'Jambon'));
                                                             ~~^~~
maintest_printf.c:1235:70: warning: extraneous characters in character constant ignored
        ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%4.1C|", L'Jambon'));
                                                                            ^
maintest_printf.c:1236:64: warning: extraneous characters in character constant ignored
        printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%4.1C|", L'Merci'));
                                                                      ^
maintest_printf.c:1236:57: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%4.1C|", L'Merci'));
                                                             ~~^~~
maintest_printf.c:1237:70: warning: extraneous characters in character constant ignored
        ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%4.1C|", L'Merci'));
                                                                            ^
maintest_printf.c:1256:59: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%22.4C|", L'<U+1F9C0>'));
                                                              ~~~^~~
maintest_printf.c:1258:62: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 16b => \033[0m|%-022.4C|", L'<U+1F9C0>'));
                                                               ~~~~~^~~
maintest_printf.c:1258:59: warning: flag '0' results in undefined behavior with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 16b => \033[0m|%-022.4C|", L'<U+1F9C0>'));
                                                               ~~^~~~~~
maintest_printf.c:1258:59: warning: flag '0' is ignored when flag '-' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 16b => \033[0m|%-022.4C|", L'<U+1F9C0>'));
                                                               ~~^~~~~~
maintest_printf.c:1260:58: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%4.22C|", L'😐'));
                                                              ~~^~~~
maintest_printf.c:1264:57: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%.22C|", L'😐'));
                                                              ~^~~~
maintest_printf.c:1266:62: warning: format specifies type 'wchar_t' (aka 'int') but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%C|", NULL));
                                                              ~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:1268:58: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%0.0C|", L'᳄'));
                                                              ~~^~~
maintest_printf.c:1268:57: warning: flag '0' results in undefined behavior with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%0.0C|", L'᳄'));
                                                              ~^~~~
maintest_printf.c:1270:65: warning: extraneous characters in character constant ignored
        printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%0.5C|", L'᳄ ᳄ '));
                                                                       ^
maintest_printf.c:1270:58: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%0.5C|", L'᳄ ᳄ '));
                                                              ~~^~~
maintest_printf.c:1270:57: warning: flag '0' results in undefined behavior with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%0.5C|", L'᳄ ᳄ '));
                                                              ~^~~~
maintest_printf.c:1271:71: warning: extraneous characters in character constant ignored
        ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%0.5C|", L'᳄ ᳄ '));
                                                                             ^
maintest_printf.c:1272:69: warning: extraneous characters in character constant ignored
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0C|", L'<U+1F9C0> <U+1F9C0> '));
                                                                           ^
maintest_printf.c:1272:62: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0C|", L'<U+1F9C0> <U+1F9C0> '));
                                                              ~~~~~~^~~
maintest_printf.c:1272:61: warning: flag '0' results in undefined behavior with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0C|", L'<U+1F9C0> <U+1F9C0> '));
                                                              ~~~~~^~~~
maintest_printf.c:1272:59: warning: flag '+' results in undefined behavior with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0C|", L'<U+1F9C0> <U+1F9C0> '));
                                                              ~~~^~~~~~
maintest_printf.c:1272:60: warning: flag ' ' results in undefined behavior with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0C|", L'<U+1F9C0> <U+1F9C0> '));
                                                              ~~~~^~~~~
maintest_printf.c:1272:57: warning: flag '#' results in undefined behavior with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0C|", L'<U+1F9C0> <U+1F9C0> '));
                                                              ~^~~~~~~~
maintest_printf.c:1272:60: warning: flag ' ' is ignored when flag '+' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0C|", L'<U+1F9C0> <U+1F9C0> '));
                                                              ~~~~^~~~~
maintest_printf.c:1272:61: warning: flag '0' is ignored when flag '-' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%#-+ 0.0C|", L'<U+1F9C0> <U+1F9C0> '));
                                                              ~~~~~^~~~
maintest_printf.c:1273:75: warning: extraneous characters in character constant ignored
        ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|%#-+ 0.0C|", L'<U+1F9C0> <U+1F9C0> '));
                                                                                 ^
maintest_printf.c:1274:62: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12C|", L'<U+1F9C0>'));
                                                              ~~~~~~^~~~
maintest_printf.c:1274:61: warning: flag '0' results in undefined behavior with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12C|", L'<U+1F9C0>'));
                                                              ~~~~~^~~~~
maintest_printf.c:1274:59: warning: flag '+' results in undefined behavior with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12C|", L'<U+1F9C0>'));
                                                              ~~~^~~~~~~
maintest_printf.c:1274:60: warning: flag ' ' results in undefined behavior with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12C|", L'<U+1F9C0>'));
                                                              ~~~~^~~~~~
maintest_printf.c:1274:57: warning: flag '#' results in undefined behavior with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12C|", L'<U+1F9C0>'));
                                                              ~^~~~~~~~~
maintest_printf.c:1274:60: warning: flag ' ' is ignored when flag '+' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12C|", L'<U+1F9C0>'));
                                                              ~~~~^~~~~~
maintest_printf.c:1274:61: warning: flag '0' is ignored when flag '-' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%#-+ 0.12C|", L'<U+1F9C0>'));
                                                              ~~~~~^~~~~
maintest_printf.c:1276:62: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#-+ 5.12C|", L'<U+1F9C0>'));
                                                              ~~~~~~^~~~
maintest_printf.c:1276:59: warning: flag '+' results in undefined behavior with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#-+ 5.12C|", L'<U+1F9C0>'));
                                                              ~~~^~~~~~~
maintest_printf.c:1276:60: warning: flag ' ' results in undefined behavior with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#-+ 5.12C|", L'<U+1F9C0>'));
                                                              ~~~~^~~~~~
maintest_printf.c:1276:57: warning: flag '#' results in undefined behavior with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#-+ 5.12C|", L'<U+1F9C0>'));
                                                              ~^~~~~~~~~
maintest_printf.c:1276:60: warning: flag ' ' is ignored when flag '+' is present [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%#-+ 5.12C|", L'<U+1F9C0>'));
                                                              ~~~~^~~~~~
maintest_printf.c:1278:57: warning: length modifier 'hh' results in undefined behavior or no effect with 'C' conversion specifier [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%hhC|", L'<U+1F9C0>'));
                                                              ~^~~
maintest_printf.c:1280:58: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%5.12C|", 'a'));
                                                              ~~^~~~
maintest_printf.c:1284:58: warning: precision used with 'C' conversion specifier, resulting in undefined behavior [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%5.12C|", NULL));
                                                              ~~^~~~
maintest_printf.c:1284:66: warning: format specifies type 'wchar_t' (aka 'int') but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%5.12C|", NULL));
                                                              ~~~~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
maintest_printf.c:1286:63: warning: format specifies type 'wchar_t' (aka 'int') but the argument has type 'void *' [-Wformat]
        printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|%5C|", NULL));
                                                              ~~~    ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
283 warnings generated.
