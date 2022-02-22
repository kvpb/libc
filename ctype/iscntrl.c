/*//  Copyright 2014 Karl V. P. Bertin
////
////  Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
////
////    1.  Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
////
////    2.  Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
////
////    3.  Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
////
*///  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

//#include "../include/ctype.h"
//#include <stdio.h> //	debug code

#undef iscntrl

int iscntrl(int c)
{
	return ( ( ( 0 <= c && c <= 31 ) || ( c == 127 ) ) ? 1 : 0 );
}

/*int main()
{
	char c_0 = '\0';
	char c_1 = 1;
	char c_2 = 2;
	char c_3 = 3;
	char c_4 = 4;
	char c_5 = 5;
	char c_6 = 6;
	char c_7 = '\a';
	char c_8 = '\b';
	char c_9 = '\t';
	char c_10 = '\n';
	char c_11 = '\v';
	char c_12 = '\f';
	char c_13 = '\r';
	char c_14 = 14;
	char c_15 = 15;
	char c_16 = 16;
	char c_17 = 17;
	char c_18 = 18;
	char c_19 = 19;
	char c_20 = 20;
	char c_21 = 21;
	char c_22 = 22;
	char c_23 = 23;
	char c_24 = 24;
	char c_25 = 25;
	char c_26 = 26;
	char c_27 = '\e';
	char c_28 = 28;
	char c_29 = 29;
	char c_30 = 30;
	char c_31 = 31;
	char c_32 = ' ';
	char c_33 = '!';
	char c_34 = '"';
	char c_35 = '#';
	char c_36 = '$';
	char c_37 = '%';
	char c_38 = '&';
	char c_39 = '\'';
	char c_40 = '(';
	char c_41 = ')';
	char c_42 = '*';
	char c_43 = '+';
	char c_44 = ',';
	char c_45 = '-';
	char c_46 = '.';
	char c_47 = '/';
	char c_48 = '0';
	char c_49 = '1';
	char c_50 = '2';
	char c_51 = '3';
	char c_52 = '4';
	char c_53 = '5';
	char c_54 = '6';
	char c_55 = '7';
	char c_56 = '8';
	char c_57 = '9';
	char c_58 = ':';
	char c_59 = ';';
	char c_60 = '<';
	char c_61 = '=';
	char c_62 = '>';
	char c_63 = '?';
	char c_64 = '@';
	char c_65 = 'A';
	char c_66 = 'B';
	char c_67 = 'C';
	char c_68 = 'D';
	char c_69 = 'E';
	char c_70 = 'F';
	char c_71 = 'G';
	char c_72 = 'H';
	char c_73 = 'I';
	char c_74 = 'J';
	char c_75 = 'K';
	char c_76 = 'L';
	char c_77 = 'M';
	char c_78 = 'N';
	char c_79 = 'O';
	char c_80 = 'P';
	char c_81 = 'Q';
	char c_82 = 'R';
	char c_83 = 'S';
	char c_84 = 'T';
	char c_85 = 'U';
	char c_86 = 'V';
	char c_87 = 'W';
	char c_88 = 'X';
	char c_89 = 'Y';
	char c_90 = 'Z';
	char c_91 = '[';
	char c_92 = '\\';
	char c_93 = ']';
	char c_94 = '^';
	char c_95 = '_';
	char c_96 = '`';
	char c_97 = 'a';
	char c_98 = 'b';
	char c_99 = 'c';
	char c_100 = 'd';
	char c_101 = 'e';
	char c_102 = 'f';
	char c_103 = 'g';
	char c_104 = 'h';
	char c_105 = 'i';
	char c_106 = 'j';
	char c_107 = 'k';
	char c_108 = 'l';
	char c_109 = 'm';
	char c_110 = 'n';
	char c_111 = 'o';
	char c_112 = 'p';
	char c_113 = 'q';
	char c_114 = 'r';
	char c_115 = 's';
	char c_116 = 't';
	char c_117 = 'u';
	char c_118 = 'v';
	char c_119 = 'w';
	char c_120 = 'x';
	char c_121 = 'y';
	char c_122 = 'z';
	char c_123 = '{';
	char c_124 = '|';
	char c_125 = '}';
	char c_126 = '~';
	char c_127 = 127;

	printf("NUL\t%d\n", iscntrl((int) c_0));
	printf("SOH\t%d\n", iscntrl((int) c_1));
	printf("STX\t%d\n", iscntrl((int) c_2));
	printf("ETX\t%d\n", iscntrl((int) c_3));
	printf("EOT\t%d\n", iscntrl((int) c_4));
	printf("ENQ\t%d\n", iscntrl((int) c_5));
	printf("ACK\t%d\n", iscntrl((int) c_6));
	printf("BEL\t%d\n", iscntrl((int) c_7));
	printf("BS\t%d\n", iscntrl((int) c_8));
	printf("HT\t%d\n", iscntrl((int) c_9));
	printf("NL\t%d\n", iscntrl((int) c_10));
	printf("VT\t%d\n", iscntrl((int) c_11));
	printf("NP\t%d\n", iscntrl((int) c_12));
	printf("CR\t%d\n", iscntrl((int) c_13));
	printf("SO\t%d\n", iscntrl((int) c_14));
	printf("SI\t%d\n", iscntrl((int) c_15));
	printf("DLE\t%d\n", iscntrl((int) c_16));
	printf("DC1\t%d\n", iscntrl((int) c_17));
	printf("DC2\t%d\n", iscntrl((int) c_18));
	printf("DC3\t%d\n", iscntrl((int) c_19));
	printf("DC4\t%d\n", iscntrl((int) c_20));
	printf("NAK\t%d\n", iscntrl((int) c_21));
	printf("SYN\t%d\n", iscntrl((int) c_22));
	printf("ETB\t%d\n", iscntrl((int) c_23));
	printf("CAN\t%d\n", iscntrl((int) c_24));
	printf("EM\t%d\n", iscntrl((int) c_25));
	printf("SUB\t%d\n", iscntrl((int) c_26));
	printf("ESC\t%d\n", iscntrl((int) c_27));
	printf("FS\t%d\n", iscntrl((int) c_28));
	printf("GS\t%d\n", iscntrl((int) c_29));
	printf("RS\t%d\n", iscntrl((int) c_30));
	printf("US\t%d\n", iscntrl((int) c_31));
	printf("SP\t%d\n", iscntrl((int) c_32));
	printf("!\t%d\n", iscntrl((int) c_33));
	printf("\"\t%d\n", iscntrl((int) c_34));
	printf("#\t%d\n", iscntrl((int) c_35));
	printf("$\t%d\n", iscntrl((int) c_36));
	printf("%%\t%d\n", iscntrl((int) c_37));
	printf("&\t%d\n", iscntrl((int) c_38));
	printf("'\t%d\n", iscntrl((int) c_39));
	printf("\(\t%d\n", iscntrl((int) c_40));
	printf(")\t%d\n", iscntrl((int) c_41));
	printf("*\t%d\n", iscntrl((int) c_42));
	printf("+\t%d\n", iscntrl((int) c_43));
	printf(",\t%d\n", iscntrl((int) c_44));
	printf("-\t%d\n", iscntrl((int) c_45));
	printf(".\t%d\n", iscntrl((int) c_46));
	printf("/\t%d\n", iscntrl((int) c_47));
	printf("0\t%d\n", iscntrl((int) c_48));
	printf("1\t%d\n", iscntrl((int) c_49));
	printf("2\t%d\n", iscntrl((int) c_50));
	printf("3\t%d\n", iscntrl((int) c_51));
	printf("4\t%d\n", iscntrl((int) c_52));
	printf("5\t%d\n", iscntrl((int) c_53));
	printf("6\t%d\n", iscntrl((int) c_54));
	printf("7\t%d\n", iscntrl((int) c_55));
	printf("8\t%d\n", iscntrl((int) c_56));
	printf("9\t%d\n", iscntrl((int) c_57));
	printf(":\t%d\n", iscntrl((int) c_58));
	printf(";\t%d\n", iscntrl((int) c_59));
	printf("<\t%d\n", iscntrl((int) c_60));
	printf("=\t%d\n", iscntrl((int) c_61));
	printf(">\t%d\n", iscntrl((int) c_62));
	printf("?\t%d\n", iscntrl((int) c_63));
	printf("@\t%d\n", iscntrl((int) c_64));
	printf("A\t%d\n", iscntrl((int) c_65));
	printf("B\t%d\n", iscntrl((int) c_66));
	printf("C\t%d\n", iscntrl((int) c_67));
	printf("D\t%d\n", iscntrl((int) c_68));
	printf("E\t%d\n", iscntrl((int) c_69));
	printf("F\t%d\n", iscntrl((int) c_70));
	printf("G\t%d\n", iscntrl((int) c_71));
	printf("H\t%d\n", iscntrl((int) c_72));
	printf("I\t%d\n", iscntrl((int) c_73));
	printf("J\t%d\n", iscntrl((int) c_74));
	printf("K\t%d\n", iscntrl((int) c_75));
	printf("L\t%d\n", iscntrl((int) c_76));
	printf("M\t%d\n", iscntrl((int) c_77));
	printf("N\t%d\n", iscntrl((int) c_78));
	printf("O\t%d\n", iscntrl((int) c_79));
	printf("P\t%d\n", iscntrl((int) c_80));
	printf("Q\t%d\n", iscntrl((int) c_81));
	printf("R\t%d\n", iscntrl((int) c_82));
	printf("S\t%d\n", iscntrl((int) c_83));
	printf("T\t%d\n", iscntrl((int) c_84));
	printf("U\t%d\n", iscntrl((int) c_85));
	printf("V\t%d\n", iscntrl((int) c_86));
	printf("W\t%d\n", iscntrl((int) c_87));
	printf("X\t%d\n", iscntrl((int) c_88));
	printf("Y\t%d\n", iscntrl((int) c_89));
	printf("Z\t%d\n", iscntrl((int) c_90));
	printf("[\t%d\n", iscntrl((int) c_91));
	printf("\\\t%d\n", iscntrl((int) c_92));
	printf("]\t%d\n", iscntrl((int) c_93));
	printf("^\t%d\n", iscntrl((int) c_94));
	printf("_\t%d\n", iscntrl((int) c_95));
	printf("`\t%d\n", iscntrl((int) c_96));
	printf("a\t%d\n", iscntrl((int) c_97));
	printf("b\t%d\n", iscntrl((int) c_98));
	printf("c\t%d\n", iscntrl((int) c_99));
	printf("d\t%d\n", iscntrl((int) c_100));
	printf("e\t%d\n", iscntrl((int) c_101));
	printf("f\t%d\n", iscntrl((int) c_102));
	printf("g\t%d\n", iscntrl((int) c_103));
	printf("h\t%d\n", iscntrl((int) c_104));
	printf("i\t%d\n", iscntrl((int) c_105));
	printf("j\t%d\n", iscntrl((int) c_106));
	printf("k\t%d\n", iscntrl((int) c_107));
	printf("l\t%d\n", iscntrl((int) c_108));
	printf("m\t%d\n", iscntrl((int) c_109));
	printf("n\t%d\n", iscntrl((int) c_110));
	printf("o\t%d\n", iscntrl((int) c_111));
	printf("p\t%d\n", iscntrl((int) c_112));
	printf("q\t%d\n", iscntrl((int) c_113));
	printf("r\t%d\n", iscntrl((int) c_114));
	printf("s\t%d\n", iscntrl((int) c_115));
	printf("t\t%d\n", iscntrl((int) c_116));
	printf("u\t%d\n", iscntrl((int) c_117));
	printf("v\t%d\n", iscntrl((int) c_118));
	printf("w\t%d\n", iscntrl((int) c_119));
	printf("x\t%d\n", iscntrl((int) c_120));
	printf("y\t%d\n", iscntrl((int) c_121));
	printf("z\t%d\n", iscntrl((int) c_122));
	printf("{\t%d\n", iscntrl((int) c_123));
	printf("|\t%d\n", iscntrl((int) c_124));
	printf("}\t%d\n", iscntrl((int) c_125));
	printf("~\t%d\n", iscntrl((int) c_126));
	printf("DEL\t%d\n", iscntrl((int) c_127));
	return 0;
}*/ //	debug code

/*//	iscntrl.c
		IsCNTRL

		Karl V. P. Bertin `kvpb`
		+1 (DDD) DDD-DDDD
		+33 A BB BB BB BB
		local-part@domain
		https://www.linkedin.com/in/karlbertin
		https://twitter.com/kvpb777
		https://github.com/kvpb
		https://www.instagram.com/add/karlbertin
		https://vm.tiktok.com/ZSwAmcFh/

*///	The IsCNTRL function tests for any control character. This includes the characters 000 to 037 and 177 in octal in the ASCII character set.
