/* Generated by re2c 0.15.3 on Thu Sep  6 07:45:31 2018 */
/**

	MultiMarkdown 6 -- Lightweight markup processor to produce HTML, LaTeX, and more.

	@file lexer.re

	@brief Description of the regular expressions used to define tokens, 
	used by re2c to create a lexer/tokenizer.


	@author	Fletcher T. Penney
	@bug	

**/

/*

	Copyright © 2016 - 2017 Fletcher T. Penney.


	The `MultiMarkdown 6` project is released under the MIT License..
	
	GLibFacade.c and GLibFacade.h are from the MultiMarkdown v4 project:
	
		https://github.com/fletcher/MultiMarkdown-4/
	
	MMD 4 is released under both the MIT License and GPL.
	
	
	CuTest is released under the zlib/libpng license. See CuTest.c for the text
	of the license.
	
	
	## The MIT License ##
	
	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:
	
	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.
	
	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
	THE SOFTWARE.

*/

#include "lexer.h"
#include "libMultiMarkdown.h"
#include "parser.h"


// Basic scanner struct

#define YYCTYPE		unsigned char
#define YYCURSOR	s->cur
#define YYMARKER	s->ptr
#define YYCTXMARKER	s->ctx

int scan(Scanner * s, const char * stop) {

	scan:

	if (s->cur >= stop) {
		return 0;
	}

	s->start = s->cur;

	
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':	goto yy4;
	case '\n':	goto yy6;
	case '\r':	goto yy8;
	case ' ':	goto yy9;
	case '!':	goto yy10;
	case '"':	goto yy11;
	case '#':	goto yy13;
	case '$':	goto yy15;
	case '%':	goto yy17;
	case '&':	goto yy19;
	case '\'':	goto yy21;
	case '(':	goto yy23;
	case ')':	goto yy25;
	case '*':	goto yy27;
	case '+':	goto yy29;
	case '-':	goto yy31;
	case '.':	goto yy33;
	case '/':	goto yy34;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy36;
	case ':':	goto yy37;
	case '<':	goto yy39;
	case '=':	goto yy41;
	case '>':	goto yy43;
	case '[':	goto yy45;
	case '\\':	goto yy47;
	case ']':	goto yy49;
	case '^':	goto yy51;
	case '_':	goto yy53;
	case '`':	goto yy55;
	case '{':	goto yy57;
	case '|':	goto yy59;
	case '}':	goto yy61;
	case '~':	goto yy63;
	case 0xC2:	goto yy65;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{ goto scan; }
yy4:
	++YYCURSOR;
	{ return INDENT_TAB; }
yy6:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case ' ':	goto yy328;
	default:	goto yy7;
	}
yy7:
	{ return TEXT_NL; }
yy8:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy327;
	case ' ':	goto yy328;
	default:	goto yy7;
	}
yy9:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
	case '\t':	goto yy71;
	case '\n':	goto yy325;
	case '\r':	goto yy326;
	case ' ':	goto yy68;
	case 0xC2:	goto yy70;
	default:	goto yy3;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case '[':	goto yy323;
	default:	goto yy3;
	}
yy11:
	++YYCURSOR;
	{ return QUOTE_DOUBLE; }
yy13:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
	case 0x00:
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case 0xC2:	goto yy278;
	case '#':	goto yy276;
	default:	goto yy14;
	}
yy14:
	{ return TEXT_HASH; }
yy15:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '$':	goto yy274;
	default:	goto yy16;
	}
yy16:
	{ return MATH_DOLLAR_SINGLE; }
yy17:
	++YYCURSOR;
	{ return TEXT_PERCENT; }
yy19:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '#':	goto yy258;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy255;
	case 'A':
	case 'a':	goto yy257;
	default:	goto yy20;
	}
yy20:
	{ return AMPERSAND; }
yy21:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '\'':	goto yy253;
	default:	goto yy22;
	}
yy22:
	{ return QUOTE_SINGLE; }
