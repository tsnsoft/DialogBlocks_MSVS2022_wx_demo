### Begin DialogBlocks generated body
################################################################################
# Makefile generated by DialogBlocks
#
# Available configurations:
# unicodedebug
# unicoderelease
################################################################################

CONFIG=unicodedebug

# unicodedebug
ifeq ($(CONFIG),unicodedebug)
WXWIN=
TOOLCHAINNAME=gtk2u
WXVERSION:=$(shell echo `wx-config --version`)
CXX=g++
LINKER=g++
CC=gcc
RESCOMP=windres.exe
RCFILEOBJ=DialogBlocks_MSVS2022_wx_demo_rc.o
RCFILESRC=DialogBlocks_MSVS2022_wx_demo.rc
RESOURCEOBJECT=
OUTPUTPATH=GCCUnicodeDebug
OBJECTPATH=GCCUnicodeDebug
BUILDPATHS=$(OBJECTPATH)
EXTRADEPENDENCIES=
PROGRAM=DialogBlocks_MSVS2022_wx_demo
LIBS=$(shell wx-config --libs std --cxxflags)
LINKERFLAGS=
WARNINGFLAGS=-Wall -Wno-write-strings
OPTFLAGS=-O0
DEBUGFLAGS=-ggdb
LIBPATH=
CPPINC:=$(shell wx-config --cxxflags)
GCCFLAGS=
LDFLAGS=$(LIBS) $(LIBPATH) $(LINKERFLAGS)
CPPFLAGS=$(CPPINC) $(GCCFLAGS) $(DEBUGFLAGS) $(OPTFLAGS) $(WARNINGFLAGS)
LIBDIRNAME=$(WXWIN)/GCCBuildDebugGTK2Unicode/lib
RESPATH=--include-dir "$(WXWIN)/include" --include-dir "$(WXWIN)/contrib/include" --include-dir "$(WXWIN)/GCCBuildDebugGTK2Unicode/lib/wx/include/gtk2-unicode-static-3.2"
MACPACKAGEINFO=

# unicoderelease
else
WXWIN=
TOOLCHAINNAME=gtk2u
WXVERSION:=$(shell echo `wx-config --version`)
CXX=g++
LINKER=g++
CC=gcc
RESCOMP=windres.exe
RCFILEOBJ=DialogBlocks_MSVS2022_wx_demo_rc.o
RCFILESRC=DialogBlocks_MSVS2022_wx_demo.rc
RESOURCEOBJECT=
OUTPUTPATH=GCCUnicodeRelease
OBJECTPATH=GCCUnicodeRelease
BUILDPATHS=$(OBJECTPATH)
EXTRADEPENDENCIES=
PROGRAM=DialogBlocks_MSVS2022_wx_demo
LIBS=$(shell wx-config --libs std --cxxflags)
LINKERFLAGS=
WARNINGFLAGS=-Wall -Wno-write-strings
OPTFLAGS=-O2
DEBUGFLAGS=
LIBPATH=
CPPINC:=$(shell wx-config --cxxflags)
GCCFLAGS=
LDFLAGS=$(LIBS) $(LIBPATH) $(LINKERFLAGS)
CPPFLAGS=$(CPPINC) $(GCCFLAGS) $(DEBUGFLAGS) $(OPTFLAGS) $(WARNINGFLAGS)
LIBDIRNAME=$(WXWIN)/GCCBuildReleaseGTK2Unicode/lib
RESPATH=--include-dir "$(WXWIN)/include" --include-dir "$(WXWIN)/contrib/include" --include-dir "$(WXWIN)/GCCBuildReleaseGTK2Unicode/lib/wx/include/gtk2-unicode-static-3.2"
MACPACKAGEINFO=
endif

OBJECTS=$(OBJECTPATH)/dialogblocks_msvs2022_wx_demoapp.o $(OBJECTPATH)/mainform.o $(RESOURCEOBJECT)

all:	$(BUILDPATHS) $(MACPACKAGEINFO) $(OUTPUTPATH)/$(PROGRAM)

$(OBJECTPATH):
	mkdir -p $(OBJECTPATH)

clean:
	rm -f $(OBJECTPATH)/*.o
	rm -f $(OBJECTPATH)/*.res
	rm -fr .deps .pch
	rm -fr $(PROGRAM).app
	rm -f $(OUTPUTPATH)/$(PROGRAM)

help:
	@echo "Usage: make -f Makefile CONFIG=[unicodedebug|unicoderelease] [all|clean|help]"

$(OUTPUTPATH)/$(PROGRAM):	$(OBJECTS) $(EXTRADEPENDENCIES)
	$(LINKER) -o $@ $(OBJECTS) $(LDFLAGS)


# Windows only
$(OBJECTPATH)/$(RCFILEOBJ):	$(RCFILESRC)
	$(RESCOMP) --use-temp-file -i$< -o$@ $(RESPATH) --include-dir . --define NOPCH

# Mac only
$(OUTPUTPATH)/$(PROGRAM).app/Contents/PkgInfo: $(OUTPUTPATH)/$(PROGRAM) $(INFOPLISTSOURCE) $(ICNSSOURCE)
	mkdir -p $(OUTPUTPATH)/$(PROGRAM).app/Contents
	mkdir -p $(OUTPUTPATH)/$(PROGRAM).app/Contents/MacOS
	mkdir -p $(OUTPUTPATH)/$(PROGRAM).app/Contents/Resources
	sed -e "s/IDENTIFIER/$(PROGRAM)/" \
	-e "s/EXECUTABLE/$(PROGRAM)/" \
	-e "s/VERSION/$(WXVERSION)/" \
	$(INFOPLISTSOURCE) >$(OUTPUTPATH)/$(PROGRAM).app/Contents/Info.plist
	echo -n "APPL????" >$(OUTPUTPATH)/$(PROGRAM).app/Contents/PkgInfo
	ln -f $(OUTPUTPATH)/$(PROGRAM) $(OUTPUTPATH)/$(PROGRAM).app/Contents/MacOS/$(PROGRAM)
	cp -f $(ICNSSOURCE) $(ICNSDEST)

$(OBJECTPATH)/dialogblocks_msvs2022_wx_demoapp.o:	dialogblocks_msvs2022_wx_demoapp.cpp dialogblocks_msvs2022_wx_demoapp.h mainform.h
	$(CXX) -c -o $@ $(CPPFLAGS) dialogblocks_msvs2022_wx_demoapp.cpp

$(OBJECTPATH)/mainform.o:	mainform.cpp mainform.h tsnsoft.xpm
	$(CXX) -c -o $@ $(CPPFLAGS) mainform.cpp

.PHONY:	all clean
### End DialogBlocks generated body
