This archive contains Eberhard Mattes' apptype, a program to determine
the type of executable (OS/2, MSDOS, etc). The directories MSC/ and EMX/
contain versions for OS/2 1.x--2.x and OS/2 2.x, respectively.

Files:
 ./
  apptype.c     unmodified source
  readme.txt    this file
 EMX/
  apptype.exe   OS/2 2.x executable
  makefile.emx  makefile for EMX/gcc 0.8f
 MSC/
  apptype.def   linker definition file
  apptype.exe   OS/2 1.x--2.x executable
  fapptyp.h     definitions of the application type, from os2emx.h
  makefile.msc  makefile for Microsoft C 6.00A
  patches.msc   context diffs, to be applied with "patch"

Mike Kretzer has suggested that the necessary DLLs from the EMX distribution
be included to make installation easier. These are:
 dll/
  emx.dll       from emx-0.8f, required for the EMX executable
  emxlibc.dll	 from emx-0.8f, required for the EMX executable
  copying.emx   documentation

If you wish to use the EMX executable, then the above .dll files must
be placed in a directory which is listed in the LIBPATH line of config.sys.
The usual location is \emx\dll\. If you change the LIBPATH statement, 
remember that a re-boot will be required.



The following note was posted with the source:

> From: mattes@iema.e-technik.uni-stuttgart.de (Eberhard Mattes)
> Newsgroups: comp.os.os2.programmer
> Subject: Re: How to recognise 16-bit apps
> Date: 24 Mar 93 15:19:52
> In-reply-to: clemens@immd8.informatik.uni-erlangen.de's message of 
>              Sun, 21 Mar 1993 08:25:05 GMT
> 
> The bits.cmd REXX procedure is nonsense. Here's a more correct program.
> (Bugs: the default extension is .exe only, not all error codes translated 
> to human-readable form):
> 
> --
>   Eberhard mattes (mattes@azu.informatik.uni-stuttgart.de)

--
Darrel Hankerson hankedr@mail.auburn.edu or hank@ducvax.auburn.edu
24 March 1993
