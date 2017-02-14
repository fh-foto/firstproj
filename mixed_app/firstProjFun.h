#pragma once


int fScan() {

	int dpi = 0, farbtiefe = 0;
	float breite = 0, hoehe = 0;
	double groesse = 0.00;

	printf("Bitte geben Sie die dpi ein:\n");
	scanf("%i", &dpi);

	printf("Bitte geben Sie die Farbtiefe ein:\n");
	scanf("%i", &farbtiefe);

	printf("Bitte geben Sie die Breite in cm ein:\n");
	scanf("%f", &breite);

	printf("Bitte geben Sie die Hoehe in cm ein:\n");
	scanf("%f", &hoehe);

	groesse = (((breite*dpi) / 2.54 * (hoehe * dpi) / 2.54)*farbtiefe)/8/1024/1024;

	printf("Die zu erwartende Dateigr\x94\xe1\e: %4lf MiB\n", groesse );

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
