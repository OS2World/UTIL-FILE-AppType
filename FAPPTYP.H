/* From os2emx.h */

#define FAPPTYP_NOTSPEC         0x0000
#define FAPPTYP_NOTWINDOWCOMPAT 0x0001
#define FAPPTYP_WINDOWCOMPAT    0x0002
#define FAPPTYP_WINDOWAPI       0x0003
#define FAPPTYP_BOUND           0x0008
#define FAPPTYP_DLL             0x0010
#define FAPPTYP_DOS             0x0020
#define FAPPTYP_PHYSDRV         0x0040
#define FAPPTYP_VIRTDRV         0x0080
#define FAPPTYP_PROTDLL         0x0100
#define FAPPTYP_WINDOWSREAL     0x0200
#define FAPPTYP_WINDOWSPROT     0x0400
#define FAPPTYP_WINDOWSPROT31   0x1000
#define FAPPTYP_32BIT           0x4000
#define FAPPTYP_EXETYPE         0x0003
#define FAPPTYP_RESERVED        (~(FAPPTYP_WINDOWAPI | FAPPTYP_BOUND | \
                                   FAPPTYP_DLL | FAPPTYP_DOS | \
                                   FAPPTYP_PHYSDRV | FAPPTYP_VIRTDRV | \
                                   FAPPTYP_PROTDLL | FAPPTYP_32BIT))
