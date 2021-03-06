/*
 * Copyright 1997, Regents of the University of Minnesota
 *
 * stdheaders.h
 *
 * This file includes all necessary header files
 *
 * Started 8/27/94
 * George
 *
 * $Id: stdheaders.h,v 1.1.2.1 2005/04/04 17:06:28 tjcamp Exp $
 */


#include <stdio.h>
#include <stdlib.h>
#if defined __STDC__ || defined __clang__
#else
#include <malloc.h>
#endif
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdarg.h>
#include <limits.h>
#include <time.h>
#include <mpi.h>

