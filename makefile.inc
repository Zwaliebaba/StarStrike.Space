#############################################################################
#
# Common makefile definitions
#
#############################################################################

!IFNDEF SRCROOT
SRCROOT=$(MAINTARGROOT)
!ENDIF

!IFNDEF DESTROOT
DESTROOT=$(SRCROOT)
!ENDIF

!IFNDEF PROJCLEAN
PROJCLEAN=DefaultClean
!ENDIF

# Allow FEDSRC to be overridden for non-standard directory layouts
!IFNDEF FEDSRC
FEDSRC=$(FEDROOT)\src
!ENDIF
SRCDIR=$(FEDSRC)\$(SRCROOT)
DESTDIR=$(FEDROOT)\Objs\$(FLAVOR)\$(DESTROOT)

!IFNDEF PCHINCLOCAL
PCHINCLOCAL=$(SRCDIR)\*.h
!ENDIF

#############################################################################
# Modern SDK Configuration
#
# This build now uses system-installed Visual Studio and Windows SDK.
# Run from a Visual Studio Developer Command Prompt, or run vcvarsall.bat first.
#
# DirectX headers are included in Windows SDK since Windows 8.
#############################################################################

MAINTARG=$(MAINTARGROOT).$(MAINTARGEXT)
MAINTARGFULLPATH=$(DESTDIR)\$(MAINTARG)

CC=cl

LINK=link
LIB=lib
MIDL=midl
REMDIR=$(FEDSRC)\tools\bin32\delnode -q
REGSVR=regsvr32 /s /c


#############################################################################
# MIDL Build Rule Arguments

!IFNDEF MIDLINCLOCAL
MIDLINCLOCAL=
!ENDIF
MIDLINC =
MIDLARGS=$(MIDLINC) $(MIDLINCLOCAL)         \
         /win32                             \
         /Oicf /no_def_idir /out $(DESTDIR) \
         /h       $(*B).h                   \
         /tlb     $(*B).tlb                 \
         /dlldata $(*B)_d.c                 \
         /iid     $(*B)_i.c                 \
         /proxy   $(*B)_p.c


#############################################################################
# Registration username/password

!if defined(user)
REGUSER=$(user)
REGPW=$(pw)
!else
REGUSER=Interactive User
REGPW=
!endif


#############################################################################
# Registration commands

REGEXE=if exist $(MAINTARGFULLPATH) $(MAINTARGFULLPATH) -RegServer "$(REGUSER)" $(REGPW)
UNREGEXE=if exist $(MAINTARGFULLPATH) $(MAINTARGFULLPATH) -UnregServer
REGDLL=if exist $(MAINTARGFULLPATH) $(REGSVR) $(MAINTARGFULLPATH)
UNREGDLL=if exist $(MAINTARGFULLPATH) $(REGSVR) /u $(MAINTARGFULLPATH)


#############################################################################
# What registry key to use

!if defined (ALLEGIANCE_DEV)
COMPILE_DEV_REGKEY=/D_ALLEGIANCE_DEV_
!else
COMPILE_DEV_REGKEY=
!endif


#############################################################################
#
# Path
#
#############################################################################

!include "path.mak"

#############################################################################
#
# Version info
#
#############################################################################

!IFDEF VER
RARGSVERSION= /d VER=$(VER)

!ELSE
RARGSVERSION=

!ENDIF

#############################################################################
#
# Optimization flags
#
#############################################################################

# /O1 == /Og /Os /Oy /Ob1 /Gs /Gf /Gy
# /O2 == /Og /Ot /Oy /Ob1 /Gs /Gf /Gy /Oi
#
# /Og   global optimization
# /Os   small code sequences
# /Ot   fast code sequences
# /Oy   frame pointer omission
# /Ob1  inline
# /Ob2  automatic inline
# /Gs   stack probes
# /Gf   string pooling
# /Gy   function level linking
#
# /Oi   inline intrisics
# /Oa   assume no aliasing
# /Ow   assume aliasing across function calls
# /Gr   _fastcall
# /G5   Pentium
# /G6   Pentium Pro


OPTIMIZATION_FLAGS=/Og /Os /Oy /Ob1 /Gs /Gf /Gy
#OPTIMIZATION_FLAGS=/O1

#############################################################################
#
# Build Configurations
# Supported: debug (default), retail, test, training
#
#############################################################################

!IFDEF retail


#############################################################################
#
# Retail build
#
#############################################################################

