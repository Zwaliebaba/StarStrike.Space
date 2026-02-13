###################################################################
#
# Makefile for makeing an exe
#
###################################################################

LIB=

!ifndef SUBSYSTEM
SUBSYSTEM=windows
!endif

# Standard Windows libraries
# Note: ICQ integration removed (defunct service)
# DirectX libraries from Windows SDK
LIBS= $(LIBSFLAVOR) \
      urlmon.lib kernel32.lib user32.lib   \
      gdi32.lib winspool.lib comdlg32.lib  \
      advapi32.lib shell32.lib ole32.lib   \
      oleaut32.lib uuid.lib odbc32.lib     \
      odbccp32.lib ddraw.lib dsound.lib    \
      dxguid.lib winmm.lib                 \
      amstrmid.lib dinput8.lib             \
      comctl32.lib version.lib  ws2_32.lib \
      delayimp.lib                         \
      wininet.lib lz32.lib                 \
      fedguids.lib netapi32.lib comsupp.lib oledb.lib

!ifdef SPLITSYMBOLS
LINKPDB= NONE
!else
LINKPDB= $(PDB)
!endif

# Linker arguments - uses system lib paths from vcvarsall.bat
LARGS= $(LARGSFLAVOR) $(NOLOGO) /subsystem:$(SUBSYSTEM) \
       /pdb:$(LINKPDB)                      \
       /machine:I386                        \
       /LIBPATH:$(DESTDIR)\..\Guids         \
       /out:$(DESTDIR)\$(MAINTARGROOT).exe

LARGSALL=$(LARGS) $(OBJS) $(RESFILE) $(LIBS) $(USERLIBS) $(DESTDIR)\pch.obj $(LARGSLOCAL)

# the main (default) target in all its glory

$(MAINTARGFULLPATH): $(DESTDIR)  \
                     $(USERLIBS) \
                     $(OBJS)     \
                     $(MSGFILE)  \
                     $(RESFILE)  \
                     $(OTHEREXEDEPS)
#                     $(BSCTARG)
  $(LINK) $(LARGSALL)
!ifndef NOMAP
  $(MAPSYM) -o $(DESTDIR)\$(MAINTARGROOT).sym $(DESTDIR)\$(MAINTARGROOT).map
!endif
!ifdef SPLITSYMBOLS
  $(SPLITSYMBOLSTOOL) $(DESTDIR)\$(MAINTARGROOT).exe $(DESTDIR)\$(MAINTARGROOT).dbg
!endif