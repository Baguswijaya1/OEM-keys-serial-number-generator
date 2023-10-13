
/*
	OEM keys consists of 4 segments. the general form is xxxxx-OEM-xxxxxxx-xxxxx
	
	first segment - date
	the first segment represents the date the key was printed on. The first 3 digits are anything
	from 001 to 366 (day of the year) and the last 2 digits are the last digit of the year. You can
	set this segment by inputting the date.
	
	second segment - OEM
	it's self-explanatory. The first Windows 95 release is the only piece of software I'm aware of that
	actually requires typing in. Or Simply, just write "OEM".
	
	third segment - mod7 algorithm
	It contains 7 digit of number. They are random-generated numbers. However, if you sum every number on each digit,
	the modulo with 7 will always == 0. The first digit always 0.
	
	fourth segment - trully random
	It's trully random, and can be anything numeric so long as it's 5 digits long.	
*/
