#pragma once


int fScan() {



	return 0;
}

int fKinder(void) {
	int kinder = 0, eier = 0, rest = 0, erhalten = 0;
	printf("Willkommen zum Kindergeburtstag\nWie viele Kinder sind da?\n");
	scanf("%i", &kinder);
	printf("Wie viele \x9a\x62\erraschungseier hast Du?\nIch hoffe mehr als Kinder, sonst gibt es Streit.\n");
	scanf("%i", &eier);
	erhalten = eier / kinder;
	rest = eier%kinder;
	printf("Es wurden %i Kinder eingeladen und jedes hat %i \x9a\x62\erraschungseier erhalten.\n"
		"Es blieben noch %i Eier \x81\x62rig.\n", kinder, erhalten, rest);
	return 0;
}