yy23:
	++YYCURSOR;
	{ return PAREN_LEFT; }
yy25:
	++YYCURSOR;
	{ return PAREN_RIGHT; }
yy27:
	++YYCURSOR;
	{ return STAR; }
yy29:
	yyaccept = 4;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '+':	goto yy250;
	default:	goto yy30;
	}
yy30:
	{ return PLUS; }
yy31:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '-':	goto yy242;
	default:	goto yy32;
	}
yy32:
	{ return DASH_N; }
yy33:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case ' ':	goto yy234;
	case '.':	goto yy235;
	default:	goto yy3;
	}
yy34:
	++YYCURSOR;
	{ return SLASH; }
yy36:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '.':	goto yy225;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy226;
	default:	goto yy3;
	}
yy37:
	++YYCURSOR;
	{ return COLON; }
yy39:
	yyaccept = 5;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '!':	goto yy218;
	case '<':	goto yy219;
	default:	goto yy40;
	}
yy40:
	{ return ANGLE_LEFT; }
yy41:
	yyaccept = 6;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '=':	goto yy215;
	default:	goto yy42;
	}
yy42:
	{ return EQUAL; }
yy43:
	++YYCURSOR;
	{ return ANGLE_RIGHT; }
yy45:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '#':	goto yy211;
	case '%':	goto yy205;
	case '>':	goto yy213;
	case '?':	goto yy207;
	case '^':	goto yy209;
	default:	goto yy46;
	}
yy46:
	{ return BRACKET_LEFT; }
yy47:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '\n':	goto yy128;
	case '\r':	goto yy130;
	case ' ':	goto yy133;
	case '!':	goto yy193;
	case '"':	goto yy183;
	case '#':	goto yy163;
	case '$':	goto yy161;
	case '%':	goto yy159;
	case '&':	goto yy147;
	case '\'':	goto yy181;
	case '(':	goto yy175;
	case ')':	goto yy173;
	case '*':	goto yy139;
	case '+':	goto yy157;
	case ',':	goto yy189;
	case '-':	goto yy155;
	case '.':	goto yy195;
	case '/':	goto yy143;
	case ':':	goto yy185;
	case ';':	goto yy187;
	case '<':	goto yy151;
	case '=':	goto yy153;
	case '>':	goto yy149;
	case '?':	goto yy191;
	case '@':	goto yy145;
	case '[':	goto yy167;
	case '\\':	goto yy131;
	case ']':	goto yy165;
	case '^':	goto yy141;
	case '_':	goto yy137;
	case '`':	goto yy179;
	case '{':	goto yy171;
	case '|':	goto yy135;
	case '}':	goto yy169;
	case '~':	goto yy177;
	default:	goto yy48;
	}
yy48:
	{ return TEXT_BACKSLASH; }
yy49:
	++YYCURSOR;
	{ return BRACKET_RIGHT; }
yy51:
	++YYCURSOR;
	{ return SUPERSCRIPT; }
yy53:
	++YYCURSOR;
	{ return UL; }
yy55:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy127;
yy56:
	{ return BACKTICK; }
yy57:
	yyaccept = 7;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '+':	goto yy109;
	case '-':	goto yy108;
	case '=':	goto yy102;
	case '>':	goto yy107;
	case '{':	goto yy104;
	case '~':	goto yy106;
	default:	goto yy58;
	}
yy58:
	{ return TEXT_BRACE_LEFT; }
yy59:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy101;
yy60:
	{ return PIPE; }
yy61:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '}':	goto yy98;
	default:	goto yy62;
	}
yy62:
	{ return TEXT_BRACE_RIGHT; }
yy63:
	yyaccept = 8;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '>':	goto yy94;
	case '~':	goto yy93;
	default:	goto yy64;
	}
yy64:
	{ return SUBSCRIPT; }
yy65:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA0:	goto yy66;
	default:	goto yy3;
	}