FLAVOR=Retail

CARGSFLAVOR= $(COMPILE_DEV_REGKEY) /D "NDEBUG" /D "OPTIMIZED" /D"_AFXDLL" /MD $(OPTIMIZATION_FLAGS) /GR-
RARGSFLAVOR= /d "NDEBUG" /D "OPTIMIZED" /D"_AFXDLL" $(RARGSVERSION)
LIBSFLAVOR=msvcrt.lib msvcprt.lib
MFCLIBSFLAVOR=mfc42.lib mfcs42.lib ctl3d32.lib
LARGSFLAVOR=/debug /debugtype:map,cv /INCREMENTAL:NO /RELEASE /nodefaultlib /fixed:no /OPT:REF /OPT:ICF,4

!ELSEIFDEF test

#############################################################################
#
# Test build
#
#############################################################################
FLAVOR=Test

CARGSFLAVOR= $(COMPILE_DEV_REGKEY) /D "_DEBUG" /D "DEBUG" /D "OPTIMIZED" /D"_AFXDLL" /MD $(OPTIMIZATION_FLAGS) /GR
RARGSFLAVOR= /d "_DEBUG" /d "DEBUG" /D "OPTIMIZED" /D"_AFXDLL" $(RARGSVERSION)
LIBSFLAVOR=msvcrtd.lib msvcprtd.lib
MFCLIBSFLAVOR=mfc42d.lib mfcs42d.lib mfco42d.lib ctl3d32.lib
LARGSFLAVOR=/debug /debugtype:map,cv /INCREMENTAL:NO /nodefaultlib /OPT:REF /OPT:ICF,4

!ELSEIFDEF training

#############################################################################
#
# Debug Training build
#
#############################################################################
FLAVOR=Debug

CARGSFLAVOR = $(COMPILE_DEV_REGKEY) /D "_DEBUG_TRAINING" /D "_DEBUG" /D "DEBUG" /D"_AFXDLL" /MDd /Od /GR /RTC1
RARGSFLAVOR= /d "_DEBUG" /d "DEBUG" /D"_AFXDLL" $(RARGSVERSION)
LIBSFLAVOR=msvcrtd.lib msvcprtd.lib
MFCLIBSFLAVOR=mfc42d.lib mfcs42d.lib mfco42d.lib ctl3d32.lib
LARGSFLAVOR=/debug /debugtype:map,cv /INCREMENTAL:NO /nodefaultlib

!ELSE

#############################################################################
#
# Debug build
#
#############################################################################

FLAVOR=Debug

CARGSFLAVOR = $(COMPILE_DEV_REGKEY) /D "_DEBUG" /D "DEBUG" /D"_AFXDLL" /MDd /Od /GR /RTC1
RARGSFLAVOR= /d "_DEBUG" /d "DEBUG" /D"_AFXDLL" $(RARGSVERSION)
LIBSFLAVOR=msvcrtd.lib msvcprtd.lib
MFCLIBSFLAVOR=mfc42d.lib mfcs42d.lib mfco42d.lib ctl3d32.lib
LARGSFLAVOR=/debug /debugtype:map,cv /INCREMENTAL:NO /nodefaultlib

!ENDIF

!if defined(VERBOSE)
NOLOGO=
!else
CC=@$(CC)
LINK=@$(LINK)
LIB=@$(LIB)
MIDL=@$(MIDL)
REMDIR=@$(REMDIR)
NOLOGO=/nologo
REGEXE=@$(REGEXE)
UNREGEXE=@$(UNREGEXE)
REGDLL=@$(REGDLL)
UNREGDLL=@$(UNREGDLL)
!endif


#############################################################################
#
# BSC options
#
#############################################################################

BSC=$(DESTDIR)\$(MAINTARGROOT).bsc

!IFDEF retail

# don't build browse info for retail builds

BSCARG=
BSCTARG=

!else

!IFNDEF NOBSC
BSCARG=/FR$*
BSCTARG=$(BSC)
!ELSE
BSCARG=
BSCTARG=
!ENDIF

!endif

#############################################################################
#
# Compiler options
#
#############################################################################

PDB=$(DESTDIR)\$(MAINTARGROOT).pdb

CARGSINC=  $(CARGSFLAVOR) \
           $(BSCARG) \
           $(NOLOGO) /W3 /WX /Zi /c \
           /Gm- /EHsc \
           /D "WIN32" /D "_WINDOWS" /D "STRICT" \
           /Fo$(DESTDIR)\ /FD /Fd$(PDB)
