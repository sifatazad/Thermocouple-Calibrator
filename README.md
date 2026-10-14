This project inclues 3 function for users.

1. void chart(FILE *fp)
2. float corr_fact(float T_room, char temp, char thermocouple_type)
3. void std_chart(char thermocouple_type, char temp)

What these function do?

(i) chart() function will need an argument. The argument is the file pointer of your text file.
	Your text file must maintain a format.
	Obs.No.			Actual Temperature			Measured Voltage
	Without this format your text file will be of no use. Be careful about the units you delivered in that text file.
	As it's a void function nothing will be returned and we tried to make this function user friendly. So run the the function and
	see the magic!!
	
(ii) corr_fact() function basically returns you a float number. The correction factor of the thermocouple at that room temperature.
	 Be sure which type or temperature you are providing!
	 
(iii) std_chart() function prints the standard NIST charts of thermocouple. You can also save it in your device as a text file.
