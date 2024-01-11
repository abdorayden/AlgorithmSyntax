#include "../Algorithm.h"

VAR
	INTEGER i;

BEGIN
	program(__FILE__);
	i is 1;
	WHILE i < 10 DO
	begin
		fwrite("%d" , i);
		endl;
		i is i + 1;
	end

END_SUCCESS

