#include<stdio.h>

int main(){
	int initD, initH, initM, initS;
	int finalD, finalH, finalM, finalS;
	int duration = 0;
	char colon[5];
	char initialday[4];
	char finalday[4];

	scanf("%s %d", initialday,  &initD);
	scanf("%d %s %d %s %d", &initH, colon,  &initM, colon, &initS);

	scanf("%s %d", finalday, &finalD);
	scanf("%d %s %d %s %d", &finalH, colon,  &finalM, colon, &finalS);

	/* here is where the fun begins :)
	 * first of all, in order to get the desired output without further difficulties, the program will convert the difference between both dates and times into seconds. note that:
	 * 1 day = 24 hours
	 * 1 hour = 60 minutes
	 * 1 minute = 60 seconds*/ 
	
	duration = ((finalD*86400) + (finalH*3600) + (finalM*60) + finalS) - ((initD*86400) + (initH*3600) + (initM*60) + initS);
	
	/*now, the objective is to convert seconds into days, hours and minutes! also, instead of declaring new variables and blah blah blah, the math will be done directly where it should be*/

	printf("%d dia(s)\n", duration/86400);
	printf("%d hora(s)\n",(duration%86400)/3600);
	printf("%d minuto(s)\n", ((duration%86400)%3600)/60);
	printf("%d segundo(s)\n",((duration%86400)%3600)%60);

	return 0;
}