yy66:
	yych = *++YYCURSOR;
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
	case '\t':	goto yy71;
	case ' ':	goto yy68;
	case 0xC2:	goto yy70;
	default:	goto yy67;
	}
yy67:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
	case 0: 	goto yy7;
	case 1: 	goto yy3;
	case 2: 	goto yy14;
	case 3: 	goto yy20;
	case 4: 	goto yy30;
	case 5: 	goto yy40;
	case 6: 	goto yy42;
	case 7: 	goto yy58;
	case 8: 	goto yy64;
	case 9: 	goto yy69;
	case 10: 	goto yy76;
	case 11: 	goto yy88;
	case 12: 	goto yy105;
	case 13: 	goto yy229;
	case 14: 	goto yy279;
	case 15: 	goto yy286;
	case 16: 	goto yy295;
	case 17: 	goto yy302;
	case 18: 	goto yy311;
	default:	goto yy318;
	}
yy68:
	yyaccept = 9;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy75;
	case '\r':	goto yy77;
	case ' ':	goto yy73;
	case 0xC2:	goto yy74;
	default:	goto yy69;
	}
yy69:
	{ return NON_INDENT_SPACE; }
yy70:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy68;
	default:	goto yy67;
	}
yy71:
	++YYCURSOR;
	YYCURSOR = YYCTXMARKER;
	{ return NON_INDENT_SPACE; }
yy73:
	yyaccept = 9;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy75;
	case '\r':	goto yy77;
	case ' ':	goto yy87;
	case 0xC2:	goto yy89;
	default:	goto yy69;
	}
yy74:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy73;
	default:	goto yy67;
	}
yy75:
	yyaccept = 10;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case ' ':	goto yy78;
	default:	goto yy76;
	}
yy76:
	{ return TEXT_LINEBREAK; }
yy77:
	yyaccept = 10;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy75;
	case ' ':	goto yy78;
	default:	goto yy76;
	}
yy78:
	yych = *++YYCURSOR;
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
	case 0x00:
	case 0x01:
	case 0x02:
	case 0x03:
	case 0x04:
	case 0x05:
	case 0x06:
	case 0x07:
	case 0x08:
	case '\v':
	case '\f':
	case 0x0E:
	case 0x0F:
	case 0x10:
	case 0x11:
	case 0x12:
	case 0x13:
	case 0x14:
	case 0x15:
	case 0x16:
	case 0x17:
	case 0x18:
	case 0x19:
	case 0x1A:
	case 0x1B:
	case 0x1C:
	case 0x1D:
	case 0x1E:
	case 0x1F:
	case '!':
	case '"':
	case '#':
	case '$':
	case '%':
	case '&':
	case '\'':
	case '(':
	case ')':
	case '*':
	case '+':
	case ',':
	case '-':
	case '.':
	case '/':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case ':':
	case ';':
	case '<':
	case '=':
	case '>':
	case '?':
	case '@':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '[':
	case '\\':
	case ']':
	case '^':
	case '_':
	case '`':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
	case '{':
	case '|':
	case '}':
	case '~':
	case 0x7F:	goto yy79;
	case 0xC2:
	case 0xC3:
	case 0xC4:
	case 0xC5:
	case 0xC6:
	case 0xC7:
	case 0xC8:
	case 0xC9:
	case 0xCA:
	case 0xCB:
	case 0xCC:
	case 0xCD:
	case 0xCE:
	case 0xCF:
	case 0xD0:
	case 0xD1:
	case 0xD2:
	case 0xD3:
	case 0xD4:
	case 0xD5:
	case 0xD6:
	case 0xD7:
	case 0xD8:
	case 0xD9:
	case 0xDA:
	case 0xDB:
	case 0xDC:
	case 0xDD:
	case 0xDE:
	case 0xDF:	goto yy81;
	case 0xE0:	goto yy82;
	case 0xE1:
	case 0xE2:
	case 0xE3:
	case 0xE4:
	case 0xE5:
	case 0xE6:
	case 0xE7:
	case 0xE8:
	case 0xE9:
	case 0xEA:
	case 0xEB:
	case 0xEC:
	case 0xED:
	case 0xEE:
	case 0xEF:	goto yy83;
	case 0xF0:	goto yy84;
	case 0xF1:
	case 0xF2:
	case 0xF3:	goto yy85;
	case 0xF4:	goto yy86;
	default:	goto yy67;
	}