CARGS=$(CARGSLOCAL) $(CARGSINC)

!ifdef USERNAME
!if "$(USERNAME)"=="a-markcu"
USERNAME=markcu
!endif
CARGS=/D "$(USERNAME)" $(CARGS)
!endif

# Use system include paths from Visual Studio / Windows SDK
# Run vcvarsall.bat before building to set up INCLUDE, LIB, PATH
INCLUDESYS=
INCLUDEINC=$(FEDSRC)\Inc;$(FEDSRC)\Zone;$(FEDSRC)\Guids
INCLUDE=$(INCLUDELOCAL);$(INCLUDEINC);

#############################################################################
#
# Resources
#
#############################################################################

!if defined(VERBOSE)
RC=RC
!else
RC=@RC
!endif
LANG=Usa

#############################################################################
#
# Message Files
#
#############################################################################

!if defined(VERBOSE)
MC=MC
!else
MC=@MC
!endif

#############################################################################
#
# Link
#
#############################################################################

LIBARGS= $(NOLOGO) /out:$(MAINTARGFULLPATH)

!if defined(VERBOSE)
MAPSYM=MAPSYM
!else
MAPSYM=@MAPSYM -nologo
!endif

#############################################################################
#
# Targets
#
#############################################################################

!MESSAGE -----------------------------------------------------------------------------
!MESSAGE Building $(MAINTARG), Flavor: $(FLAVOR), Language: $(LANG)

First: $(DESTDIR) $(IDLTARGS) $(MAINTARGFULLPATH) 

Shell:
  $(OSCMDSHELL)

DefaultClean: $(DESTDIR)
  del $(DESTDIR)\*.h <$(FEDSRC)\tools\yes.txt
  del $(DESTDIR)\*.c <$(FEDSRC)\tools\yes.txt
  del $(DESTDIR)\*.obj <$(FEDSRC)\tools\yes.txt
  del $(DESTDIR)\*.sbr <$(FEDSRC)\tools\yes.txt
  del $(DESTDIR)\*.pch <$(FEDSRC)\tools\yes.txt
  del $(DESTDIR)\*.pdb <$(FEDSRC)\tools\yes.txt
  del $(DESTDIR)\*.res <$(FEDSRC)\tools\yes.txt

Clean: $(PROJCLEAN)

Full: Clean $(MAINTARGFULLPATH)

$(DESTDIR):
  -if not exist $(FEDROOT)\Objs           md $(FEDROOT)\Objs
  -if not exist $(FEDROOT)\Objs\$(FLAVOR) md $(FEDROOT)\Objs\$(FLAVOR)
  -if not exist $(DESTDIR)                md $(DESTDIR)

#############################################################################
#
# Precompiled headers
#
#############################################################################

!ifdef PCHROOT
PCHFILE=$(DESTDIR)\$(PCHROOT).pch
PCHHEADER=$(PCHROOT).h
CARGSPCH=/Yu$(PCHHEADER) /Fp$(PCHFILE)
$(PCHFILE): $(PCHINCLOCAL) $(PCHINC)
    $(CC) $(CARGS) /Yc$(PCHHEADER) /Fp$(PCHFILE) $(SRCDIR)\$(@B).cpp
!else
CARGSPCH=
!endif


!ifdef MSGFILE
MSGRCFILE=$(DESTDIR)\$(MSGFILE).rc
$(MSGFILE): $(MSGRCFILE)
$(MSGRCFILE): $(SRCDIR)\$(MSGFILE).msg
!if defined(VERBOSE)
  $(MC) $(SRCDIR)\$(@B).msg -r $(DESTDIR) -h $(DESTDIR) 2>&1 | $(SED) -n -e "/Redefining value of English/!p"
!else
  $(MC) $(SRCDIR)\$(@B).msg -r $(DESTDIR) -h $(DESTDIR)
!endif
#    $(MC) $(SRCDIR)\$(@B).msg
!endif

.cpp{$(DESTDIR)}.obj:
    $(CC) $(CARGS) $(CARGSPCH) $(SRCDIR)\$(@B).cpp

#.c{$(DESTDIR)}.obj:
#    $(CC) $(CARGS) $(SRCDIR)\$(@B).c


#############################################################################
#
# Automatic Dependency Generation
#

!ifndef NODEPENDENCIES
!include "makedep.inc"
!endif
