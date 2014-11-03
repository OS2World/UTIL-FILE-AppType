/* apptype.c */

/* Written by Eberhard Mattes and put into the public domain */

#define INCL_DOSSESMGR
#define INCL_DOSERRORS
#include <os2.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
  int result, i;
  ULONG rc, type;

#ifdef __EMX__
  _wildcard (&argc, &argv);
#endif
  result = 0;
  if (argc < 2)
    {
      puts ("Usage: apptype <program>...");
      return (1);
    }
  for (i = 1; i < argc; ++i)
    {
      rc = DosQueryAppType (argv[i], &type);
      if (rc == ERROR_INVALID_EXE_SIGNATURE)
        fprintf (stderr, "%s: not an executable file\n", argv[i]);
      else if (rc == ERROR_FILE_NOT_FOUND)
        fprintf (stderr, "%s: not found\n", argv[i]);
      else if (rc == ERROR_ACCESS_DENIED)
        fprintf (stderr, "%s: access denied\n", argv[i]);
      else if (rc != 0)
        fprintf (stderr, "%s: error code = %lu\n", argv[i], rc);
      else
        {
          printf ("%s:", argv[i]);
          if (type & FAPPTYP_32BIT)
            printf (" 32-bit");
          if (type & FAPPTYP_PHYSDRV)
            printf (" physical device driver");
          else if (type & FAPPTYP_VIRTDRV)
            printf (" virtual device driver");
          else if (type & FAPPTYP_DLL)
            {
              if (type & FAPPTYP_PROTDLL)
                printf (" protected");
              printf (" DLL");
            }
          else if (type & (FAPPTYP_WINDOWSREAL|FAPPTYP_WINDOWSPROT))
            printf ("Windows executable");
          else if (type & FAPPTYP_DOS)
            printf (" DOS executable");
          else if (type & FAPPTYP_BOUND)
            printf (" bound executable");
          else if ((type & 7) == FAPPTYP_WINDOWAPI)
            printf (" PM executable");
          else
            printf (" OS/2 executable");
          putchar ('\n');
        }
    }
  return (0);
}