yy79:
	++YYCURSOR;
	YYCURSOR = YYCTXMARKER;
	{ return TEXT_LINEBREAK_SP; }
yy81:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy79;
	default:	goto yy67;
	}
yy82:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy81;
	default:	goto yy67;
	}
yy83:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy81;
	default:	goto yy67;
	}
yy84:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy83;
	default:	goto yy67;
	}
yy85:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy83;
	default:	goto yy67;
	}
yy86:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:	goto yy83;
	default:	goto yy67;
	}
yy87:
	yyaccept = 11;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy75;
	case '\r':	goto yy77;
	case ' ':	goto yy90;
	case 0xC2:	goto yy92;
	default:	goto yy88;
	}
yy88:
	{ return INDENT_SPACE; }
yy89:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy87;
	default:	goto yy67;
	}
yy90:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy75;
	case '\r':	goto yy77;
	case ' ':	goto yy90;
	case 0xC2:	goto yy92;
	default:	goto yy67;
	}
yy92:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy90;
	default:	goto yy67;
	}
yy93:
	yych = *++YYCURSOR;
	switch (yych) {
	case '}':	goto yy96;
	default:	goto yy67;
	}
yy94:
	++YYCURSOR;
	{ return CRITIC_SUB_DIV; }
yy96:
	++YYCURSOR;
	{ return CRITIC_SUB_CLOSE; }
yy98:
	++YYCURSOR;
	{ return BRACE_DOUBLE_RIGHT; }
yy100:
	++YYCURSOR;
	yych = *YYCURSOR;
yy101:
	switch (yych) {
	case '|':	goto yy100;
	default:	goto yy60;
	}
yy102:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '=':	goto yy124;
	default:	goto yy103;
	}
yy103:
	{ return RAW_FILTER_LEFT; }
yy104:
	yyaccept = 12;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'T':	goto yy118;
	default:	goto yy105;
	}
yy105:
	{ return BRACE_DOUBLE_LEFT; }
yy106:
	yych = *++YYCURSOR;
	switch (yych) {
	case '~':	goto yy116;
	default:	goto yy67;
	}
yy107:
	yych = *++YYCURSOR;
	switch (yych) {
	case '>':	goto yy114;
	default:	goto yy67;
	}
yy108:
	yych = *++YYCURSOR;
	switch (yych) {
	case '-':	goto yy112;
	default:	goto yy67;
	}
yy109:
	yych = *++YYCURSOR;
	switch (yych) {
	case '+':	goto yy110;
	default:	goto yy67;
	}
yy110:
	++YYCURSOR;
	{ return CRITIC_ADD_OPEN; }
yy112:
	++YYCURSOR;
	{ return CRITIC_DEL_OPEN; }
yy114:
	++YYCURSOR;
	{ return CRITIC_COM_OPEN; }
yy116:
	++YYCURSOR;
	{ return CRITIC_SUB_OPEN; }
yy118:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'O':	goto yy119;
	default:	goto yy67;
	}
yy119:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'C':	goto yy120;
	default:	goto yy67;
	}
yy120:
	yych = *++YYCURSOR;
	switch (yych) {
	case '}':	goto yy121;
	default:	goto yy67;
	}
yy121:
	yych = *++YYCURSOR;
	switch (yych) {
	case '}':	goto yy122;
	default:	goto yy67;
	}
yy122:
	++YYCURSOR;
	{ return TOC; }
yy124:
	++YYCURSOR;
	{ return CRITIC_HI_OPEN; }
yy126:
	++YYCURSOR;
	yych = *YYCURSOR;
