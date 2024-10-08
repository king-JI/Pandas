﻿// Copyright (c) Pandas Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#pragma once

#include "../config/pandas.hpp"

#ifdef Pandas_Support_Read_UTF8BOM_Configure
	#include "../common/utf8.hpp"

	#define fopen(FNAME, MODE) PandasUtf8::fopen(FNAME, MODE)
	#define fgets(BUFFER, MAXCOUNT, STREAM) PandasUtf8::fgets(BUFFER, MAXCOUNT, STREAM)
	#define fread(BUFFER, ELESIZE, ELECOUNT, STREAM) PandasUtf8::fread(BUFFER, ELESIZE, ELECOUNT, STREAM)
	#define fclose(FPOINTER) PandasUtf8::fclose(FPOINTER)
#endif // Pandas_Support_Read_UTF8BOM_Configure
