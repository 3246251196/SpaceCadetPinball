/* This file exists to fix what I believe to be unimplemented functionality that should exist for C++11.
 * Using the compiler: https://github.com/sodero/adtools/releases/download/10.3.0_1/adtools-os4-gcc11.1.0-20210531-743.lha
 * Using SDK: $VER: SDK 53.34 (15.12.2021)
 * Using sdl2 version 2.0.20 / libsdl2_mixer 2.0.1
 * See 'makefile.os4' for the compiler/linker flags */

/* This should NEVER be an issue, but anyway: */
#ifndef _RJD_AMIGAOS4_
#define _RJD_AMIGAOS4_

#include <sstream> /* ostringsteam */
#include <string>  /* string */ 
#include <math.h>  /* for C's: float round(float); */

/* Reason: despite <cmath> being included, NAN does not seem to be defined */
#define NAN (0.0f/0.0f)

namespace std
{
        /* Reason: there is no definition for to_string(float). Use this generic method for all types */
	template <typename T> std::string to_string(const T& n)
	{
		std::ostringstream stm;
		stm<<n;
		return stm.str();
	}

        /* Reason: there is no definition for std::stoi, use atoi() */
        template <typename T> int stoi(const T& n)
	{
		return (atoi(n.c_str()));
	}

        /* Reason: there is no definition for std::stof, use atof() */
	template <typename T> int stof(const T& n)
	{
		return (atof(n.c_str()));
	}

        /* Reason: there is no definition for std::round, forward this to C's round (see rjd_amigaos4.cpp) */
        float round(float f);
}
#endif /* _RJD_AMIGAOS4_ */