yy127:
	switch (yych) {
	case '`':	goto yy126;
	default:	goto yy56;
	}
yy128:
	++YYCURSOR;
yy129:
	{ return TEXT_LINEBREAK; }
yy130:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy128;
	default:	goto yy129;
	}
yy131:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '(':	goto yy197;
	case ')':	goto yy199;
	case '[':	goto yy201;
	case ']':	goto yy203;
	default:	goto yy132;
	}
yy132:
	{ return ESCAPED_CHARACTER; }
yy133:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy135:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy137:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy139:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy141:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy143:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy145:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy147:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy149:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy151:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy153:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy155:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy157:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy159:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy161:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy163:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy165:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy167:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy169:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy171:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy173:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy175:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy177:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy179:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy181:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy183:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy185:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy187:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy189:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy191:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy193:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy195:
	++YYCURSOR;
	{ return ESCAPED_CHARACTER; }
yy197:
	++YYCURSOR;
	{ return MATH_PAREN_OPEN; }
yy199:
	++YYCURSOR;
	{ return MATH_PAREN_CLOSE; }
yy201:
	++YYCURSOR;
	{ return MATH_BRACKET_OPEN; }
yy203:
	++YYCURSOR;
	{ return MATH_BRACKET_CLOSE; }
yy205:
	++YYCURSOR;
	{ return BRACKET_VARIABLE_LEFT; }
yy207:
	++YYCURSOR;
	{ return BRACKET_GLOSSARY_LEFT; }
yy209:
	++YYCURSOR;
	{ return BRACKET_FOOTNOTE_LEFT; }
yy211:
	++YYCURSOR;
	{ return BRACKET_CITATION_LEFT; }
yy213:
	++YYCURSOR;
	{ return BRACKET_ABBREVIATION_LEFT; }
yy215:
	yych = *++YYCURSOR;
	switch (yych) {
	case '}':	goto yy216;
	default:	goto yy67;
	}
yy216:
	++YYCURSOR;
	{ return CRITIC_HI_CLOSE; }
yy218:
	yych = *++YYCURSOR;
	switch (yych) {
	case '-':	goto yy222;
	default:	goto yy67;
	}
yy219:
	yych = *++YYCURSOR;
	switch (yych) {
	case '}':	goto yy220;
	default:	goto yy67;
	}
yy220:
	++YYCURSOR;
	{ return CRITIC_COM_CLOSE; }
yy222:
	yych = *++YYCURSOR;
	switch (yych) {
	case '-':	goto yy223;
	default:	goto yy67;
	}
yy223:
	++YYCURSOR;
	{ return HTML_COMMENT_START; }
yy225:
	yych = *++YYCURSOR;
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
	case '\t':
	case ' ':	goto yy231;
	case '\n':	goto yy228;
	case '\r':	goto yy230;
	case 0xC2:	goto yy233;
	default:	goto yy67;
	}
yy226:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '.':	goto yy225;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy226;
	default:	goto yy67;
	}
yy228:
	++YYCURSOR;
yy229:
	YYCURSOR = YYCTXMARKER;
	{ return TEXT_NUMBER_POSS_LIST; }
yy230:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy228;
	default:	goto yy229;
	}
yy231:
	yyaccept = 13;
	YYMARKER = ++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case ' ':	goto yy231;
	case 0xC2:	goto yy233;
	default:	goto yy229;
	}
yy233:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy231;
	default:	goto yy67;
	}
yy234:
	yych = *++YYCURSOR;
	switch (yych) {
	case '.':	goto yy238;
	default:	goto yy67;
	}
yy235:
	yych = *++YYCURSOR;
	switch (yych) {
	case '.':	goto yy236;
	default:	goto yy67;
	}
yy236:
	++YYCURSOR;
	{ return ELLIPSIS; }
yy238:
	yych = *++YYCURSOR;
	switch (yych) {
	case ' ':	goto yy239;
	default:	goto yy67;
	}
