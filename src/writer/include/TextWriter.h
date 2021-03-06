/*
 * Copyright � 2013 Daniel Taliun, Johann Gamper and Cristian Pattaro. All rights reserved.
 *
 * This file is part of LDExplorer.
 *
 * LDExplorer is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * LDExplorer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with LDExplorer.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TEXTWRITER_H_
#define TEXTWRITER_H_

#include "Writer.h"
#include <fstream>

using namespace std;

class TextWriter : public Writer {
private:
	ofstream ofile_stream;

	char* buffer;

public:
	static const unsigned int DEFAULT_BUFFER_SIZE;

	TextWriter(unsigned int buffer_size = DEFAULT_BUFFER_SIZE) throw (Exception);
	virtual ~TextWriter();

	void open(bool append) throw (Exception);
	void close() throw (Exception);
	void write(const char* format, ...) throw (Exception);
};

#endif
