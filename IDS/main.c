/*
	This software is open source based on the MIT
	license, which means that this software
	is free to distribute and edit to make profit or for
	your own projects.

	Information Systems Services 2025
		
	This software is intended to be used within a security
	environment on a host device. This will be requried to get
	access to services running on the device itself.
	It is your own responsiblily to make sure that your 
	system is secure itself as this isn't a "one-stop-shop"
	to a %100 secure system as that will never be possible.

	-------------------------------------------------------
			READ THIS NOW!
	This software at this moment has no support
	nor warrenty, and will not be supported if anything
	where to happen to your systems or anything related.
	You should only use this software at your own risk!!

			YOU HAVE BEEN WARNED!
	------------------------------------------------------
*/

// Include files for external directories and libs
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include "Listener.h"


// Defines for networking
#define IPv4  = PF_INET 2
#define IPv6 = PF_INET 10
#define RawPacket = SOCK_RAW

// Defines the global environmental variables

// Function prototypes for declaration
void CheckSystemPackages();
int NetworkSystemCheck();

int main(int argc, char ** argv[]) {
	char *LoadMessage = "############################\n"
			    "        LotusIDS	         \n"
			    "   Checking attributes      \n"
			    "############################\n";
	puts(LoadMessage);

}

void CheckSystemPackages() {
	
}

int NetworkSystemCheck() {
	
}