yy239:
	yych = *++YYCURSOR;
	switch (yych) {
	case '.':	goto yy240;
	default:	goto yy67;
	}
yy240:
	++YYCURSOR;
	{ return ELLIPSIS; }
yy242:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '-':	goto yy248;
	case '>':	goto yy246;
	case '}':	goto yy244;
	default:	goto yy243;
	}
yy243:
	{ return DASH_N; }
yy244:
	++YYCURSOR;
	{ return CRITIC_DEL_CLOSE; }
yy246:
	++YYCURSOR;
	{ return HTML_COMMENT_STOP; }
yy248:
	++YYCURSOR;
	{ return DASH_M; }
yy250:
	yych = *++YYCURSOR;
	switch (yych) {
	case '}':	goto yy251;
	default:	goto yy67;
	}
yy251:
	++YYCURSOR;
	{ return CRITIC_ADD_CLOSE; }
yy253:
	++YYCURSOR;
	{ return QUOTE_RIGHT_ALT; }
yy255:
	++YYCURSOR;
	yych = *YYCURSOR;
yy256:
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy255;
	case ';':	goto yy269;
	default:	goto yy67;
	}
yy257:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'M':
	case 'm':	goto yy268;
	default:	goto yy256;
	}
yy258:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy260;
	case 'X':
	case 'x':	goto yy259;
	default:	goto yy67;
	}
yy259:
	yych = *++YYCURSOR;
	switch (yych) {
	case ';':	goto yy67;
	default:	goto yy265;
	}
yy260:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy260;
	case ';':	goto yy262;
	default:	goto yy67;
	}
yy262:
	++YYCURSOR;
	{ return HTML_ENTITY; }
yy264:
	++YYCURSOR;
	yych = *YYCURSOR;
yy265:
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '[':
	case '\\':
	case ']':
	case '^':
	case '_':
	case '`':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy264;
	case ';':	goto yy266;
	default:	goto yy67;
	}
yy266:
	++YYCURSOR;
	{ return HTML_ENTITY; }
yy268:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'P':
	case 'p':	goto yy271;
	default:	goto yy256;
	}
yy269:
	++YYCURSOR;
	{ return HTML_ENTITY; }
yy271:
	yych = *++YYCURSOR;
	switch (yych) {
	case ';':	goto yy272;
	default:	goto yy256;
	}
yy272:
	++YYCURSOR;
	{ return AMPERSAND_LONG; }
yy274:
	++YYCURSOR;
	{ return MATH_DOLLAR_DOUBLE; }
yy276:
	yych = *++YYCURSOR;
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
	case 0x00:
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case 0xC2:	goto yy285;
	case '#':	goto yy291;
	default:	goto yy67;
	}
yy277:
	yyaccept = 14;
	YYMARKER = ++YYCURSOR;
	yych = *YYCURSOR;
yy278:
	switch (yych) {
	case 0x00:
	case '\n':	goto yy281;
	case '\t':
	case ' ':	goto yy277;
	case '\r':	goto yy283;
	case 0xC2:	goto yy280;
	default:	goto yy279;
	}
yy279:
	{ return HASH1; }
yy280:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy277;
	default:	goto yy67;
	}
yy281:
	++YYCURSOR;
yy282:
	YYCURSOR = YYCTXMARKER;
	{ return HASH1; }
yy283:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy281;
	default:	goto yy282;
	}
yy284:
	yyaccept = 15;
	YYMARKER = ++YYCURSOR;
	yych = *YYCURSOR;
yy285:
	switch (yych) {
	case 0x00:
	case '\n':	goto yy288;
	case '\t':
	case ' ':	goto yy284;
	case '\r':	goto yy290;
	case 0xC2:	goto yy287;
	default:	goto yy286;
	}
yy286:
	{ return HASH2; }
yy287:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy284;
	default:	goto yy67;
	}
yy288:
	++YYCURSOR;
yy289:
	YYCURSOR = YYCTXMARKER;
	{ return HASH2; }
