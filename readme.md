# What This Is

This is a basic project template for using a makefile for devkitSMS, a Sega Master System and Game Gear SDK.

It's geared towards my preferences of having separate folders for source, build files, and output files.

# Platforms

I'm using this in Windows Subsystem for Linux (WSL) but I imagine it works in Linux and other Unix-y platforms. 


# Requirements

devkitSMS

https://github.com/sverx/devkitSMS


SDCC

https://sdcc.sourceforge.net/


When apt-get can't get the latest version of SDCC (4.3.0 as of this writing), download the latest Linux release and install it using these instructions:

https://github.com/svn2github/sdcc/blob/master/sdcc/doc/INSTALL.txt



# Building

From a Linux command prompt, run make from the basicsmsproject folder pointing to the makefile in the build folder

	make -f build/Makefile

From a Windows command prompt, you can use the batch files in the build folder

	build.bat
	clean.bat
	rebuild.bat
	
The results will go into an "out" folder at the root of the project

# Deploying

If you have a compatible Everdrive, you can:

	use deploy.bat to deploy the rom to the Everdrive
	
	or use the Debug_Deploy Visual Studio configuration
	
	NOTE: There are no debugging features after deploying

# Visual Studio project

There's an included simple Visual Studio project. 

Don't forget to tweak these values for your own project:

Debugging -> Command: your emulator's location

NMake -> Output: your rom file