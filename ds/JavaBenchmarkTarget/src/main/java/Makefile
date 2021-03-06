#=============================================================================
#
# file :        Makefile
#
# description : Makefile to generate a TANGO device server.
#
# project :     JavaBenchmarkTarget
#
#=============================================================================
#                This file is generated by POGO
#        (Program Obviously used to Generate tango Object)
#=============================================================================
#
#

#=============================================================================
# PACKAGE_NAME is the name of the library/device/exe you want to build
#
CLASS	     = JavaBenchmarkTarget
PACKAGE_NAME = org.tango.javabenchmarktarget
SOURCE_FILES = org/tango/javabenchmarktarget
MAJOR_VERS   = 1
MINOR_VERS   = 0
RELEASE      = Release_$(MAJOR_VERS)_$(MINOR_VERS)

INSTANCE     = test


#=============================================================================
#		The compiler flags
#
JAVAC = javac -classpath .:$(CLASSPATH)
BIN_DIR = ./bin
JAVAFLAGS = -d $(BIN_DIR)

#=============================================================================
# Rulee to compile
#
.SUFFIXES:	.class .java
.java.class:
	$(JAVAC) $(JAVAFLAGS) $<


#=============================================================================
# Class list of objects needed to make the output
#
all:	classes
classes:
	$(JAVAC) $(JAVAFLAGS) $(SOURCE_FILES)/*.java

run:
	java $(PACKAGE_NAME)/$(CLASS)  $(INSTANCE)

#=============================================================================
# Jar file generation
#
JAR_NAME = javabenchmarktarget-$(MAJOR_VERS).$(MINOR_VERS).jar
jar:	classes
	cd $(BIN_DIR); jar cvf  $(JAR_NAME) $(SOURCE_FILES)/*.class
	mv $(BIN_DIR)/$(JAR_NAME) .
	ls -l $(JAR_NAME)

#=============================================================================
# Java doc generation
#
doc:
	javadoc -d documentation -windowtitle $(PACKAGE_NAME).$(CLASS) \
	-private -version -author -nodeprecated -header "$(PACKAGE_NAME).$(CLASS) Class"	\
	$(SOURCE_FILES)/*.java

#=============================================================================
# remove class files
#
clean:
	rm $(BIN_DIR)/$(SOURCE_FILES)/*.class