yy290:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy288;
	default:	goto yy289;
	}
yy291:
	yych = *++YYCURSOR;
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
	case 0x00:
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case 0xC2:	goto yy294;
	case '#':	goto yy292;
	default:	goto yy67;
	}
yy292:
	yych = *++YYCURSOR;
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
	case 0x00:
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case 0xC2:	goto yy301;
	case '#':	goto yy307;
	default:	goto yy67;
	}
yy293:
	yyaccept = 16;
	YYMARKER = ++YYCURSOR;
	yych = *YYCURSOR;
yy294:
	switch (yych) {
	case 0x00:
	case '\n':	goto yy297;
	case '\t':
	case ' ':	goto yy293;
	case '\r':	goto yy299;
	case 0xC2:	goto yy296;
	default:	goto yy295;
	}
yy295:
	{ return HASH3; }
yy296:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy293;
	default:	goto yy67;
	}
yy297:
	++YYCURSOR;
yy298:
	YYCURSOR = YYCTXMARKER;
	{ return HASH3; }
yy299:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy297;
	default:	goto yy298;
	}
yy300:
	yyaccept = 17;
	YYMARKER = ++YYCURSOR;
	yych = *YYCURSOR;
yy301:
	switch (yych) {
	case 0x00:
	case '\n':	goto yy304;
	case '\t':
	case ' ':	goto yy300;
	case '\r':	goto yy306;
	case 0xC2:	goto yy303;
	default:	goto yy302;
	}
yy302:
	{ return HASH4; }
yy303:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy300;
	default:	goto yy67;
	}
yy304:
	++YYCURSOR;
yy305:
	YYCURSOR = YYCTXMARKER;
	{ return HASH4; }
yy306:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy304;
	default:	goto yy305;
	}
yy307:
	yych = *++YYCURSOR;
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
	case 0x00:
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case 0xC2:	goto yy310;
	case '#':	goto yy308;
	default:	goto yy67;
	}
yy308:
	yych = *++YYCURSOR;
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
	case 0x00:
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case 0xC2:	goto yy317;
	default:	goto yy67;
	}
yy309:
	yyaccept = 18;
	YYMARKER = ++YYCURSOR;
	yych = *YYCURSOR;
yy310:
	switch (yych) {
	case 0x00:
	case '\n':	goto yy313;
	case '\t':
	case ' ':	goto yy309;
	case '\r':	goto yy315;
	case 0xC2:	goto yy312;
	default:	goto yy311;
	}
yy311:
	{ return HASH5; }
yy312:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy309;
	default:	goto yy67;
	}
yy313:
	++YYCURSOR;
yy314:
	YYCURSOR = YYCTXMARKER;
	{ return HASH5; }
yy315:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy313;
	default:	goto yy314;
	}
yy316:
	yyaccept = 19;
	YYMARKER = ++YYCURSOR;
	yych = *YYCURSOR;
yy317:
	switch (yych) {
	case 0x00:
	case '\n':	goto yy320;
	case '\t':
	case ' ':	goto yy316;
	case '\r':	goto yy322;
	case 0xC2:	goto yy319;
	default:	goto yy318;
	}
yy318:
	{ return HASH6; }
yy319:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy316;
	default:	goto yy67;
	}
yy320:
	++YYCURSOR;
yy321:
	YYCURSOR = YYCTXMARKER;
	{ return HASH6; }
yy322:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy320;
	default:	goto yy321;
	}
yy323:
	++YYCURSOR;
	{ return BRACKET_IMAGE_LEFT; }
yy325:
	yych = *++YYCURSOR;
	goto yy7;
yy326:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\n':	goto yy325;
	default:	goto yy7;
	}
yy327:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case ' ':	goto yy328;
	default:	goto yy7;
	}
