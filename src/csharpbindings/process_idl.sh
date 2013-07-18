#!/bin/bash

# Small script to convert the idl file into a header and typelib
#
# Written by Dr Jodie Wetherall <wj88@gre.ac.uk>, School of Engineering, University of Greenwich

# Generate the headers
echo -e "Generating headers..."
if [ ! -d include ]; then
	mkdir include
fi
cd include
find ../idl/*.idl -print | xargs -l ../bin/xpidl -I../../../3rdparty/mozilla/obj-build/dist/sdk/idl/ -I../idl/ -m header
cd ..

# Generate the typelib
echo -e "Generating typelibs..."
if [ ! -d typelib ]; then
	mkdir typelib
fi
cd typelib
find ../idl/*.idl -print | xargs -l ../bin/xpidl -I../../../3rdparty/mozilla/obj-build/dist/sdk/idl/ -I../idl/ -m typelib
cd ..

# Generate the java interface
#echo -e "Generating java interfaces..."
#if [ ! -d java ]; then
#	mkdir java
#fi
#cd java
#find ../idl/*.idl -print | xargs -l ../bin/xpidl -I../../../3rdparty/mozilla/obj-build/dist/sdk/idl/ -I../idl/ -m java
#cd ..