yy328:
	yych = *++YYCURSOR;
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
	case 0x00:
	case 0x01:
	case 0x02:
	case 0x03:
	case 0x04:
	case 0x05:
	case 0x06:
	case 0x07:
	case 0x08:
	case '\v':
	case '\f':
	case 0x0E:
	case 0x0F:
	case 0x10:
	case 0x11:
	case 0x12:
	case 0x13:
	case 0x14:
	case 0x15:
	case 0x16:
	case 0x17:
	case 0x18:
	case 0x19:
	case 0x1A:
	case 0x1B:
	case 0x1C:
	case 0x1D:
	case 0x1E:
	case 0x1F:
	case '!':
	case '"':
	case '#':
	case '$':
	case '%':
	case '&':
	case '\'':
	case '(':
	case ')':
	case '*':
	case '+':
	case ',':
	case '-':
	case '.':
	case '/':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case ':':
	case ';':
	case '<':
	case '=':
	case '>':
	case '?':
	case '@':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '[':
	case '\\':
	case ']':
	case '^':
	case '_':
	case '`':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
	case '{':
	case '|':
	case '}':
	case '~':
	case 0x7F:	goto yy329;
	case 0xC2:
	case 0xC3:
	case 0xC4:
	case 0xC5:
	case 0xC6:
	case 0xC7:
	case 0xC8:
	case 0xC9:
	case 0xCA:
	case 0xCB:
	case 0xCC:
	case 0xCD:
	case 0xCE:
	case 0xCF:
	case 0xD0:
	case 0xD1:
	case 0xD2:
	case 0xD3:
	case 0xD4:
	case 0xD5:
	case 0xD6:
	case 0xD7:
	case 0xD8:
	case 0xD9:
	case 0xDA:
	case 0xDB:
	case 0xDC:
	case 0xDD:
	case 0xDE:
	case 0xDF:	goto yy331;
	case 0xE0:	goto yy332;
	case 0xE1:
	case 0xE2:
	case 0xE3:
	case 0xE4:
	case 0xE5:
	case 0xE6:
	case 0xE7:
	case 0xE8:
	case 0xE9:
	case 0xEA:
	case 0xEB:
	case 0xEC:
	case 0xED:
	case 0xEE:
	case 0xEF:	goto yy333;
	case 0xF0:	goto yy334;
	case 0xF1:
	case 0xF2:
	case 0xF3:	goto yy335;
	case 0xF4:	goto yy336;
	default:	goto yy67;
	}
yy329:
	++YYCURSOR;
	YYCURSOR = YYCTXMARKER;
	{ return TEXT_NL_SP; }
yy331:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy329;
	default:	goto yy67;
	}
yy332:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy331;
	default:	goto yy67;
	}
yy333:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy331;
	default:	goto yy67;
	}
yy334:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy333;
	default:	goto yy67;
	}
yy335:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:
	case 0x90:
	case 0x91:
	case 0x92:
	case 0x93:
	case 0x94:
	case 0x95:
	case 0x96:
	case 0x97:
	case 0x98:
	case 0x99:
	case 0x9A:
	case 0x9B:
	case 0x9C:
	case 0x9D:
	case 0x9E:
	case 0x9F:
	case 0xA0:
	case 0xA1:
	case 0xA2:
	case 0xA3:
	case 0xA4:
	case 0xA5:
	case 0xA6:
	case 0xA7:
	case 0xA8:
	case 0xA9:
	case 0xAA:
	case 0xAB:
	case 0xAC:
	case 0xAD:
	case 0xAE:
	case 0xAF:
	case 0xB0:
	case 0xB1:
	case 0xB2:
	case 0xB3:
	case 0xB4:
	case 0xB5:
	case 0xB6:
	case 0xB7:
	case 0xB8:
	case 0xB9:
	case 0xBA:
	case 0xBB:
	case 0xBC:
	case 0xBD:
	case 0xBE:
	case 0xBF:	goto yy333;
	default:	goto yy67;
	}
yy336:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0x8B:
	case 0x8C:
	case 0x8D:
	case 0x8E:
	case 0x8F:	goto yy333;
	default:	goto yy67;
	}
}

}
